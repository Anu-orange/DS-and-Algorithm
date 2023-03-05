///*
//	给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。
//*/
//#include <iostream>
//using namespace std;
//#include <queue>
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
//		/*
//		* 使用前序遍历
//			递归三部曲：
//			1、参数和返回值，参数传入的当然是节点，返回值题目给定了TreeNode*
//			2、终止条件：如果节点为null
//			3、单层逻辑：交换节点
//		*/
//		if (root == nullptr) {
//			return root;
//		}
//		swap(root->left, root->right);
//		invertTree(root->left);
//		invertTree(root->right);
//		return root;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}