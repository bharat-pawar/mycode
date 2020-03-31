//Missing umber
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

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

		for(int i=0;i<n;i++)
		{
			cin>>power;
			Opponents.push_back(power);
		}

		sort(begin(TeamGPlayers),end(TeamGPlayers));
		sort(begin(Opponents),end(Opponents));

		int count = 0;

		for(int i = 0; i < n; i++)
		{
			long long PlayerPower = TeamGPlayers.at(i);		
			vector<long long>::iterator itr = find_if(begin(Opponents), end(Opponents),[PlayerPower](long long y) { return (PlayerPower > y); });
			if(itr != end(Opponents))
			{
				cout<<*itr<<endl;
				Opponents.erase(itr);
				count++;			
			}
		}

		cout<<count<<endl;
	}

	return 0;
}
