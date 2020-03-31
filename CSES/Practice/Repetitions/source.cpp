//Missing umber
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

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

	vector<unsigned long> vec_count(4);
	fill(begin(vec_count),end(vec_count),0);
	unsigned long temp = 0;

	string str;
	cin>>str;

	for(string::iterator ch = begin(str); ch!=end(str); ++ch)
	{
		if(*ch == *(ch+1))
		{
			temp++;
		}
		else
		{
			temp++;
			if((*ch == 'A') && (temp > vec_count[0]))
			{
				vec_count[0] = temp;
			}
			else if((*ch == 'C') && (temp > vec_count[1]))
			{
				vec_count[1] = temp;
			}
			else if((*ch == 'T') && (temp > vec_count[2]))
			{
				vec_count[2] = temp;
			}
			else if((*ch == 'G') && (temp > vec_count[3]))
			{
				vec_count[3] = temp;
			}
			temp = 0;
		}
	}

	sort(begin(vec_count),end(vec_count));
	unsigned long max_no = vec_count[3];
	cout<<max_no;

	return 0;
}
