///*
//	������ʽ�����������
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():val(0),left(nullptr),right(nullptr){}
//	TreeNode(int value):val(value),left(nullptr),right(nullptr){}
//	TreeNode(int value,TreeNode* lf,TreeNode* rh):val(value),left(lf),right(rh){}
//};
//class Solution {
//public:
//	vector<int> middleorderTraversal(TreeNode* root) {
//		vector<int> result;
//		stack<TreeNode*> s;
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur = root;
//		while (!s.empty() || cur != nullptr) {
//			//ָ��Ϊ��ͬʱջҲΪ��ʱ����ʱѭ���Ϳ���������
//			if (cur != nullptr) {
//				//ѹջ�ĵط�
//				s.push(cur);
//				//һֱ������
//				cur = cur->left;
//			}
//			else {
//				//��ջ�ĵط�
//				cur = s.top();
//				result.push_back(cur->val);
//				s.pop();
//				/*
//					����Ҫ��˳��������ң���ôҲ����˵��ջ��Ļ�������������֮����һ��Ҫ����������
//					�԰ɣ��Ǽ�Ȼ��Ҫ���ҳ�ȥ���ǿ϶��ø��Ÿ������Ƚ�ȥ���Ƿ��ȥ����һ�ֵ�cur���
//				*/
//				cur = cur->right;
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
//	vector<int> v = solution.middleorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}