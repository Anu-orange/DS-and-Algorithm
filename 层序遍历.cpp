///*
//	二叉树的层序遍历需要借助队列来实现，从上往下依层次进行搜索遍历的话，其实它遵循的原则就是遍历顺序
//	和处理顺序是一样的
//	最需要弄清楚的一个问题就是：出队时每一次出多少个元素是怎么来决定的呢？
//	答案：其实每一次出多少个元素完全是由上一次的孩子节点个数来决定的，那如何知道上一次的孩子节点个数呢
//	当将cur指向队头节点的时候，此时即将要入队的元素是下一层的节点，那此时队列中的元素就是这一层的节点数
//	所以，在未入队下一层节点时，求队列的大小就知道当前要出多少个元素了
//
//	解决的方式就是：在未出栈以及入左孩子之前将队列的大小保存起来
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
//	TreeNode() :val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	vector<vector<int>> levelOrder(TreeNode* root) {
//		//需要返回的结果集
//		vector<vector<int>> result;
//		queue<TreeNode*> que;
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur;
//		//每一层节点存储的vector
//		vector<int> v;
//		que.push(root);
//		while (!que.empty()) {
//			//即将要入下一层的节点，此时求解队列大小就是当前层的节点个数，一定要用变量保存
//			// 因为在即将入队的过程中也在出队，那队列的个数在变
//			int size = que.size(); //这个数值就是当前层要出队的元素个数
//			for (int i = 0; i < size; i++) {
//				//cur指向队头元素
//				cur = que.front();
//				v.push_back(cur->val);
//				que.pop();
//				//左孩子入队
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//				//右孩子入队
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//			}
//			//一轮循环结束将v加入到结果集中并清理v
//			result.push_back(v);
//			v.clear();
//		}
//		return result;
//	}
//};
//
//int main() {
//	Solution solution;
//
//}