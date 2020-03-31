//Reverse Number
#include<iostream>
#include<vector>
using namespace std;

#define mytemplate true

int reverese(int n)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	int rev = 0;
  	while(n > 0)
  	{
  		rev = (rev * 10) + (n%10);
  		n = n/10;
  	}
  	return rev;
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

	vector<int> vec;
	int n = 0;
	for(int i = 0 ; i < t; i++)
	{
		cin>>n;
		vec.push_back(n);
	}

	for(int i = 0 ; i < t; i++)
	{
		cout<<reverese(vec.at(i))<<endl;
	}		
		
	return 0;
}
