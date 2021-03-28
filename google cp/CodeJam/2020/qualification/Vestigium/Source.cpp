#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int NoTests = 0;
	cin>>NoTests;
	int sizeOfMarix = 0;

	vector<char*> testMessges;

	int trace = 0;
	int repeateRow = 0;
	int repeateCol = 0;	

	for(int p = 0 ; p < NoTests; p++)
	{		
		trace = 0;
		repeateRow = 0;
		repeateCol = 0;
		char *str = new char[100];

		cin>>sizeOfMarix;

		int **matrix = (int **)malloc(sizeOfMarix * sizeof(int *)); 
		for(int k = 0; k < sizeOfMarix; k++)
		{
			matrix[k] = (int *)malloc(sizeOfMarix * sizeof(int));			
		}

		for(int i = 0; i < sizeOfMarix; i++)
		{
			for(int j = 0; j < sizeOfMarix; j++)
			{
				cin>>matrix[i][j];
			}
		}

		for(int i = 0; i < sizeOfMarix; i++)
		{
			for(int j = 0; j < sizeOfMarix; j++)
			{
				if(i == j)
				{
					trace = trace + matrix[i][j];
				}
			}
		}

		set<int> rowset;
		set<int> colset;

		for(int i = 0 ; i < sizeOfMarix; i++)
		{
			for(int j = 0 ; j < sizeOfMarix; j++)
			{
				rowset.insert(matrix[i][j]);
				colset.insert(matrix[j][i]);
			}

			if(rowset.size() != sizeOfMarix)
			{
				repeateRow++;				
			}

			if(colset.size() != sizeOfMarix)
			{
				repeateCol++;				
			}

			rowset.clear();
			colset.clear();
		}

	   sprintf(str,"Case #%d: %d %d %d\n",(p+1),trace,repeateRow,repeateCol);	   
	   testMessges.push_back(str);

		for(int k = 0; k < sizeOfMarix; k++)
		{
			free(matrix[k]);
		}

		free(matrix);
	}

	for(int i = 0; i < NoTests ; i++)
		printf("%s",testMessges[i]);

	return 0;
}
