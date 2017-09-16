#include "TreeNode Exercise.h"

int main() {
	TreeNode *root = nullptr;
	root = CreateTree(root, 0);
	InOrderTraverse(root);
	ReverseTree(root);
	InOrderTraverse(root);
	getchar();
	getchar();
}