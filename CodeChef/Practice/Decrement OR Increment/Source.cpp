#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin>> n;
	
	if(n%4 == 0)
		n++;
	else
		n--;
	
	cout<<n;

	return 0;
}