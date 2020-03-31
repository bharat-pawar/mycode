//Lapindrom
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

int printSum(string &str)
{
	int sum = 0;
	for(auto it = begin(str); it!=end(str); ++it)
	{
		if(isdigit(*it))
		{
			sum += *it-'0';
		}
	}
	return sum;
}

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
	cin>>t;

	vector<string> vec;
	string str;
	for(int i = 0 ; i < t; i++)
	{
		cin>>str;
		vec.push_back(str);
	}

	for(int i = 0 ; i < t; i++)
	{
		cout<<printSum(vec[i])<<endl;
	}		
		
	return 0;
}
