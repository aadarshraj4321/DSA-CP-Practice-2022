#include<bits/stdc++.h>


template <typename T>
class TreeNode
{
	public:
		T data;
		std::vector<TreeNode<T>*>children;

		TreeNode(T data)
		{
			this->data = data;
		}
};



void printTree(TreeNode<int>* root)
{
	if(root == NULL) return;

	std::cout << root->data << " : ";

	for(int i = 0; i < root->children.size(); i++)
	{
		std::cout << root->children[i]->data << ", ";
	}

	std::cout << '\n';

	for(int i = 0; i < root->children.size(); i++)
	{
		printTree(root->children[i]);
	}
}



TreeNode<int>* takeInput()
{
	int rootData;
	std::cout << "Enter Data : ";
	std::cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	int n;
	std::cout << "Enter number of children of : " << rootData << '\n';
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}


TreeNode<int>* takeInputLevelWise()
{
	int rootData;
	std::cout << "Enter root data : \n";
	std::cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	std::queue<TreeNode<int>*> qTree;

	qTree.push(root);
	while(qTree.size() != 0)
	{
		TreeNode<int>* front = qTree.front();
		qTree.pop();
		std::cout << "Enter number of children : " << front->data << '\n';
		int numChild;
		std::cin >> numChild;
		for(int i = 0; i < numChild; i++)
		{
			int childData;
			std::cout << "Enter " << i << "th child of " << front->data << '\n';
			std::cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			qTree.push(child);
		}
	}
	return root;
}



void printAtLevelK(TreeNode<int>* root, int k)
{
	if(root  == NULL) return;

	if(k == 0)
	{
		std::cout << root->data << '\n';
		return;
	}

	for(int i = 0; i < root->children.size(); i++)
	{
		printAtLevelK(root->children[i], k - 1);
	}
}





int main()
{

	// TreeNode<int>* root = new TreeNode<int>(1);
	// TreeNode<int>* node1 = new TreeNode<int>(2);
	// TreeNode<int>* node2 = new TreeNode<int>(3);

	// root->children.push_back(node1);
	// root->children.push_back(node2);


	//TreeNode<int>* root = takeInput();
	TreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	std::cout << '\n';
	printAtLevelK(root, 2);


	return 0;
}