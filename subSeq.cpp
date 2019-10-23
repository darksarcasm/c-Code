// CPP program to count frequencies of array items 
#include <bits/stdc++.h>
using namespace std; 

void countFreq(int arr[], int n) 
{ 
	map<int, int> mp; 

	// Traverse through array elements and 
	// count frequencies 
	for (int i = 0; i < n; i++) 
		mp[arr[i]]++; 

	// Traverse through map and print frequencies 
	map<int,int>::iterator i;
	for(i = mp.begin();i!=mp.end();++i)
    {
		cout<<i->first<<" "<<i->second; 
		cout<<"\n";
		
	}
	vector<vector<int> > vect;
	int j = 0,k = 0,count = 0;
	for(i = mp.begin();i!=mp.end();++i)
    {
    	if(i->second > 0)
    	{
    		vect[j][k] = i->first;
    		k++;
    		count++;
    		if(count == 2)
    		{
    			j++;
    			i = mp.begin();
    		}
			 	
    	}
    	i->second--;
    	
    }
} 

int main() 
{ 
	int arr[] = { 1,2,3,3,4,4,5,5 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	countFreq(arr, n); 
	return 0; 
} 

