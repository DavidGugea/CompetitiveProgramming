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
	vector<int> preorderTraversal(TreeNode* root) {
		// n l r
		stack<TreeNode*> s;
		vector<int> result;

		s.push(root);

		while (!s.empty()) {
			TreeNode* current = s.top(); s.pop();

			if (current != nullptr) {
				result.push_back(current->val);
				s.push(current->left);
				s.push(current->right);
			}
		}

		return result;
	}
};
