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
//		/*
//			统一迭代方式就要涉及到为"根"节点添加null标记了
//		*/
//		stack<TreeNode*> s;
//		if (root == nullptr) {
//			return root;
//		}
//		TreeNode* cur;
//		s.push(root);
//		while (!s.empty()) {
//			cur = s.top();
//			if (cur != nullptr) {
//				//说明此时当前节点还不是要处理的节点，那么就可以继续往里面添加节点
//				//但注意的时，统一迭代方式要先将栈顶元素出栈，最后按照遍历相反顺序再压栈
//				s.pop();
//				//迭代法压栈时可以按照遍历相反的顺序进行压栈的
//				if (cur->right != nullptr) {
//					s.push(cur->right);
//				}
//				if (cur->left != nullptr) {
//					s.push(cur->left);
//				}
//				s.push(cur);
//				//标记
//				s.push(nullptr);
//			}
//			else {
//				//将null取出来
//				s.pop();
//				cur = s.top();
//				swap(cur->left, cur->right);
//				s.pop();
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