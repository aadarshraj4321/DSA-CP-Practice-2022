#include<iostream>
#include<queue>
#include<cmath>

class BinaryTreeNode {
	public:
		int data;
		BinaryTreeNode *right;
		BinaryTreeNode *left;

		BinaryTreeNode(int root) {
			this->data = root;
			right = nullptr;
			left = nullptr;
		}

		~BinaryTreeNode() {
			delete left;
			delete right;
		}
};



BinaryTreeNode *takeInputLevelWise() {
	int rootData;
	std::cout << "Enter root data: ";
	std::cin >> rootData;

	if(rootData == -1)
		return nullptr;

	BinaryTreeNode *root = new BinaryTreeNode(rootData);

	std::queue<BinaryTreeNode*> pendingNodes;
	pendingNodes.push(root);

	while(pendingNodes.size() != 0) {
		BinaryTreeNode *front = pendingNodes.front();
		pendingNodes.pop();
		std::cout << "Enter left chld of " << front->data << '\n';
		int leftChildData;
		std::cin >> leftChildData;
		if(leftChildData != -1) {
			BinaryTreeNode *child = new BinaryTreeNode(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		std::cout << "Enter right child of " << front->data << '\n';
		int rightChildData;
		std::cin >> rightChildData;
		if(rightChildData != -1) {
			BinaryTreeNode *child = new BinaryTreeNode(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}



void printBinarySearchTree(BinaryTreeNode *root) {
	if(root == nullptr) 
		return;	

	std::cout << root->data << ": ";
	if(root->left != nullptr)
		std::cout << "L " << root->left->data;

	if(root->right != nullptr)
		std::cout << "R " << root->right->data;

	std::cout << '\n';

	printBinarySearchTree(root->left);
	printBinarySearchTree(root->right);
}



int minimum(BinaryTreeNode *root) {
	if(root == nullptr)
		return 10000;

	return std::min(root->data, std::min(minimum(root->left), minimum(root->right)));
}


int maximum(BinaryTreeNode *root) {
	if(root == nullptr)
		return -10000;

	return std::max(root->data, std::max(maximum(root->left), maximum(root->right)));
}


bool isBST(BinaryTreeNode *root) {
	if(root == nullptr)
		return true;

	int leftMax = maximum(root->left);
	int rightMin = minimum(root->right);

	bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
	return output;
}





int main()
{	

	BinaryTreeNode *root = takeInputLevelWise();
	printBinarySearchTree(root);
	std::cout << "------------------------\n";
	std::cout << isBST(root) << '\n';

	delete root;

	return 0;
}