#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

 vector<int> pancakeSort(vector<int>& A) {

    std::vector<int> counterVec;
    for(int i = 0; i < A.size(); i++)
    {
        int count = 0;
        int flag = false;
        for(int j = i+1; j < A.size(); j++)
        {
            if(A[i] < A[j])
            {
                flag = true;
                swap(A[i],A[j]);
                count+=2;
            }
        }

        if(flag == false)
            break;

        for(int k = 0; k < A.size() ; k++)
        {
            cout<<A[k]<<" ";
        }
        cout<<endl;
        counterVec.push_back(count);
    }
    return counterVec;
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

    vector<int> v;

    int n;
    cin>>n;
    
    int input;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }

    std::vector<int> counterVec = pancakeSort(v);

    for(auto a : counterVec)
    {
        cout<<a<<" ";
    }
	
	return 0;
}
