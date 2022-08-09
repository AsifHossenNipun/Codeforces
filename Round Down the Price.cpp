#include<bits/stdc++.h>
using namespace std;

void solve(){
	int s; cin >> s;
	string t;
	t = to_string(s);
	string m = "1";
	for(int i = 1; i < t.length(); i++){
		m += '0';
	}
	int k = stoi(m);
	cout << s - k << endl;
}


int main(){
	int t; cin >> t;
	while(t--) solve();
}