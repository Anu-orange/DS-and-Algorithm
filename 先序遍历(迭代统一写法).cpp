///*
//	���ڶ�������˵����ʵÿһ���ڵ㶼���Կ�����һ�� "���ڵ�"��Ҳ����˵���ʻ��ߴ���Ķ������"���ڵ�"��
//	�ڱ�����������Ҫ����ľ����Ǹ�"��"���Ǽ�ȻҪ������Ǹ�����ô���ͺ��������Ծ�Ҫ�������б�ǣ�
//	ʹ��һ��null�ڵ����������Ϊʲô��ǣ���α���أ���Ϊ������������棬��ǰ�����Ľڵ㲢����
//	��ǰҪ����Ľڵ㡣���Դ�ʱ�����нڵ�װ��һ��ջ����Ļ�����ôҪ����Ľڵ��Ǳ���Ҫ���б�ǵģ�
//	ÿһ��Ҫ����Ľڵ���ջ�󣬽�������ѹջһ��null�ڵ㣬����ջ�еĽڵ���ǿպͷǿ�����״̬��һ��
//	����null����ôֱ�ӽ��䵯ջ����ʱ��ջ��Ԫ�ؾ���Ҫ�����Ԫ�ء���������ѹջ�Ĺ����У�Ҫ����"ѹջ����
//	�ͱ��������෴��ԭ��"
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
//	vector<int> preorderTraversal(TreeNode* root) {
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
//				//���Ƚ���ǰ�ĸ���������Ҳ����ջ��Ԫ�أ���Ϊ���滹��ѹ������Ĳ���
//				s.pop();
//				//��Ϊ��ǰ�����������ѹջ˳��Ӧ���������
//
//				//�ҽڵ�ѹջ
//				if (cur->right != nullptr)
//					s.push(cur->right);
//				//��ڵ�ѹջ
//				if (cur->left != nullptr)
//					s.push(cur->left);
//				
//				//��ǰ���ڵ�ѹջ(�ýڵ���Ǽ���Ҫ����Ľڵ�)
//				s.push(cur);
//				//����ǰ���ڵ�����һ��nullptr�ı��
//				s.push(nullptr);
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
//	vector<int> v = solution.preorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}