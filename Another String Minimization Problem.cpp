#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		string s = "";
		for(int i = 0; i < m; i++) s += 'B';
		//cin >> s;
		//cout << s.size() << endl;
		for(int i = 0; i < n; i++){
			int x = a[i] - 1;
			int y = m - a[i];
			if(s[x] == 'B' and s[y] == 'B'){
				if(x <= y) s[x] = 'A';
				else s[y]= 'A';
			}
			else if(s[x] == 'A' and s[y] == 'A') continue;
			else{
				if(s[x] == 'B') s[x] = 'A';
				else s[y] = 'A';
			}

		}
		cout << s << endl;
		//cout << s << endl;
	}
}