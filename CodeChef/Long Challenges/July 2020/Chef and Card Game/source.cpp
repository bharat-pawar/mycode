#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define mytemplate true

int getPower(long long no) {
	int power = 0;
	while(no > 0) {
		power += no % 10;
		no = no / 10;
	}
	return power;
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
	int chefPoints = 0;
	int montyPoints = 0;
	for(int i = 0 ; i < t; i++) {
		int n;
		cin>>n;
		for(int j = 0; j < n; j++) {
			long long A, B;
			cin>>A>>B;
			if(getPower(A) > getPower(B)) {
				chefPoints++;
			}
			else if(getPower(A) < getPower(B)) {
				montyPoints++;
			}
			else {
				montyPoints++;
				chefPoints++;
			}
		}

		if(montyPoints < chefPoints) {
			cout<<0<<" "<<chefPoints<<endl;
		}
		else if(montyPoints > chefPoints) {
			cout<<1<<" "<<montyPoints<<endl;
		}
		else {
			cout<<2<<" "<<chefPoints<<endl;
		}
		chefPoints = 0;
		montyPoints = 0;
	}

	return 0;
}
