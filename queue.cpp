#include<iostream>
#include<stdio.h>
using namespace std;

int A[100], n = 100, front = -1, rear = -1;

void enqueue(int x)
{
	if(rear == n-1)
		return;
	else if (front == -1 && rear == -1)
		front = rear = 0;
	else
		rear++;
	A[rear] = x; 
}

void dequeue()
{
	if(front == -1 && rear == -1)
		return;
	else if(front == rear)
		front = rear = -1;
	else
		front++;
}

int main()
{
	for(int i=1;i<5;i++)
	{	
	
	enqueue(i);
	}
	dequeue();
	for(int i=front; i<=rear;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
