#include <bits/stdc++.h>
using namespace std; 

int main()
{
	int arr[] = {3,0,0,2,0,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int left[n];
	int water = 0;
	left[0] = arr[0];
	for(int i=1;i<n;i++)
	{
		left[i] = max(left[i-1],arr[i]);
	}
	int right[6];
	right[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		right[i] = max(right[i+1],arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		water += min(left[i],right[i]) - arr[i];
	}
	cout<<water;
	return 0;
}
