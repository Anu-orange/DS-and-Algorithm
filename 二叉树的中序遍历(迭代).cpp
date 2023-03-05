///*
//	迭代方式进行中序遍历
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
//			//指针为空同时栈也为空时，此时循环就可以跳出了
//			if (cur != nullptr) {
//				//压栈的地方
//				s.push(cur);
//				//一直往左走
//				cur = cur->left;
//			}
//			else {
//				//弹栈的地方
//				cur = s.top();
//				result.push_back(cur->val);
//				s.pop();
//				/*
//					我们要的顺序是左根右，那么也就是说在栈里的话，当根出来了之后下一个要出来的是右
//					对吧，那既然想要让右出去，那肯定得跟着根后面先进去，是否出去看下一轮的cur情况
//				*/
//				cur = cur->right;
//			}
//		}
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//构造数据时指针接收的是地址
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.middleorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}