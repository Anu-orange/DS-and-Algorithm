///*
//	给定一个非空二叉树的根节点 root , 以数组的形式返回每一层节点的平均值。
//	与实际答案相差 10-5 以内的答案可以被接受。
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
//	vector<double> averageOfLevels(TreeNode* root) {
//		//auto是自动类型推断
//		auto result = vector<double>();
//		auto que = queue<TreeNode*>();
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur;
//		//记录每一层的和以及队列长度
//		long long sum;
//		int size;
//		que.push(root);
//		while (!que.empty()) {
//			//每一层都将和初始化为0
//			sum = 0;
//			//计算队列长度
//			size = que.size();
//			for (int i = 0; i < size; i++) {
//				cur = que.front();
//				sum += cur->val;
//				que.pop();
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//			}
//			result.push_back((double)sum / size);
//		}
//		return result;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}