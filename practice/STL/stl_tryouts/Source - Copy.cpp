//Missing umber
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate false

int main(int argc, char const *argv[])
{
	
	int t;
	cin>>t;	

	for(int i=0; i<t; i++)
	{
		int n;
		long long power = 0;
		vector<long long> TeamGPlayers;
		vector<long long> Opponents;
		cin>>n;

		for(int i=0;i<n;i++)
		{			
			cin>>power;
			TeamGPlayers.push_back(power);
		}

		for(long long i=0;i<n;i++)
		{
			cin>>power;
			Opponents.push_back(power);
		}

		sort(begin(TeamGPlayers),end(TeamGPlayers));
		sort(begin(Opponents),end(Opponents));

		long long count = 0;

		for(int i = 0; i < n; i++)
		{
			long long minimum_number = 0;
			int index = -1;

			for(int j = 0; j < TeamGPlayers.size(); j++)
			{
				if(TeamGPlayers[j] > Opponents[i])
				{
					if(0 == minimum_number)
					{
						minimum_number = TeamGPlayers[j];
						index = j;
					}
					else if(TeamGPlayers[j] < minimum_number)
					{
						minimum_number = TeamGPlayers[j];
						index = j;
					}
					else
					{
						TeamGPlayers.erase(begin(TeamGPlayers) + index);
						count += 1;
						break;
					}
				}
			}
		}		

		cout<<count<<endl;
	}

	return 0;
}
