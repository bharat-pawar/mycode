// rotatearray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


void rotateByOne(int *arr, int n)
{
	int i = 0;
	int iFirstElement = arr[0];
	
	for(i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}

	arr[i] = iFirstElement;
}

void rotateArray(int *arr, int n, int r)
{
	for(int i = 0; i < r; i ++)
	{
		rotateByOne(arr, n);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int n = 10;
	int iMatrix[n] = {1,2,3,4,5,6,7,8,9,0};

	cout<<"Before rotation : ";
	for (int i = 0; i < n ; i++)
		cout<<iMatrix[i]<<" ";
	cout<<endl;
	rotateArray(iMatrix, n, 3);

	cout<<"After rotation : ";
	for (int i = 0; i < n ; i++)
		cout<<iMatrix[i]<<" ";


	return 0;
}

