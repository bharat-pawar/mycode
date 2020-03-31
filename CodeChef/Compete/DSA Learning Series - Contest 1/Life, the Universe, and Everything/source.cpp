#include<vector>
#include<iostream>
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

	int t = 0;	

	vector<int> vec;
	while(1)
	{
		cin>>t;
		if(42 == t)
		{
			break;
		}
		vec.push_back(t);
	}

	for(auto i : vec)
	{
		cout<<i<<endl;
	}

	return 0;	
}
