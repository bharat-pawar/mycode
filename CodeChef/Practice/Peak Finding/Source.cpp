#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> peakHeights;
	int height = 0;

	for(int i = 0 ; i < n ; i++)
	{
		cin>>height;
		peakHeights.push_back(height);
	}

	int peak = 0;
	for(vector<int>::iterator ptr = peakHeights.begin(); ptr< peakHeights.end(); ++ptr)
	{
		if(peak < *ptr)
		{
			peak = *ptr;
		}
	}

	cout<<peak;

	return 0;
}