#include "TreeNode Exercise.h"

int main() {
	TreeNode *root = nullptr;
	root = CreateTree(root, 0);
	InOrderTraverse(root);
	getchar();
	getchar();
}