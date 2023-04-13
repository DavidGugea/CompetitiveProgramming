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

	vector<int> bfs(TreeNode* root) {
		queue<TreeNode*> q;
		vector<int> output;

		q.push(root);

		while (!queue.empty()) {
			TreeNode* t = q.front(); q.pop();
			output.push_back(t->val);

			if (t.left != nullptr) {
				q.push(t.left);
			}
			if (t.right != nullptr) {
				q.push(t.right);
			}
		}

		return output;
	}
}
