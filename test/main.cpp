#include <bits/stdc++.h>

using namespace std;

void LNR(TREE tree){
	if (tree != NULL)
	{
		LNR(tree->pLeft);
		cout << tree->key << " ";
		LNR(tree->pRight);
	}
}

