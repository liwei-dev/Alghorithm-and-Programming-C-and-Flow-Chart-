#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node{
	public:
	int data;
	Node *next;
};

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(Node** head_ref, int new_data){ //function to do insert front, to push new node in front of the main node/null
	// 1. Allocate node
	Node* new_node = new Node();

	// 2. Put in the data
	new_node->data = new_data;

	// 3. Make next of new node as head
	new_node->next = (*head_ref);

	// 4. Move the head to point to the
	// new node
	(*head_ref) = new_node;
}

void printList(Node *node){ //function to show the final form of the node
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

// Driver code
int main()
{
	// Start with the empty list
	Node* head = NULL;
	
	// Insert 25. So linked list
	// becomes 25->NULL
	push(&head, 25);
	
	// Insert 20 at the beginning/as front.
	// So linked list becomes
	// 20->25->NULL
	push(&head, 20);
	
	// Insert 15 at the beginning/as front.
	// So linked list becomes
	// 15->20->25->NULL
	push(&head, 15);
	
	// Insert 10 at the beginning/as front. 
	// So linked list becomes
	// 10->15->20->25->NULL
	push(&head, 10);
	
	// Insert 5 at the beginning/as front. 
	// So linked list becomes
	// 5->10->15->20->25->NULL
	push(&head, 5);
	
	cout << "Created Linked list by insert front are: ";
	printList(head);
	
	return 0;
}
