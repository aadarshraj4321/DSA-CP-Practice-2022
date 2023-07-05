

class Node
{
	public:
		int data;
		Node *next;



		Node(int data)
		{
			this->data = data;
			next = NULL;
		}
};



	void printLL(Node *head)
	{
		Node *tmp = head;
		while(tmp != NULL)
		{
			std::cout << tmp->data << "->";
			tmp = tmp->next;
		}
		std::cout << "NULL\n";
	}


	Node *takeInput()
	{
		int data;
		std::cin >> data;

		Node *head = NULL;
		Node *tail = NULL;
		while(data != -1)
		{
			Node *newNode = new Node(data);
			if(head == NULL)
			{
				head = newNode;
				tail = newNode;
			}
			else
			{
				tail->next = newNode;
				tail = newNode;
			}
			std::cin >> data;
		}
		return head;
	}



	void insertNode(Node *head, int i, int data)
	{
		Node *temp = head;
		int cnt = 0;

		while(cnt < i - 1)
		{
			temp = temp -> next;
			cnt++;
		}

		Node *newNode = new Node(data);
		newNode -> next = temp -> next;
		temp -> next = newNode;
	}