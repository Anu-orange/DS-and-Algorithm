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
//		//定义一个queue存储节点
//		queue<TreeNode*> que;		
//		if (root == nullptr) {
//			return root;
//		}
//		//将根节点入队
//		que.push(root);		
//		//tmp用于交换的临时节点,cur用于指向队头节点	
//		TreeNode* tmp,*cur;					
//		while (!que.empty()) {
//			//能进入循环说明队列非空，那cur肯定非空
//			//到这里说明当前节点至少有一个孩子，开始交换左右孩子的节点顺序
//			//求解队列长度
//			int size = que.size();
//			for (int i = 0; i < size; i++) {
//				cur = que.front();
//				if (cur->left == nullptr && cur->right == nullptr) {
//					//当前节点无左孩子也无右孩子，那就不用交换顺序了
//					que.pop();
//					break;
//				}
//				//为当前这一层节点的所有孩子节点进行交换顺序
//				tmp = cur->right;
//				cur->right = cur->left;
//				cur->left = tmp;
//				//此时的左右孩子已经交换了顺序
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//				que.pop();
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