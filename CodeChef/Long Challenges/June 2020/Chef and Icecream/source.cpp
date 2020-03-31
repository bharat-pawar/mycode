//Lapindrom
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring> 
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

	int i, j;
	cin>>i>>j;
	cout<<i<<" "<<j<<endl;


    return 0; 

}

