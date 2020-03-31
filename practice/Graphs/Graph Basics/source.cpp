//Lapindrom
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

//#define mytemplate false

#include<unordered_map>

class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<pair<int, int>, int> mp;
        
        int x = 0, y = 0;
        for(int i = 0; i < path.size(); i++) {
            if(path[i] == 'N') {
                y++;
            }
            else if(path[i] == 'W') {
                x--;
            }
            else if(path[i] == 'E') {
                x++;
            }
            else if(path[i] == 'S') {
                y--;
            }
       
            if(mp[make_pair(x,y)] > 1)
                return false;
            mp[make_pair(x,y)]++;
            
        }
        return true;
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
	//cout<<s.isPathCrossing("NES")<<endl;
	//cout<<s.isPathCrossing("NESWW")<<endl;

    return 0; 
}
