#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define mp make_pair
#define vi vector<int>
#define S(v) sizeof(v)
#define all(v) v.begin() v.end()


void init(){
    freopen("C:/Users/HP/Desktop/DSA/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/DSA/output1.txt", "w", stdout);
}


using namespace std;

 


void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0, pre_val = a[0], suf = 0;
    for(int i = 1; i < n; i++){
        a[i] -= suf;
        if(a[i] <= pre_val){
            ans += (pre_val - a[i]);
            pre_val = a[i];
        }
        else {
            ans += (a[i] - pre_val);
            suf += (a[i] - pre_val);
        }

    }
    ans += abs(pre_val);
    cout << ans  << endl;


}


int main(){
    init();
    /* Please set the input first */
    
    int tt; 
    cin >> tt;
    while(tt--){
        solve();
        
    }

    return 0;

}
