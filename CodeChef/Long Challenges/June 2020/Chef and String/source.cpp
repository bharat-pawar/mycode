//Lapindrom
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

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

	long long t;
	string s;
	cin>>t;
	for(int i = 0 ; i < t; i++)
	{
		cin>>s;
		long long k = 0;
		long long count = 0;
		while(k < s.size())
		{
			if((s[k] == 'x' && s[k+1]=='y') || (s[k] == 'y' && s[k+1]=='x'))
			{
				count++;
				k=k+2;
			}
			else
			{
				k++;
			}
		}

		cout<<count<<endl;
	}	
		
	return 0;
}
