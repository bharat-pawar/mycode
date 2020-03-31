#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std; 

int getMinSteps ( int n )
{
	vector<int> dp((n+1),-1);
	
	int i;

	dp[1] = 0;  // trivial case

	for( i = 2 ; i <= n ; i ++ )
	{
		dp[i] = 1 + dp[i-1];
		if(i%2==0) 
		{
			dp[i] = min( dp[i] , 1 + dp[i/2]);
		}
		if(i%3==0)
		{
			dp[i] = min( dp[i] , 1 + dp[i/3]);
		}
	}

	return dp[n];
}

int main()
{	

  cout<<getMinSteps(10)<<endl;
  return 0; 
}
