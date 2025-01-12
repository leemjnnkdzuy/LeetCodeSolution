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

bool isSymmetricHelper(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr) return true;

    if (left == nullptr || right == nullptr) return false;

    if (left->val != right->val) return false;

    return isSymmetricHelper(left->left, right->right) && 
           isSymmetricHelper(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }
    return isSymmetricHelper(root->left, root->right);
}

void func(){

}

int main(){
	test(true);
	func();
	return 0;
}