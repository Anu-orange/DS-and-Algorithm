///*
//	使用递归写出二叉树的谦虚遍历代码
//	请记住递归三部曲：
//	1、确定递归函数的参数以及返回值
//	2、确定递归终止条件
//	3、确定单层递归的逻辑
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//struct TreeNode{
//	//二叉树的节点定义
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():val(0),left(NULL),right(NULL){}
//	TreeNode(int value):val(value),left(NULL),right(NULL){}
//	TreeNode(int value,TreeNode* lf,TreeNode* rh):val(value),left(lf),right(rh){}
//};
//class Solution {
//public:
//	void Traversal(TreeNode* cur, vector<int>& v) {
//		if (cur == NULL) {
//			return;
//		}
//		v.push_back(cur->val);
//		Traversal(cur->left, v);
//		Traversal(cur->right, v);
//	}
//	vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> result;
//		Traversal(root, result);
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//构造数据时指针接收的是地址
//	TreeNode t4(3),t3(2,&t4,NULL),t1(1,NULL,&t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4};
//	vector<int> v = solution.preorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}