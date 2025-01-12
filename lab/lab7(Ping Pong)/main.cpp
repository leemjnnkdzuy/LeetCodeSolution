#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll memo[11][11][2]; // memo[alice_score][bob_score][player_turn]
int need_score;

bool isGameOver(int alice, int bob) {
    // Kiểm tra xem trận đấu đã kết thúc chưa
    if(alice >= need_score && alice >= bob + 2) return true;
    if(bob >= need_score && bob >= alice + 2) return true;
    return false;
}

ll solve(int alice, int bob, int target_alice, int target_bob) {
    // Nếu vượt quá điểm mục tiêu thì không hợp lệ
    if(alice > target_alice || bob > target_bob) return 0;
    
    // Nếu đạt được đúng điểm mục tiêu và trận đấu kết thúc hợp lệ
    if(alice == target_alice && bob == target_bob && isGameOver(alice, bob)) 
        return 1;
        
    // Nếu trận đấu kết thúc nhưng chưa đạt điểm mục tiêu
    if(isGameOver(alice, bob))
        return 0;
        
    if(memo[alice][bob][0] != -1)
        return memo[alice][bob][0];

    // Thử cả 2 trường hợp: Alice ghi điểm hoặc Bob ghi điểm        
    ll ways = solve(alice + 1, bob, target_alice, target_bob) + 
              solve(alice, bob + 1, target_alice, target_bob);
              
    return memo[alice][bob][0] = ways;
}

void process_test() {
    int alice_score, bob_score;
    cin >> need_score >> alice_score >> bob_score;
    
    // Khởi tạo mảng memo
    memset(memo, -1, sizeof(memo));
    
    // Xử lý các trường hợp đặc biệt
    if(alice_score == 0 && bob_score == 0) {
        cout << 0 << "\n";
        return;
    }
    
    // Kiểm tra xem điểm số cuối cùng có hợp lệ không
    if(!isGameOver(alice_score, bob_score)) {
        cout << 0 << "\n";
        return;
    }
    
    // Tính toán số cách có thể
    ll result = solve(0, 0, alice_score, bob_score);
    cout << result << "\n";
}

int main() {
    freopen("input.INP", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int tests;
    cin >> tests;
    while(tests--) {
        process_test();
    }
    return 0;
}