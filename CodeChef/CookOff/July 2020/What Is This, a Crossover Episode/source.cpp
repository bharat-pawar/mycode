//Lapindrom
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

#define mytemplate true

bool checkString(string s) {
	unordered_map<char,int> umap;
	for(char c : s) {
		umap[c]++;
	}

	for (auto a: umap)
	{
		if(a.second%2 != 0)
			return false;
	}
	return true;
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

	int val;
	for(int i = 0 ; i < t; i++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(checkString(s) == true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;			

	}
		
	return 0;
}
