#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

//һ��ʹ�õݹ鷴ת��������
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

//����
