#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int T = 0;
	int N = 0;

	vector<int> resultArray;
    
    cin >> T;

    for(int i = 0; i < T; i++)
    {
		cin>>N;

		int element = 0;
		int sumOfElem = (N * (N+1))/2;

		for(int j = 0 ; j < N-1; j++)
		{
			cin >> element;
			sumOfElem = sumOfElem - element;			
		}

		resultArray.push_back(sumOfElem);		
    }

	for(int i = 0 ; i < resultArray.size(); i++)
	{
		cout<<resultArray[i]<<endl;
	}
	       
	return 0;
}