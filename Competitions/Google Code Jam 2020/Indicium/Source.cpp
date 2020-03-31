#include<iostream>
#include<vector>
using namespace std;

void printLatinSquare(int n) 
{ 
    int k = n + 1;

    for (int i = 1; i <= n; i++)
    { 
        int temp = k; 
        while (temp <= n) 
        { 
            printf("%d ", temp); 
            temp++; 
        } 
  
        for (int j=1; j<k; j++) 
           printf("%d ", j); 
  
        k--; 
        printf("\n"); 
    } 
} 

int main()
{
	int NoTests = 0;
	int sizeOfMarix = 0;
	int ExpectedTrace = 0;
	int CalculatedTrace = 0;
	
	cin>>NoTests;

	vector<pair<int,int>> MatrixAndTrace;

	for(int p = 0 ; p < NoTests; p++)
	{
		cin>>sizeOfMarix;
		cin>>ExpectedTrace;
		MatrixAndTrace.push_back(make_pair(sizeOfMarix, ExpectedTrace));
	}

	for(int p = 0 ; p < NoTests; p++)
	{		
		bool result = false;
		sizeOfMarix = MatrixAndTrace[p].first;
		ExpectedTrace = MatrixAndTrace[p].second;
		CalculatedTrace = 0;

		for(int i = 0; i < sizeOfMarix; i++)
		{
			CalculatedTrace = 0;
			for(int j = 0; j < sizeOfMarix; j++)
			{
				CalculatedTrace += (j+1)*sizeOfMarix;
				if(CalculatedTrace == ExpectedTrace)
				{
					result = true;
				}
			}
		}

		CalculatedTrace = 0;
		for(int i = 0; i < sizeOfMarix; i++)
		{
			CalculatedTrace = CalculatedTrace + (i+1);
		}

		if(CalculatedTrace == ExpectedTrace)
		{
			result = true;
		}		
	
		if(true == result)
		{
			printf("Case #%d: POSSIBLE\n",(p+1));	
			printLatinSquare(sizeOfMarix);
		}
		else
		{
			printf("Case #%d: IMPOSSIBLE\n",(p+1));	
		}
	}

	return 0;
}
