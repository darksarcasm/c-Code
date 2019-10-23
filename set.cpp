// CPP program to print sorted distinct 
// elements. 
#include <bits/stdc++.h> 
using namespace std; 

void printRepeating(int arr[], int size) 
{ 
	// Create a set using array elements 
	set<int> s;
	s.insert(1);
	s.insert(5);
	s.insert(2); 

	// Print contents of the set. 
	set<int>::iterator i;
	
	for (i = s.begin(); i != s.end();i++) 
		cout << *i << " "; 
	set<int>::iterator it;
	int key = 3;
	it = s.find(key);
	int len = s.size();
	if((*it) == len && len !=key)
		cout<<"Not found";
	else
		cout<<*it;
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 3, 2, 2, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	printRepeating(arr, n); 
	return 0; 
} 

