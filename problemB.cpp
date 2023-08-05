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
		if(n == 1) {
			cout << 1 << endl; continue;
		}
		if(n == 2) {
			cout << 1 << " " << 2 << endl; continue;
		}
		ll counter = 4;
		cout << 2 << " ";
		for(ll i = 0; i < n - 2; i++) {
			if(i == n / 2 - 1) cout << 1 << " ";
			else {
				cout << counter << " ";
				counter++;
			}
		}
		cout << 3 << endl;

		

		
	} // end test cases
} // end main