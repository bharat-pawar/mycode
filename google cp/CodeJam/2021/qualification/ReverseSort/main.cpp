//
//  main.cpp
//  reverse
//
//  Created by Bharat Pawar on 27/03/21.
//
#include<bits/stdc++.h>
using namespace std;
void reverse(int i, int j, int* a)
{
    int x = i;
    int y = j;

    while(x<=y)
    {
        swap(a[x], a[y]);
        x++;
        y--;
    }
}

int main()
{
    int t;
    cin >> t;
    int caseNo = 0;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        long long ans = 0;
        for(int i=0; i<n-1; i++)
        {
            int minIndex = n-1;
            int min = INT_MAX;
            for(int j=n-1; j>=i; j--)
            {
                if(a[j]<min)
                {
                    min = a[j];
                    minIndex = j;
                }
            }
            reverse(i, minIndex, a);
            ans += minIndex-i+1;
        }

        caseNo++;
        cout << "Case #" << caseNo << ':' << " " << ans << endl;
    }

    return 0;
}

