#include<bits/stdc++.h>
#define ll long long  int                                                                                                               

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> v(n+1,0);
    bool fl = false;
    int ans;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[x]++;
        if(v[x] >= 3) { fl = true; ans = x;}
    }
    if(fl) cout << ans << endl;
    else cout << -1 << endl;


}


int main(){
    #ifdef OJ
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tt = 1; 
    cin >> tt;
    
    while(tt--){
        solve();
        
    }

    return 0;

}
