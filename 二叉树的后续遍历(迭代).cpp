///*
//	������ʽ���к�������
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	vector<int> postorderTraversal(TreeNode* root) {
//		/*
//			��ʵ����������˳���ǰ�������˳���е��� ������ �� ���Ҹ������ҵ�˳��ʱû��ģ����ܲ���
//			��ǰ��������ת���أ��������ڴ����е�˳���Ǹ������Ǵ���˳�򻻳ɸ�����֮��������˳���ǲ��Ǿ���
//			�������ˣ����ٰ�result���������תһ���ǲ��Ǿͳ���
//		*/
//		stack<TreeNode*> s;
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		s.push(root);
//		TreeNode* cur;
//		while (!s.empty()) {
//			cur = s.top();
//			result.push_back(cur->val);
//			s.pop();
//
//			//�����������ڽ���˳��
//			if (cur->left != nullptr) {
//				s.push(cur->left);
//			}
//
//			if (cur->right != nullptr) {
//				s.push(cur->right);
//			}
//		}
//		//���˵õ���˳���Ǹ�����
//		//����reverse������result���з�ת�õ����Ҹ�
//		reverse(result.begin(), result.end());
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//��������ʱָ����յ��ǵ�ַ
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.postorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}