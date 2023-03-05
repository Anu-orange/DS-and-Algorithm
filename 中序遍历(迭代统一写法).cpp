///*
//	整体思路是和前序一样的，只是压栈的顺序变成 右中左，压中之后还要对它进行标记
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//struct TreeNode {
//	//二叉树的节点定义
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	vector<int> inorderTraversal(TreeNode* root) {
//		//定义栈和vector
//		stack<TreeNode*> s;
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		TreeNode* cur;
//		s.push(root);
//		while (!s.empty()) {
//			//记住：临时指针一定是指向栈顶元素的
//			cur = s.top();
//			if (cur != nullptr) {
//				//弹栈
//				s.pop();
//				//右节点压栈
//				if (cur->right != nullptr)
//					s.push(cur->right);
//				//当前根节点压栈
//				s.push(cur);
//				s.push(nullptr);
//				if (cur->left != nullptr)
//					s.push(cur->left);
//
//			}
//			else {
//				//说明当前cur指向的是一个标记，那么下一个栈顶元素就是要被处理的元素
//
//				//将nullptr弹栈
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
//	//构造数据时指针接收的是地址
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.inorderTraversal(treeArray);
//	cout << "中序遍历结果为:" << " ";
//	for (int num : v) {
//		cout << num << "  ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}