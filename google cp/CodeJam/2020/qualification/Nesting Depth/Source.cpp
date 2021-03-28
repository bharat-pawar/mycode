#include<iostream>
#include<vector>
#include<stack>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
	int NoTests = 0;
	vector<char*> testOuputs;
	
	cin>>NoTests;

	string myline;
	
	char *input = "";
	char *str = "";
	stack <char>stk;

	for(int i = 0 ; i < NoTests; i++)
	{		
		cin>>myline;
		reverse(myline.begin(),myline.end());

		const int n = myline.length();
		str = new char[n + 1];

		strcpy(str, myline.c_str());		

		for(int j = 0; j < strlen(str); j++)
		{
			if(j == 0 && str[j] == '1')
			{
				stk.push(')');
			}

			if(str[j] == '1')
			{
				stk.push('1');
				if(str[j + 1] == '0' || str[j + 1] == '\0')
				{
					stk.push('(');
				}
			}

			if(str[j] == '0')
			{
				stk.push('0');
				if(str[j + 1] == '1')
				{
					stk.push(')');
				}			
			}
		}

		char *opStr = new char[stk.size()+1];
		
		int k = 0;
		while(stk.size())		
		{
			opStr[k++] = stk.top();
			stk.pop();
		}

		opStr[k] = '\0';

		testOuputs.push_back(opStr);
	}

	for(int j = 0 ; j < testOuputs.size(); j++)
	{
		printf("Case #%d: %s\n",(j+1),testOuputs[j]);
	}	

	return 0;
}
