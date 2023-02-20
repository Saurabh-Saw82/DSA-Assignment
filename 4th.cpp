//Efficient soln
// C++ program to find sqrt(n)'th node
// of a linked list

#include <bits/stdc++.h>
using namespace std;

// Linked list node
class Node
{
	public:
	int data;
	Node* next;
};

// Function to get the sqrt(n)th
// node of a linked list
int printsqrtn(Node* head)
{
	Node* sqrtn = NULL;
	int i = 1, j = 1;
	
	// Traverse the list
	while (head!=NULL)
	{
		// check if j = sqrt(i)
		if (i == j*j)
		{
			// for first node
			if (sqrtn == NULL)
				sqrtn = head;
			else
				sqrtn = sqrtn->next;
			
			// increment j if j = sqrt(i)
			j++;
		}
		i++;
		
		head=head->next;
	}
	
	// return node's data
	return sqrtn->data;
}

void print(Node* head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

// function to add a new node at the
// beginning of the list
void push(Node** head_ref, int new_data)
{
	// allocate node
	Node* new_node = new Node();
	
	// put in the data
	new_node->data = new_data;
	
	// link the old list of the new node
	new_node->next = (*head_ref);
	
	// move the head to point to the new node
	(*head_ref) = new_node;
}

int main()
{
	/* Start with the empty list */
	Node* head = NULL;
	push(&head, 40);
	push(&head, 30);
	push(&head, 20);
	push(&head, 10);
	cout << "Given linked list is:";
	print(head);
	cout << "sqrt(n)th node is " << printsqrtn(head);
	
	return 0;
}

