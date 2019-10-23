#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Node  
{ 
  public:
  int data; 
  struct Node *left; 
  struct Node *right; 
};

void printGivenLevel(Node* root, int level);  


void printLevelOrder(Node* root)  
{  
    if (root == NULL) return; 
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
    	Node* current = Q.front();
    	cout<<current->data<<" ";
    	if(current->left !=NULL) Q.push(current->left);
    	if(current->right !=NULL) Q.push(current->right);
    	Q.pop();
	}
}
 
Node* newnode(int data)
{
  Node* node = new Node(); 
  
  // Assign data to this node 
  node->data = data; 
  
  // Initialize left and right children as NULL 
  node->left = NULL; 
  node->right = NULL; 
  return(node); 
}

int main()
{
	Node *root = newnode(1);
	root->left = newnode(2); 
  	root->right = newnode(3);
  	root->left->left = newnode(4);
  	root->left->right = newnode(5);
  	printLevelOrder(root);
  	cout<<"\n";
	getchar();
	return 0;
	
}

