
//completed at gfg practice
// Linked List Node
#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
  int count1=0;
  int count2=0;
  Node* h1=head1;
  Node* h2=head2;
  
  while(h1!=NULL || h2!=NULL){
      if(h1!=NULL){
          h1=h1->next;
          count1++;
      }
      if(h2!=NULL){
          h2=h2->next;
          count2++;
      }
  }
  int diff=abs(count1-count2);
  if(count1 > count2){
      for(int i=0;i<diff;++i){
          head1=head1->next;
      }
  }
  else{
      for(int i=0;i<diff;++i){
          head2=head2->next;
      }
  }
  while(head1!=NULL){
      if(head1==head2) return head1->data;
      head1=head1->next;
      head2=head2->next;
  }
  return -1;
}