///*
//	����һ�ö������ĸ��ڵ� root ����ת��ö�����������������ڵ㡣
//*/
//#include <iostream>
//using namespace std;
//#include <queue>
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
//		* ʹ��ǰ�����
//			�ݹ���������
//			1�������ͷ���ֵ����������ĵ�Ȼ�ǽڵ㣬����ֵ��Ŀ������TreeNode*
//			2����ֹ����������ڵ�Ϊnull
//			3�������߼��������ڵ�
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