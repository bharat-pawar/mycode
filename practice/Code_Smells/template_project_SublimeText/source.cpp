#include<iostream>
#include<vector>
using namespace std;

#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);

int main(int argc, char const *argv[])
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	crap;

	int t;
	cin>>t;

	vector<pair<int,int>> vec;
	for(int i = 0 ; i < t; i++)
	{
		int x,y;
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}

	for(int i = 0; i < t; i++)
	{
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}	
		
	return 0;
}
