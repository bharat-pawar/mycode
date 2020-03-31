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

	int n;
	cin>>n;
	
	int input;
	std::vector<int> v;
	for(int i = 0; i < n; i++)
	{
		cin>>input;
		v.push_back(input);
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = (i+1); j < n; j++)
		{
			if(v[i] > v[j])
			{
				cout<<"{"<<v[i]<<","<<v[j]<<"}"<<endl;
			}
		}
	}

	return 0;
}
