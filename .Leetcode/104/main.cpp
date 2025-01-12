#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
        
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
        
    return max(leftDepth, rightDepth) + 1;
}

void func(){

}

int main(){
	test(true);
	func();
	return 0;
}