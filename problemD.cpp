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
vector<bool> visited;
vector<bool> isPrime;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL); 	

	// #ifndef ONLINE_JUDGDE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);	
	// #endif
	///////////////////////////////////////////////////////////////
	isPrime.resize(int(1e3 + 5), 1);
	isPrime[0] = 0, isPrime[1] = 0;
	for(ll i = 2; i < 1e3 + 5; i++) if(isPrime[i])
		for(ll j = i * 2; j < 1e3 + 5; j += i) isPrime[i]= 0;
	cin >> t;
	while(t--) {
		cin >> n;
		visited.clear(), visited.resize(n, 0);
		if(n == 1) {
			cout << "a" << endl; continue;
		}
		if(n == 2) {
			cout << "ab" << endl; continue;
		}
		for(ll i = 2; i * i <= n; i++) {
			if(n % i == 0) {
				visited[i] = 1;
				visited[n / i] = 1;
			}
		}	
		for(ll i = 2; i < visited.size(); i++) { 
			if(!visited[i]) {
				for(ll j = 0, k = 0; j < n; j++, k = (k + 1) % i) {
					cout << char(int('a') + k);
				}
				cout << endl; 
				break;
			}
		}
	} // end test cases
} // end main