//Missing umber
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

	unsigned long sum = n*(n+1)/2;
	vector<unsigned long> vec;
	unsigned long num = 0;	
	for(int i =0; i<(n-1); i++)
	{
		cin>>num;
		vec.push_back(num);
	}

	for(int i =0; i<(n-1); i++)
	{
		sum = sum - vec[i];
	}

	cout<<sum;

	return 0;
}
