#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{ 
	int arr[] = {900, 940, 950, 1100, 1500, 1800}; 
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int flag = 0,res=0;
	multimap<int, char> g;
	for(int i = 0;i<n;i++)
	{		
		g.insert(pair<int, char>(arr[i], 'Arr'));
		g.insert(pair<int, char>(dep[i], 'Dep'));
//		g[i] = 'A';
	}
	map<int, char>::iterator itr; 
	for (itr = g.begin(); itr != g.end(); itr++) 
	{ 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    	if(itr->second == 'r')
    	{
    		flag++;
    		if(flag>res)
				res = flag;	
		}
		else
			flag--;
    } 
    cout<<res;
	return 0;
}

