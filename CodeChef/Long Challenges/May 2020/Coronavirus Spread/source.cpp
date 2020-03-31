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

/*
	int t;
	cin>>t;

	vector<int> vec;
	int val;
	for(int i = 0 ; i < t; i++)
	{
		int n;
		cin>>n;
		for(int j = 0; j < n; j++)
		{
			cin>>val;
			vec.push_back(val);
		}
	}

	for(int i = 0 ; i < t; i++)
	{
		int minInfectCount = 1 + minInfect(vec,n)
	}

*/
	int arr[5] = {1, 2, 5, 6, 7};

	int max = 0;
	int min = 0;

	int maxCount = 0;
	int minCount = 0;

	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(abs(arr[i]-arr[j])<=2)
			{
				max++;
			}

			if(maxCount > max)
			{
				maxCount = max;
			}
		}
	}

	cout<<maxCount<<endl;
		
	return 0;
}
