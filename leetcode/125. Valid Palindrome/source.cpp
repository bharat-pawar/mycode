#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

string isBalanced(string s) 
{
    stack<char> st;
    for(char a:s)
    {
        switch(a)
        {
            case '{':
            case '[':
            case '(':
                    st.push(a);
                    break;
            case '}':
                    if(st.empty() || st.top()!='{')
                    {
                        return "NO";
                    }
                    st.pop();
                    break;
            case ')':
                    if(st.empty() || st.top()!='(')
                    {
                        return "NO";
                    }
                    st.pop();
                    break;
            case ']':
                    if(st.empty() || st.top()!='[')
                    {
                        return "NO";
                    }
                    st.pop();
                    break;
            default:
                    break;
        }
        
    }

    if(st.empty())
    {
        return "YES";
    }
    else
    {
        return"NO";
    }
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

    int t;
    cin>>t;

    vector<string> strVec;
    string str;
    for(int i = 0; i < t; i++)
    {
        cin>>str;
        strVec.push_back(str);
    }
    
    for(int i = 0; i < t; i++)
    {
        cout<<isBalanced(strVec[i])<<endl;
    }
	
	return 0;
}
