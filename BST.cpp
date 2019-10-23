
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

void printLevelOrder(Node* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(root, i);  
} 

Node* GetNewNode(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* insert(Node* root, int data)
{
	if(root == NULL)
	{
		root = GetNewNode(data);
	}
	else if(root->data>=data)
	{
		root->left = insert(root->left,data);
	}
	else 
		root->right = insert(root->right,data);
	return root;
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

bool Search(Node* root,int data)
{
	if (root == NULL) return false;
	else if (root->data == data) return true;
	else if(root->data > data) return Search(root->left,data);
	else return Search(root->right,data);
}

int main()
{
	Node *root = NULL;
	
	root =  insert(root,15);
  	root =  insert(root,10);
  	root =  insert(root,20);
  	root =  insert(root,4);
  	printLevelOrder(root);
  	int n;
  	cout<<"\n";
  	cin>>n;
  	if(Search(root,n) == true) cout<<"there there";
  	else cout<<"\n somewhere else";
  	return 0;
  }
  
