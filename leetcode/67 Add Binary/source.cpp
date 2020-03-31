#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

#if mytemplate
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);
#endif

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            cout<<"("<<i<<","<<j<<") ";
        }
        cout<<endl;
    }

}
