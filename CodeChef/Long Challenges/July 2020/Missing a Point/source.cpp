#include <iostream>
#include<unordered_map>
#include<set>
#include<algorithm>
#include<map>
using namespace std;

#define mytemplate true
class Solution {
public:
    /*string reformatDate(string date) {
        unordered_map<string,string> month_map = {{"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, 
        {"Jun","06"}, {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"}, {"Dec","12"}};
        int i = 1;       
     */ 

};

int solve (int n, string s) {
   int result_count = 0;
   for(int i = 0; i < n; i++) {
      for(int j = i; j < n; j++) {
      	string str = s.substr(i,j-1);
      	if(count(begin(str),end(str),'a') > count(begin(str),end(str),'c')) {
      		cout<<str<<endl;      		    		
      		result_count++;
      	}
      }
   }
   cout<<result_count<<endl;
   return result_count;   
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

	cout<<solve(7,"abccaab")<<endl;
/*	Solution sol;
	string s1;
	s1 = "20th Oct 2052";
	cout<<"Result : "<<sol.reformatDate(s1)<<endl;
	s1 = "6th Jun 1933";
	cout<<"Result : "<<sol.reformatDate(s1)<<endl;
	s1 = "26th May 1960";
	cout<<"Result : "<<sol.reformatDate(s1)<<endl;
*/
	return 0;
}
