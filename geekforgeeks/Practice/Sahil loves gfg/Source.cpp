#include<iostream>
#include<vector>
using namespace std;

int find_gfg_instring(char *str)
{
    int i = 0;
    int count = 0;
    while(str[i+2]!='\0')
    {
        if(str[i] == 'g' && str[i+1] == 'f' && str[i+2] == 'g')
            count++;
        i++;
    }
    
    if(count == 0)
        return -1;
    return count;
}

int main() {
    int N = 0;
    char str[100];
    vector<int> counts;
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin>>str;
        int count = find_gfg_instring(str);
        counts.push_back(count);
    }

	for(int j = 0; j < counts.size(); j++)
	{
		cout<<counts[j]<<endl;
	}
       
	return 0;
}