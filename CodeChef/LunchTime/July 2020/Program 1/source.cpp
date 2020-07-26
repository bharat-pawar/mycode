#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
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
	int N;
	long long K;
	long long Di;

	cin>>t;
	for(int i = 0 ; i < t; i++)	{
		cin>>N>>K;
		string s(N-1,'0');
		for(int j = 0; j < N; j++) {
			cin>>Di;
			if(Di%K == 0)
				s[j] = '1';
		}
		cout<<s<<endl;
	}		
	return 0;
}



