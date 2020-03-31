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

	int t;

	long long n, k;
	long long pValue;

	cin>>t;
	for(int i = 0 ; i < t; i++)
	{
		long long totalRevenue = 0;
		long long lostRevenue = 0;

		cin>>n>>k;
		for(int j = 0; j<n; j++)
		{
			cin>>pValue;
			totalRevenue +=pValue;
			if(pValue>k)
			{
				lostRevenue+=k;
			}
			else
			{
				lostRevenue+=pValue;
			}
		}
		cout<<totalRevenue-lostRevenue<<endl;
	}	
		
	return 0;
}
