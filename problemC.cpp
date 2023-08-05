#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll; 					
typedef unsigned long long ull; 
typedef long double ld;
#define inf 1000000000000000005
///////////////////////////////
ll t, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL); 	

	// #ifndef ONLINE_JUDGDE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);	
	// #endif
	///////////////////////////////////////////////////////////////
	cin >> t;
	while(t--) {
		cin >> n;
		ll e = 0, o = 0;
		bool ok = 0;
		ll maxi = -inf;
		for(ll i = 0; i < n; i++) {
			ll curr; cin >> curr;
			if(maxi == -inf) {
				maxi = curr;
			} else {
				maxi = max(maxi, curr);
			}
			if(curr > 0 && i % 2) {
				ok = 1; 
				o += curr;
			} else if(curr > 0) {
				ok = 1;
				e += curr;
			}
		}
		if(ok) cout << max(e, o) << endl;
		else cout << maxi << endl;
		
	
		
	} // end test cases
} // end main