///*
//	ʹ�õ�����(�ǵݹ鷽ʽ)ǰ�����
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
//	TreeNode() :val(0), left(nullptr), right(nullptr){}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr){}
//	TreeNode(int value,TreeNode* lf,TreeNode* rh) :val(value), left(lf), right(rh){}
//};
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode* root) {
//		/*
//			����˼����ʹ��ջ�������������ڱ�����ʱ��Ҫ��ı��������Ǹ����ң������ʹ��ջ�Ļ�������
//			������һ��ѭ�����̣����ڵ�ѹջ(��ǰ���ĸ��ڵ�)�����ڵ��ջ��������ѹջ��������ѹջ����������ջ����������ջ
//			�ɴ˿ɵõ������ҵ�˳������һ������������ѹջ�������Ϊʲô��������if���Һ����ԭ��
//			Ȼ�����ǿ��Կ���ÿһ�νڵ�ĳ�ջ���������ŵĶ��ǵ�ǰ����ڵ�����������ڵ㣬Ȼ�����ѹջ����
//			��ǰ����ڵ�����������ڵ㣬�ɴ�����֪������ѹջ�Ľڵ��Ǻ͵�ǰ��ջ���ڵ�Ϊ���ӹ�ϵ������
//			ʹ����ʱָ��ָ��ջ���ڵ㣬����ֻ�������������ڵ��Լ����������ڵ�ǿ�ʱ�ſ���ѹջ
//		*/
//		//����vector
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		//�����濪ʼrootһ���ǲ�Ϊnullptr��
//
//		//����һ��ջ����������ڵ���������ڵ��val
//		stack<TreeNode*> s;
//		//���ڵ�ѹջ
//		s.push(root);
//		TreeNode* cur;
//		while (!s.empty()) {
//			//�����while��������û�뵽�ĵط���ǰ����Ҫ����Ľڵ�ͷ��ʵĽڵ�һ��
//			/*
//				�տ�ʼ��ʱ����ڵ���ջ����ʱջ�϶��ǿգ�ջ����ǿյ�����»����ʲô״��
//				ջΪ����˵�����нڵ��������
//			*/
//			//curΪ����ָ��
//			cur = s.top();
//			result.push_back(cur->val);
//			s.pop();
//			
//			if (cur->right != nullptr) {
//				s.push(cur->right);
//			}
//			
//			if (cur->left != nullptr) {
//				s.push(cur->left);
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