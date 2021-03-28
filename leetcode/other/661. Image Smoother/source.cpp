#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

class Solution {
public:
    long long binaryStrtoInt(string str)
    {
        reverse (begin(str),end(str));
        
        long long result = (long long) 0;
        long long base = (long long) 1;
        for(auto a : str)
        {
            result = result + a-'0' * base;
            base = base * (long long)2;
        }
        
        return result;
    }
    
    string IntToBinaryString(long long no)
    {
        if(0 == no)
            return "0";

        string result;
        while(no > 0)
        {
            if(no%2 == 0)
                result += '0';
            else
                result+='1';
            no = no / 2;
        }
        
        reverse(begin(result),end(result));
        return result;
    }
    
    
    string addBinary(string a, string b) 
    {        
        long long no1 = binaryStrtoInt(a);
        long long no2 = binaryStrtoInt(b);
        long long sum = no1 + no2;
        
        string result = IntToBinaryString(sum);
        return result;
    }
};


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

    Solution s;
    int t;
    cin>>t;

    string a,b;

   for(int i = 0; i < t; i++)
    {
        cin>>a>>b;
        cout<<a<<endl<<b<<endl;
        cout<<s.addBinary(a,b)<<endl;
   }
	
	return 0;
}
