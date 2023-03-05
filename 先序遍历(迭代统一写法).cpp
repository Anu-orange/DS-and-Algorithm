///*
//	对于二叉树来说，其实每一个节点都可以看成是一个 "根节点"，也就是说访问或者处理的都是这个"根节点"，
//	在遍历序列里面要处理的就是那个"根"，那既然要处理的是根，那么它就很特殊所以就要对它进行标记，
//	使用一个null节点来标记它。为什么标记？如何标记呢？因为在中序遍历里面，当前遍历的节点并非是
//	当前要处理的节点。所以此时将所有节点装到一个栈里面的话，那么要处理的节点是必须要进行标记的；
//	每一次要处理的节点入栈后，紧随其后给压栈一个null节点，这样栈中的节点就是空和非空两种状态，一旦
//	遇到null，那么直接将其弹栈，此时的栈顶元素就是要处理的元素。而我们在压栈的过程中，要持着"压栈序列
//	和遍历序列相反的原则"
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
//	vector<int> preorderTraversal(TreeNode* root) {
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
//				//首先将当前的根弹出来，也就是栈顶元素，因为后面还有压这个根的操作
//				s.pop();
//				//因为是前序遍历，所以压栈顺序应该是右左根
//
//				//右节点压栈
//				if (cur->right != nullptr)
//					s.push(cur->right);
//				//左节点压栈
//				if (cur->left != nullptr)
//					s.push(cur->left);
//				
//				//当前根节点压栈(该节点就是即将要处理的节点)
//				s.push(cur);
//				//给当前根节点后面加一个nullptr的标记
//				s.push(nullptr);
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
//	vector<int> v = solution.preorderTraversal(treeArray);
//	for (int num : v) {
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}