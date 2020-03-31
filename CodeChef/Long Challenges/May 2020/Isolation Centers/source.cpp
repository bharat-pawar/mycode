//Reverse Number
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

bool isLapindrom(string str)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	int len = str.length();

	int lefEnd = len/2;
	int rightStart = lefEnd;

	if((len%2)!=0)
	{
		rightStart = rightStart + 1;
	}

	string left = str.substr(0,lefEnd);
	string right = str.substr(rightStart);

	sort(begin(left),end(left));
    sort(begin(right),end(right));

	if(0 == left.compare(right))
		return true;
	return false;
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
		if(isLapindrom(vec.at(i)))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}		
		
	return 0;
}
