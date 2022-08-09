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
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    for(int i = 2; i <= n; i++) cout << i << " ";
    cout << 1;
    cout << endl;
}


int main(){
    #ifdef OJ
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tt; 
    cin >> tt;
    
    while(tt--){
        solve();
        
    }

    return 0;

}
