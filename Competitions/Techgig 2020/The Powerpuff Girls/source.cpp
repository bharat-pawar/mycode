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

	int t;
	cin>>t;

	vector<long long> vecReq;
	vector<long long> vecAvail;

	long long item;
	for(int i = 0 ; i < t; i++)
	{
		cin>>item;
		vecReq.push_back(item);
	}

	for(int i = 0 ; i < t; i++)
	{
		cin>>item;
		vecAvail.push_back(item);
	}	

	int count = 0;
	int controller = 0;
	for(int i = 0 ; i < t; i++)
	{
		int tempCount = 0;		
		while(vecAvail[i]>0 && controller--)
		{
			 vecAvail[i] = vecAvail[i]- vecReq[i];
			 tempCount++;
		}

		if(0 == count)
		{
			count = tempCount;
		}
		else if(tempCount < count)
		{
			count = tempCount;
			controller = count;
		}
	}

	cout<<count<<endl;
		
	return 0;
}
