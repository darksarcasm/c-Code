#include<iostream>
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
int height(Node* root);   
  
/* Function to print level  
order traversal a tree*/
void printLevelOrder(Node* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(root, i);  
} 

struct Node* newnode(int data)
{
  Node* node = new Node(); 
  
  // Assign data to this node 
  node->data = data; 
  
  // Initialize left and right children as NULL 
  node->left = NULL; 
  node->right = NULL; 
  return(node); 
}

void inorder(Node *root)
{
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

void printGivenLevel(Node *root,int level)
{
	if(root == NULL)
		return;
	if (level == 1)  
        cout << root->data << " ";  
    else if (level > 1)  
    {  
        printGivenLevel(root->left, level-1);  
        printGivenLevel(root->right, level-1);  
    }  
}

int height(Node *root)
{
	if(root == NULL)
		return 0;
	else
	{
		int lheight = height(root->left);
		int rheight = height(root->right);
		if(lheight> rheight)
			return (lheight + 1);
		else
			return (rheight + 1);
	}
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
  	inorder(root);
	getchar();
	return 0;
	
}
