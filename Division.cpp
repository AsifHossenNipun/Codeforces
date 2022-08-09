#include<bits/stdc++.h>
#define ll long long  int                                                                                                               

using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << "Division " ;
    int ans;
    if(n <= 1399) ans = 4;
    else if(n >= 1400 and n <= 1599) ans = 3;
    else if(n >= 1900) ans = 1;
    else ans = 2;
    cout << ans << endl;


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
