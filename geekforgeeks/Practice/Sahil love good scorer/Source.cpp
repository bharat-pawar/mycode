#include<iostream>
#include<vector>
using namespace std;

int main() {
    int T = 0;
	int c1Count = 0;
	int c2Count = 0;

	vector<int> shortlisted;
    
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
		cin>>c1Count;
		cin>>c2Count;
		int score = 0;
		int sumScore1 = 0, sumScore2 = 0;
		for(int j = 0 ; j < c1Count; j++)
		{
			cin >> score;
			sumScore1 += score;
		}

		for(int j = 0 ; j < c2Count; j++)
		{
			cin >> score;
			sumScore2 += score;
		}

		if(sumScore1 > sumScore2)
			shortlisted.push_back(1);
		else
			shortlisted.push_back(2);
    }

	for(int i = 0 ; i < shortlisted.size(); i++)
	{
		cout<<"C"<<shortlisted[i]<<endl;
	}
	       
	return 0;
}