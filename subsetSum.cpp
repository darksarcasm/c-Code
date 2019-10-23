#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{ 
	int arr[] = {4, 1, 10, 12, 5, 2};  
    int n = sizeof(arr)/sizeof(arr[0]);
    int travelTime = 8;
	int dp[n][travelTime+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=travelTime;j++)
		{
			dp[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++)
		dp[i][0] = 1;
	for(int i=1;i<=travelTime;i++)
	{
		if(arr[0] == i)
			dp[0][i] = 1;
		else
			dp[0][i] = 0;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=travelTime;j++)
		{
			if(j<arr[i])
				dp[i][j] = dp[i-1][j];
			else if(j == arr[i])
				dp[i][j] = 1;
			else 
				dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i]];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=travelTime;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
    if(dp[n-1][travelTime] == 1)
    	cout<<"true";
    else
    	cout<<"not true";
    return 0;
    
}
