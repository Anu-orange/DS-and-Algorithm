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
//		//����һ��queue�洢�ڵ�
//		queue<TreeNode*> que;		
//		if (root == nullptr) {
//			return root;
//		}
//		//�����ڵ����
//		que.push(root);		
//		//tmp���ڽ�������ʱ�ڵ�,cur����ָ���ͷ�ڵ�	
//		TreeNode* tmp,*cur;					
//		while (!que.empty()) {
//			//�ܽ���ѭ��˵�����зǿգ���cur�϶��ǿ�
//			//������˵����ǰ�ڵ�������һ�����ӣ���ʼ�������Һ��ӵĽڵ�˳��
//			//�����г���
//			int size = que.size();
//			for (int i = 0; i < size; i++) {
//				cur = que.front();
//				if (cur->left == nullptr && cur->right == nullptr) {
//					//��ǰ�ڵ�������Ҳ���Һ��ӣ��ǾͲ��ý���˳����
//					que.pop();
//					break;
//				}
//				//Ϊ��ǰ��һ��ڵ�����к��ӽڵ���н���˳��
//				tmp = cur->right;
//				cur->right = cur->left;
//				cur->left = tmp;
//				//��ʱ�����Һ����Ѿ�������˳��
//				if (cur->left != nullptr) {
//					que.push(cur->left);
//				}
//
//				if (cur->right != nullptr) {
//					que.push(cur->right);
//				}
//				que.pop();
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