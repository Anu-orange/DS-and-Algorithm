///*
//	给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。
//*/
//#include <iostream>
//using namespace std;
//#include <stack>
//struct TreeNode {
//	//二叉树的节点定义
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(NULL), right(NULL) {}
//	TreeNode(int value) :val(value), left(NULL), right(NULL) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		//使用先序遍历的迭代方式
//		stack<TreeNode*> s;
//		if (root == nullptr) {
//			return root;
//		}
//		s.push(root);
//		TreeNode* cur;
//		while (!s.empty()) {
//			cur = s.top();
//			swap(cur->left, cur->right);
//			s.pop();
//			if (cur->left != nullptr) {
//				s.push(cur->left);
//			}
//			if (cur->right != nullptr) {
//				s.push(cur->right);
//			}
//		}
//		return root;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}