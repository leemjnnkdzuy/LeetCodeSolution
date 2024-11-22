#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

#define FI "input.INP"

void run(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen(FI, "r", stdin); 
}

struct Point {
    int x, y, step = 0;
};

void func() {
    int M, N, P;
    cin >> M >> N >> P;

    vector<string> arr_temp(M);

    vector<vector<string>> arr(M, vector<string>(N));
    map<pair<int, int>, int> visited;

    for (int i = 0; i < M; i++) {
        cin >> arr_temp[i];
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = arr_temp[i][j];
        }
    }

    Point point;
    point.x = 0;
    point.y = P - 1;

    while (1) {
        if (point.x < 0 || point.x >= M || point.y < 0 || point.y >= N) {
            cout << point.step << endl;
            return;
        }

        if (visited.find({point.x, point.y}) != visited.end()) {
            int loop = visited[{point.x, point.y}];
            int loop_length = point.step - loop;
            cout << loop << " " << loop_length;
            return;
        }

        visited[{point.x, point.y}] = point.step;

        if (arr[point.x][point.y] == "E") {
            point.y++;
        } else if (arr[point.x][point.y] == "W") { 
            point.y--; 
        } else if (arr[point.x][point.y] == "N") {
            point.x--;
        } else if (arr[point.x][point.y] == "S") {
            point.x++;
        }

        point.step++;
    }
}

int main(){
    run();
    func();
    return 0;
}
