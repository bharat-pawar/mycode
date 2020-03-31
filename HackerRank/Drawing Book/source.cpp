#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true
/*
//Solution 1
int pageCount(int n, int p) {
    
    if(1 == p || n == p)
        return 0;

    vector<pair<int,int>> vec;
    for(int i = 0; i <=n; i=i+2)
    {
        vec.push_back(make_pair(i,i+1));
    }

    for(int i = 0; i < vec.size(); i++)
    {
    	cout<<"{"<<vec[i].first<<","<<vec[i].second<<"},"<<endl;
    }

    int leftCount = 0, rightCount = 0;
    for(int i = 0; i < vec.size(); i++)
    {
        if(p == vec[i].first || p == vec[i].second)
        {
            break;            
        }        
        leftCount++;
    }

    for(int i = vec.size()-1; i > 0; i--)
    {
        if(p == vec[i].first || p == vec[i].second)
        {
            break;   
        }        
        rightCount++;
    }

    return(min(leftCount,rightCount));
}
*/

int pageCount(int n, int p)
{
    int turnFront, turnBack;
    if(p%2==1)
        turnFront = (p-1)/2;
    else
        turnFront = p/2;
    
    if(n%2==1)
        turnBack = (n-p)/2;
    else{
        n = n+1;
        turnBack = (n-p)/2;
    }
    
    return min(turnFront,turnBack);
}

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

	int n, p;
	cin>>n>>p;
	int noFlips = pageCount(n,p);
	cout<<noFlips<<endl;
	
	return 0;
}
