///*
//	����˼·�Ǻ�ǰ��һ���ģ�ֻ��ѹջ��˳���� ������ѹ��֮��Ҫ�������б��
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//struct TreeNode {
//	//�������Ľڵ㶨��
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
//		//����ջ��vector
//		stack<TreeNode*> s;
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur;
//		s.push(root);
//		while (!s.empty()) {
//			//��ס����ʱָ��һ����ָ��ջ��Ԫ�ص�
//			cur = s.top();
//			if (cur != nullptr) {
//				s.pop();
//				//���ڵ�ѹջ
//				s.push(cur);
//				s.push(nullptr);
//				//�ҽڵ�ѹջ
//				if (cur->right != nullptr)
//					s.push(cur->right);
//				//��ڵ�ѹջ
//				if (cur->left != nullptr)
//					s.push(cur->left);
//			}
//			else {
//				//˵����ǰcurָ�����һ����ǣ���ô��һ��ջ��Ԫ�ؾ���Ҫ�������Ԫ��
//
//				//��nullptr��ջ
//				s.pop();
//				result.push_back(s.top()->val);
//				s.pop();
//			}
//		}
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//��������ʱָ����յ��ǵ�ַ
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.postorderTraversal(treeArray);
//	cout << "�����������Ϊ:" << " ";
//	for (int num : v) {
//		cout << num << "  ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}