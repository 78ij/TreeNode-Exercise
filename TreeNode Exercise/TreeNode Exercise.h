//A small exerise of Binary Tree
//By 78ij
#ifndef TreeNode_Exercise_H
#define TreeNode_Exercise_H
#include <iostream>
using namespace std;
//The TreeNode struct
struct TreeNode {
	int value = 0;
	TreeNode *left = nullptr;
	TreeNode *right = nullptr;
};
//CreateTree using preorder traverse
TreeNode *CreateTree(TreeNode *root, int layercount) {
	cout << "please input the value of layer " << layercount << endl;
	int temp;
	cin >> temp;
	if (temp == 0) {
		cout << "done input." << endl;
		return nullptr;
	}
	else {
		root = new TreeNode;
		root->value = temp;
        root->left = CreateTree(root->left, layercount + 1);
		root->right = CreateTree(root->right, layercount + 1);
		return root;
	}
}
//inorder traverse of the tree and print it
void InOrderTraverse(TreeNode *root) {
	if (root == nullptr)
		return;
	else {
		InOrderTraverse(root->left);
		cout << root->value << " ";
		InOrderTraverse(root->right);
		return;
	}
}
//Calculate the height of the tree
int LayerCount(TreeNode *root) {
	if (root == nullptr) {
		return 0;
	}
	int left = LayerCount(root->left);
	int right = LayerCount(root->right);
	if (left >= right) {
		return left + 1;
	}
	else {
		return right + 1;
	}
}
//Reverse the binary tree
void ReverseTree(TreeNode *root) {
	if (root == nullptr) return;
	TreeNode *temp = root->left;
	root->left = root->right;
	root->right = temp;
	ReverseTree(root->left);
	ReverseTree(root->right);
}
#endif
