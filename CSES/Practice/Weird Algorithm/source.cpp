//weird Algorithm
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate false

int main(int argc, char const *argv[])
{

#if mytemplate
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);
#endif

	unsigned long n;
	cin>>n;

	while(n>=1)	
	{
		cout<<n<<" ";
		if(1 == n)
			break;
		if(0 == (n%2))
		{
			n = n/2;
		}
		else
		{
			n = (n*3) + 1;		
		}
	}

	return 0;
}

