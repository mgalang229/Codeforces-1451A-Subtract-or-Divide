#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	//if n is less than or equal to 3 then just subtract n by one
	//otherwise, if n is greater than 3 and is even, then print 2
	//explanation: n can be divided by n/2 and after that subtract by one
	//next condition, if n is greater than 3 and is odd, then print 3
	//explanation: since n is odd subtract one to make it even which is an extra step
	if(n<=3)
		cout << n-1;
	else
		cout << (n%2==0?2:3);
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
