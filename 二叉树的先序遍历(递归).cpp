///*
//	ʹ�õݹ�д����������ǫ���������
//	���ס�ݹ���������
//	1��ȷ���ݹ麯���Ĳ����Լ�����ֵ
//	2��ȷ���ݹ���ֹ����
//	3��ȷ������ݹ���߼�
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//struct TreeNode{
//	//�������Ľڵ㶨��
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():val(0),left(NULL),right(NULL){}
//	TreeNode(int value):val(value),left(NULL),right(NULL){}
//	TreeNode(int value,TreeNode* lf,TreeNode* rh):val(value),left(lf),right(rh){}
//};
//class Solution {
//public:
//	void Traversal(TreeNode* cur, vector<int>& v) {
//		if (cur == NULL) {
//			return;
//		}
//		v.push_back(cur->val);
//		Traversal(cur->left, v);
//		Traversal(cur->right, v);
//	}
//	vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> result;
//		Traversal(root, result);
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//��������ʱָ����յ��ǵ�ַ
//	TreeNode t4(3),t3(2,&t4,NULL),t1(1,NULL,&t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4};
//	vector<int> v = solution.preorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}