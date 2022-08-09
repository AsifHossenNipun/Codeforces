#include"bits/stdc++.h"
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

 


void solve(){
    string s;
    cin>> s;
    bool ans;
    if((s[0] == 'y' or s[0] == 'Y') and (s[1] == 'e' or s[1] == 'E') and (s[2] == 's' or s[2] == 'S') ) ans = true;
    else ans = false;
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main(){
   
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--)solve();
    return 0;
}
