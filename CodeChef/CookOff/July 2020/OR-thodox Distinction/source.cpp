#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

#define mytemplate true

bool check(vector<long long> &v, unordered_map<long long, long long> &omap)
{
	for(long long i = 0; i < v.size()-1; i++) {
		cout<<"("<<v[i]<<" | "<<v[i+1]<<" = "<<(v[i] | v[i+1])<<") ";
		if(omap.find(v[i] | v[i+1]) == end(omap)) {
			omap[v[i] | v[i+1]]++;
		}
		else {
			return false;
		}
	}
	cout<<endl;
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

	long long t;
	cin>>t;
	for(int i = 0 ; i < t; i++)	{
		long long n;
		cin>>n;
		unordered_map<long long, long long> omap;
		vector<long long> v;
		long long val;
		bool result = true;
		for(int j = 0; j < n; j++) {			
			cin>>val;
			v.push_back(val);
			omap[val]++;
			if(false == check(v, omap)) {
				result = false;
				break;
			}
		}

		if(true == result)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}		
	return 0;	
}
