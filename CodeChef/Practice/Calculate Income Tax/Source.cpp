#include<iostream>
#include<vector>
using namespace std;

long incomeAfterTax(long income)
{
	long tax = 0;
	long netIncome = income;

	if(income <= 250000)
	{	
		tax = tax + 0;
	}

	if ((income > 250000) && (income <= 500000))
	{
		tax = tax + ((income - 500000) * 5 /100);
	}
	else if(income > 500000)
	{
		tax = tax + ((250000 * 5) /100);
	}

	if ((income > 500000) && (income <= 750000))
	{
		tax = tax + ((income - 500000) * 10 /100);
	}
	else if(income > 750000)
	{
		tax = tax + ((250000 * 10) /100);
	}

	if ((income > 750000) && (income <= 1000000))
	{
		tax = tax + ((income - 750000) * 15 /100);
	}
	else if(income > 1000000)
	{
		tax = tax + ((250000 * 15) /100);
	}

	if ((income > 1000000) && (income <= 1250000))
	{
		tax = tax + ((income - 1000000) * 20 /100);
	}
	else if(income > 1250000)
	{
		tax = tax + ((250000 * 20) /100);
	}

	if ((income > 1250000) && (income <= 1500000))
	{
		tax = tax + ((income - 1250000) * 25 /100);
	}

	if(income > 1500000)
	{
		tax = tax + ((income - 1500000) * 30 /100);
	}

	return (netIncome - tax);
}

int main()
{
	int N = 0;
	
	vector<long> Income;
	long income = 0;
	
	cin>>N;
	Income.reserve(N);

	for(int i = 0; i < N; i++)
	{
		cin>>income;
		Income.push_back(income);		
	}

	for(int i = 0; i < N; i++)
	{
		cout<<incomeAfterTax(Income[i])<<endl;		
	}

	return 0;
}