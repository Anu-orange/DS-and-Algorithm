///*
//	�������Ĳ��������Ҫ����������ʵ�֣�������������ν������������Ļ�����ʵ����ѭ��ԭ����Ǳ���˳��
//	�ʹ���˳����һ����
//	����ҪŪ�����һ��������ǣ�����ʱÿһ�γ����ٸ�Ԫ������ô���������أ�
//	�𰸣���ʵÿһ�γ����ٸ�Ԫ����ȫ������һ�εĺ��ӽڵ�����������ģ������֪����һ�εĺ��ӽڵ������
//	����curָ���ͷ�ڵ��ʱ�򣬴�ʱ����Ҫ��ӵ�Ԫ������һ��Ľڵ㣬�Ǵ�ʱ�����е�Ԫ�ؾ�����һ��Ľڵ���
//	���ԣ���δ�����һ��ڵ�ʱ������еĴ�С��֪����ǰҪ�����ٸ�Ԫ����
//
//	����ķ�ʽ���ǣ���δ��ջ�Լ�������֮ǰ�����еĴ�С��������
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
//	TreeNode() :val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	vector<vector<int>> levelOrder(TreeNode* root) {
//		//��Ҫ���صĽ����
//		vector<vector<int>> result;
//		queue<TreeNode*> que;
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur;
//		//ÿһ��ڵ�洢��vector
//		vector<int> v;
//		que.push(root);
//		while (!que.empty()) {
//			//����Ҫ����һ��Ľڵ㣬��ʱ�����д�С���ǵ�ǰ��Ľڵ������һ��Ҫ�ñ�������
//			// ��Ϊ�ڼ�����ӵĹ�����Ҳ�ڳ��ӣ��Ƕ��еĸ����ڱ�
//			int size = que.size(); //�����ֵ���ǵ�ǰ��Ҫ���ӵ�Ԫ�ظ���
//			for (int i = 0; i < size; i++) {
//				//curָ���ͷԪ��
//				cur = que.front();
//				v.push_back(cur->val);
//				que.pop();
//				//�������
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//				//�Һ������
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//			}
//			//һ��ѭ��������v���뵽������в�����v
//			result.push_back(v);
//			v.clear();
//		}
//		return result;
//	}
//};
//
//int main() {
//	Solution solution;
//
//}