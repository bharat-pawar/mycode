#include <iostream>
#include <vector>
using namespace std;

#define mytemplate true

int main(int argc, char const *argv[])
{

#if mytemplate
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#endif

  vector<int> v;
  v[0] = 10;

  for(int a = v[0]; a < v.length(); a++)
    cout<<a<<endl;

  /*int a,b,c,arr[10] = {0};

  cin >> a >> b >> c;
  arr[a]++;
  arr[b]++;
  arr[c]++;

  if(arr[a] > 1 || arr[b] > 1 || arr[c] > 1)
      cout<<"YES"<<endl;
  else
      cout<<"NO"<<endl;
*/
	return 0;
}



