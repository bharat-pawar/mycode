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

	short **daysArr;
	daysArr = new short*[t];

	for(int i = 0; i < t; i++)
	{
		daysArr[i] = new short[30];
		for(int j = 0; j < 30; j++)
		{
			cin>>daysArr[i][j];
		}
	}

	std::vector<short> v;
	for(int i = 0; i < t; i++)
	{
		int count = 0;
		for(int j = 0; j < 30; j++)
		{
			if(1 == daysArr[i][j])
			{
				count++;
				//cout<<count<<endl;
			}
			
			if(daysArr[i][j] != daysArr[i][j+1])
			{
				if(count > 5)
				{
					break;
					//cout<<"breaking"<<endl;
				}
				else
				{
					count = 0;
				}
			}
		}

		if(count <=5)
		{
			v.push_back(1);
		}
		else
		{
			v.push_back(0);
		}
	}

	for(int i = 0; i < t; i++)
	{
		if(1 == v[i])
		{
			cout<<"#allcodersarefun"<<endl;
		}
		else
		{
			cout<<"#coderlifematters"<<endl;
		}
	}
		
	return 0;
	
	
}
