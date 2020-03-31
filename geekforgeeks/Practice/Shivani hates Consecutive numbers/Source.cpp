#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int T = 0;
	int N = 0;

	vector<int> array;
	vector<int> sumArray;
    
    cin >> T;

    for(int i = 0; i < T; i++)
    {
		cin>>N;
		for(int j = 0 ; j < N; j++)
		{
			int elemen;
			cin >> elemen;
			array.push_back(elemen);
		}

		sort(array.begin(), array.end());
		reverse(array.begin(), array.end());

		for(int k = 0 ; k < N; k++)
		{
			int elem = array[k]-1;
			for(int l = 0 ; l < N; l++)
			{
				if(array[l] == elem)
				{
					array[l] = 0;
					break;
				}
			}
		}

		int sum = 0;
		for(int k = 0 ; k < N; k++)
		{			
			sum = sum + array[k];		
		}
		sumArray.push_back(sum);
		array.clear();
    }

	for(int i = 0 ; i < sumArray.size(); i++)
	{
		cout<<sumArray[i]<<endl;
	}
	       
	return 0;
}