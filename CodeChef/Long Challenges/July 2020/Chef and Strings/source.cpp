#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true
/*
long long countSkips(vector<int> &v) {
	long long skips = 0;
	for(int i = 0; i < v.size()-1; i++) {
		if(v[i] > v[i+1]) {
			skips += (v[i] - v[i+1] - 1);
		} else {
			skips += (v[i+1] - v[i] - 1);
		}
	}
	return skips;
}
*/
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
	for(int i = 0 ; i < t; i++) {
		long long n;
		cin>>n;
		vector<int> v;
		long long val1;
		long long val2;
		cin>>val1;
		long long skips = 0;
		for(int i = 0; i < n-1; i++) {
			cin>>val2;
			if(val1 > val2) {
				skips+= (val1-val2-1);
			} else  {
				skips+= (val2-val1-1);
			}
			val1 = val2;			
		}

		cout<<skips<<endl;
	}
	return 0;
}
