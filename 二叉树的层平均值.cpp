///*
//	����һ���ǿն������ĸ��ڵ� root , ���������ʽ����ÿһ��ڵ��ƽ��ֵ��
//	��ʵ�ʴ���� 10-5 ���ڵĴ𰸿��Ա����ܡ�
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
//	vector<double> averageOfLevels(TreeNode* root) {
//		//auto���Զ������ƶ�
//		auto result = vector<double>();
//		auto que = queue<TreeNode*>();
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur;
//		//��¼ÿһ��ĺ��Լ����г���
//		long long sum;
//		int size;
//		que.push(root);
//		while (!que.empty()) {
//			//ÿһ�㶼���ͳ�ʼ��Ϊ0
//			sum = 0;
//			//������г���
//			size = que.size();
//			for (int i = 0; i < size; i++) {
//				cur = que.front();
//				sum += cur->val;
//				que.pop();
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//			}
//			result.push_back((double)sum / size);
//		}
//		return result;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}