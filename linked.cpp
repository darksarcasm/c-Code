#include<iostream>
using namespace std;
struct node   
{  
    int data;   
    struct node *next;  
}; 

printList(node *head)

{
	while(head-> next != NULL)
	{
		cout<<head->data;
		head = head -> next;
	}
}

int main()
{
	int a;
	cin>>a;
	node* head = NULL;
	head -> data = a;
	printList(head);
}
