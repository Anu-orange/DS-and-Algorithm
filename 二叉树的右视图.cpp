///*
//	����һ���������� ���ڵ� root��
//	�����Լ�վ�������Ҳ࣬���մӶ������ײ���˳�򣬷��ش��Ҳ����ܿ����Ľڵ�ֵ��
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
//	vector<int> rightSideView(TreeNode* root) {
//		/*
//			�����ܼ򵥣����������ÿһ���Ԫ�ظ������ǿ���ͨ�������г�����֪���ô
//			forѭ��������һ��Ľڵ�ʱ��i�������size-1ʱ����ô��ʱ�Ķ�ͷԪ�ؾ��ǵ�ǰ�������Ǹ�Ԫ��
//		*/
//		queue<TreeNode*> que;
//		//�����vector
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		//root�ڵ����
//		que.push(root);
//		//��ʱָ��
//		TreeNode* cur;
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
//				if (i != size - 1) {
//					//�ǵ�ǰ�����һ��Ԫ�������
//					que.pop();
//				}
//				else {
//					//��ʱ��ջ��Ԫ���ǵ�ǰ������һ���ڵ��ˣ����뵽�������
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