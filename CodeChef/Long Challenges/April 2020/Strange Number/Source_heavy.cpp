#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

int getContOfCompositeFactors(int n)
{
	int count = 0;
	for(int j = 1; j <=n; j++)
	{
		if(0 == (n%j))
			count++;
	}

	return count;
}

int getCountOfPrimeFactors(int n)
{
	int count = 0;
	for(int j = 2; j <=(n/2); j++)
	{
		if(0 == (n%j))
			count++;
	}
	return count;
}

int main()
{
	int t, a;

	vector<pair<int,int>> vecValues;
	map<pair<int, int>, int> mymap;

	for(long i = 1; i < 100000; i++)
	{
		int compositeCount = getContOfCompositeFactors(i);
		int primeCount = getCountOfPrimeFactors(i);
		if(compositeCount > 0 && primeCount > 0)
		{
			mymap.emplace(make_pair(compositeCount,primeCount), i);
			printf("No = %d, X = %d K = %d\n",i,compositeCount,primeCount);
		}
	}

	scanf("%d", &t);
	for(int i = 0 ; i < t; i++)
	{
		int x, k;
		scanf("%d%d",&x,&k);
		vecValues.push_back(make_pair(x,k));
	}
		
	for(int i = 0 ; i < t; i++)
	{
		int flag = 0;
		for (map<pair<int, int>, int>::iterator it = mymap.begin(); it != mymap.end(); ++it)
		{
			flag = 1;
		}
		printf("%d\n",flag);
	}

	return 0;
}