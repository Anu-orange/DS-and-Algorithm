///*
//	迭代方式进行后续遍历
//*/
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr) {}
//	TreeNode(int value, TreeNode* lf, TreeNode* rh) :val(value), left(lf), right(rh) {}
//};
//class Solution {
//public:
//	vector<int> postorderTraversal(TreeNode* root) {
//		/*
//			其实后续遍历的顺序和前序遍历的顺序有点像 根左右 和 左右根，左右的顺序时没变的，那能不能
//			从前序往后续转换呢，根左右在代码中的顺序是根右左，那代码顺序换成根左右之后，真正的顺序是不是就是
//			根右左了，那再把result数组给它翻转一下是不是就成了
//		*/
//		stack<TreeNode*> s;
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		s.push(root);
//		TreeNode* cur;
//		while (!s.empty()) {
//			cur = s.top();
//			result.push_back(cur->val);
//			s.pop();
//
//			//下面这里是在交换顺序
//			if (cur->left != nullptr) {
//				s.push(cur->left);
//			}
//
//			if (cur->right != nullptr) {
//				s.push(cur->right);
//			}
//		}
//		//至此得到的顺序是根右左
//		//利用reverse函数对result进行翻转得到左右根
//		reverse(result.begin(), result.end());
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