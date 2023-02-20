#include <bits/stdc++.h>
using namespace std;

// Linked list node
class Node
{
	public:
	int data;
	Node* next;
};
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
	
	// move the head to point to the n{ew node
	(*head_ref) = new_node;
}
int  modulonode(Node* head,int k){
    Node* tmp=head;
    int res;
    int i=1;
    bool flag=true;
    while(tmp!=NULL){
        if(i%k==0){
            flag=false;
            res=tmp->data;
        }
        i++;
        tmp=tmp->next;
    }
    if(flag) return -1;
    return res;

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
    int k;
    cout<<"Enter the value of k";
    cin>>k;
	cout << "modulo kth node is " << modulonode(head,k);
	return 0;
}

