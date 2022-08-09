#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define mp make_pair
#define vi vector<int>
#define S(v) sizeof(v)
#define all(v) v.begin() v.end()
using namespace std;

 


void solve(){
    
    int n; cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    a.insert(a.begin(),0);
   // a.pb(0);
    bool nonzero = false;
    int changes = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 0) continue;
        nonzero = true;
        if(a[i-1] == 0) ++changes;

    }
    int ans;
    if(nonzero){
        if(changes > 1) ans = 2;
        else ans = 1;
    }
    else ans = 0;
    cout << ans << endl;
}


int main(){
// #ifndef init
// freopen("C:/Users/HP/Desktop/input.txt","r", stdin);
// freopen("C:/Users/HP/Desktop/output.txt", "w", stdout);
// #endif
    int tt; 
    cin >> tt;
    while(tt--){
        solve();
        
    }

    return 0;

}
