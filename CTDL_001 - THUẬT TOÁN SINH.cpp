#include <iostream>
#include <string>
#include <iomanip>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ui unsigned int
#define fr first
#define sc second
#define pb push_back
#define mp make_pair
#define sz(x) (int)((x).size())

typedef vector<int> vi;

bool check_palin(vi v, int n){
	for(int i = 1; i <= n/2; ++i)
		if(v[i] != v[n - i + 1]) return false;
	return true;
}

void sinh(vi &v, int n, int &ok){
	int i = n;
	while(i >= 1 && v[i] == 1){ v[i] = 0; --i; }
	if(!i) ok = 1;
	else v[i] = 1;
}

void process(){
	int n; cin >> n;
	vi v(n+1, 0);
	int ok = 0;
	while(!ok){
		if(check_palin(v, n)){
			for(int i = 1; i <= n; ++i)
				cout << v[i] << ' ';
			cout << '\n';
		}
		sinh(v, n, ok);
	}
}

int main(){
	faster();
	process();
	return 0;
}