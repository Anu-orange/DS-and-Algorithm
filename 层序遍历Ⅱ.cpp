///*
//	给你二叉树的根节点 root ，返回其节点值 自底向上的层序遍历 。 
//	（即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
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
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		vector<vector<int>> result;
//		//层序遍历相关一定是用队列
//		queue<TreeNode*> que;
//		if (root == nullptr) {
//			return result;
//		}
//		que.push(root);
//		TreeNode* cur;
//		vector<int> v;
//		while (!que.empty()) {
//			//计算队列长度
//			int size = que.size();
//			for (int i = 0; i < size; i++) {
//				cur = que.front();
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//				v.push_back(cur->val);
//				que.pop();
//			}
//			result.push_back(v);
//			v.cle ar();
//		}
//		//将元素翻转
//		reverse(result.begin(), result.end());
//		return result;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}