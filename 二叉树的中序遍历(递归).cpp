///*
//	使用递归的方式进行二叉树的中序遍历
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//struct TreeNode {
//	//二叉树的节点定义
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(NULL), right(NULL) {}
//	TreeNode(int value) :val(value), left(NULL), right(NULL) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	void Traversal(TreeNode* cur, vector<int>& v) {
//		if (cur == nullptr) {
//			return;
//		}
//		Traversal(cur->left, v);
//		v.push_back(cur->val);
//		Traversal(cur->right, v);
//	}
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> result;
//		Traversal(root, result);
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//构造数据时指针接收的是地址
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.inorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}