//#include <iostream>
//using namespace std;
//#include <vector>
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(nullptr), right(nullptr){}
//	TreeNode(int value):val(value),left(nullptr),right(nullptr){}
//	TreeNode(int value,TreeNode* lf,TreeNode* rh):val(value),left(lf),right(rh){}
//};
//class Solution {
//public:
//	void traversal(TreeNode* cur, vector<int>& v) {
//		if (cur == nullptr) {
//			return;
//		}
//		traversal(cur->left, v);
//		traversal(cur->right, v);
//		v.push_back(cur->val);
//	}
//	vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> result;
//		traversal(root, result);
//		return result;
//	}
//};
//int main() {
//	Solution solution;
//	//构造数据时指针接收的是地址
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.postorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}