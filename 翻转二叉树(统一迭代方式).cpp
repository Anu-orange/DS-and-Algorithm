///*
//	����һ�ö������ĸ��ڵ� root ����ת��ö�����������������ڵ㡣
//*/
//#include <iostream>
//using namespace std;
//#include <stack>
//struct TreeNode {
//	//�������Ľڵ㶨��
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
//			ͳһ������ʽ��Ҫ�漰��Ϊ"��"�ڵ����null�����
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
//				//˵����ʱ��ǰ�ڵ㻹����Ҫ����Ľڵ㣬��ô�Ϳ��Լ�����������ӽڵ�
//				//��ע���ʱ��ͳһ������ʽҪ�Ƚ�ջ��Ԫ�س�ջ������ձ����෴˳����ѹջ
//				s.pop();
//				//������ѹջʱ���԰��ձ����෴��˳�����ѹջ��
//				if (cur->right != nullptr) {
//					s.push(cur->right);
//				}
//				if (cur->left != nullptr) {
//					s.push(cur->left);
//				}
//				s.push(cur);
//				//���
//				s.push(nullptr);
//			}
//			else {
//				//��nullȡ����
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