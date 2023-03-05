///*
//	使用迭代法(非递归方式)前序遍历
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
//	TreeNode() :val(0), left(nullptr), right(nullptr){}
//	TreeNode(int value) :val(value), left(nullptr), right(nullptr){}
//	TreeNode(int value,TreeNode* lf,TreeNode* rh) :val(value), left(lf), right(rh){}
//};
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode* root) {
//		/*
//			整体思想是使用栈来遍历，我们在遍历的时候要求的遍历序列是根左右，那如果使用栈的话，整体
//			是这样一个循环流程：根节点压栈(当前树的根节点)，根节点出栈，右子树压栈，左子树压栈，左子树出栈，右子树出栈
//			由此可得到根左右的顺序，所以一定是右子树先压栈，这就是为什么后面两个if先右后左的原因
//			然后我们可以看到每一次节点的出栈，后续跟着的都是当前这个节点的右子树根节点，然后接着压栈的是
//			当前这个节点的左子树根节点，由此我们知道即将压栈的节点是和当前的栈顶节点为父子关系，所以
//			使用临时指针指向栈顶节点，后续只有在右子树根节点以及左子树根节点非空时才可以压栈
//		*/
//		//定义vector
//		vector<int> result;
//		if (root == nullptr) {
//			return result;
//		}
//		//从下面开始root一定是不为nullptr的
//
//		//定义一个栈，存的是树节点而不是树节点的val
//		stack<TreeNode*> s;
//		//根节点压栈
//		s.push(root);
//		TreeNode* cur;
//		while (!s.empty()) {
//			//这里的while条件是你没想到的地方，前序是要处理的节点和访问的节点一致
//			/*
//				刚开始的时候根节点入栈，此时栈肯定非空，栈如果是空的情况下会出现什么状况
//				栈为空则说明所有节点遍历结束
//			*/
//			//cur为遍历指针
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
//	//构造数据时指针接收的是地址
//	TreeNode t4(3), t3(2, &t4, NULL), t1(1, NULL, &t3);
//	TreeNode treeArray[] = { t1,NULL,t3,t4 };
//	vector<int> v = solution.preorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}