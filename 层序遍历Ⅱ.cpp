///*
//	����������ĸ��ڵ� root ��������ڵ�ֵ �Ե����ϵĲ������ �� 
//	��������Ҷ�ӽڵ����ڲ㵽���ڵ����ڵĲ㣬���������ұ���
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
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
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		vector<vector<int>> result;
//		//����������һ�����ö���
//		queue<TreeNode*> que;
//		if (root == nullptr) {
//			return result;
//		}
//		que.push(root);
//		TreeNode* cur;
//		vector<int> v;
//		while (!que.empty()) {
//			//������г���
//			int size = que.size();
//			for (int i = 0; i < size; i++) {
//				cur = que.front();
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//				v.push_back(cur->val);
//				que.pop();
//			}
//			result.push_back(v);
//			v.cle ar();
//		}
//		//��Ԫ�ط�ת
//		reverse(result.begin(), result.end());
//		return result;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}