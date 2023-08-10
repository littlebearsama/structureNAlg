#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

//一、使用递归反转左右子树
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class RevertTree
{
public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root == NULL)
			return NULL;
		TreeNode* tempNode = root->left;
		root->left = invertTree(root->right);
		root->right = invertTree(root->left);
		return root;
	}
};

//二、
