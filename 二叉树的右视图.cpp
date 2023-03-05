///*
//	给定一个二叉树的 根节点 root，
//	想象自己站在它的右侧，按照从顶部到底部的顺序，返回从右侧所能看到的节点值。
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
//	vector<int> rightSideView(TreeNode* root) {
//		/*
//			做法很简单，层序遍历，每一层的元素个数不是可以通过求解队列长度已知嘛，那么
//			for循环遍历这一层的节点时，i变量变成size-1时，那么此时的队头元素就是当前层的最后那个元素
//		*/
//		queue<TreeNode*> que;
//		//结果集vector
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		//root节点入队
//		que.push(root);
//		//临时指针
//		TreeNode* cur;
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
//				if (i != size - 1) {
//					//非当前层最后一个元素则出队
//					que.pop();
//				}
//				else {
//					//此时的栈顶元素是当前层的最后一个节点了，加入到结果集中
//					result.push_back(que.front()->val);
//					que.pop();
//				}
//			}
//		}
//		return result;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}