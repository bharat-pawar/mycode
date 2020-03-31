
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t, a;

	vector<pair<int,int>> vec;

	scanf("%d", &t);
	for(int i = 0 ; i < t; i++)
	{
		int x, k;
		scanf("%d%d",&x,&k);
		vec.push_back(make_pair(x,k));
	}
	
	for(int i = 0; i < t; i++)
	{		
		int flag = 0;
		for (long no = 1; no < 10000; no++)
		{
			int compositeCount = 0;
			int primeCount = 0;
			
			for(int i = 1; i <=no; i++)
			{
				if(no%i == 0)
					compositeCount++;
			}
			
			if(compositeCount == 0)
				continue;
			
			for(int j = 2; j <=(no/2); j++)
			{
				if(0 == (no%j))
					primeCount++;
			}

			if(primeCount == 0)
				continue;

			if((compositeCount == vec[i].first) && (primeCount == vec[i].second))
			{
				flag = 1;
				break;
			}
		}
		printf("%d\n",flag);
	}

	return 0;
}
