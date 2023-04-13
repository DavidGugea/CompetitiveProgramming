#include <bits/stdc++. h>

class TreeNode{
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
	}

	TreeNode(int val, TreeNode* left, TreeNode* right) {
		this->val = val;
		this->left = left;
		this->right = right;
	}
}

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> out;
		stack<int> nodes;

		while (root != NULL || !nodes.emtpy()) {
			while (root != NULL) {
				nodes.push(root);
				root = root->left;
			}

			root = nodes.top();
			nodes.pop();

			out.push_back(root->val);
			root=root->right;
		}

		return out;
	}

	vector<int> inorderTraversalRecursive(TreeNode* root) {
		if (root == NULL) {
			return;
		}

		this->inorderTraversalRecursive(root->left);
		cout << root->val << "\n";
		this->inorderTraversalRecursive(root->right);
	}
}