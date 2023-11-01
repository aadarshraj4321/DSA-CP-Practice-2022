#include<iostream>
#include<queue>



template <typename T>
class BinaryTreeNode
{
	public:
		T data;
		BinaryTreeNode *left;
		BinaryTreeNode *right;

		BinaryTreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~BinaryTreeNode()
		{
			delete left;
			delete right;
		}
};



void printTree(BinaryTreeNode<int> *root)
{
	if(root == NULL)
		return;

	std::cout << root->data << ": ";
	if(root->left != NULL)
	{
		std::cout << "L" << root->left->data;
	}

	if(root->right != NULL)
	{
		std::cout << ", R" << root->right->data;
	}

	std::cout << '\n';

	printTree(root->left);
	printTree(root->right);

}


BinaryTreeNode<int> *takeInput()
{
	int rootData;
	std::cout << "Enter Data: ";
	std::cin >> rootData;

	if(rootData == -1)
		return NULL;

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int> *leftChild = takeInput();
	BinaryTreeNode<int> *rightChild = takeInput();

	root->left = leftChild;
	root->right = rightChild;

	return root;
}





BinaryTreeNode<int> *takeInputLevelWise()
{
	int rootData;
	std::cout << "Enter root Data: ";
	std::cin >> rootData;

	if(rootData == -1)
		return NULL;

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

	std::queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);

	while(pendingNodes.size() != 0)
	{
		BinaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		std::cout << "Enter left child of " << front->data << '\n';
		int leftChildData; std::cin >> leftChildData;
		if(leftChildData != -1)
		{
			BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		std::cout << "Enter right child of " << front->data << '\n';
		int rightChildData; std::cin >> rightChildData;
		if(rightChildData != -1)
		{
			BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}





int main()
{
	// BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
	// BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
	// BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);

	// root->left = node1;
	// root->right = node2;

	//BinaryTreeNode<int> *root = takeInput();
	BinaryTreeNode<int> *root = takeInputLevelWise();

	printTree(root);

	delete root;
}