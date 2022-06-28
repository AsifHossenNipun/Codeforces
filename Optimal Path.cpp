#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define mp make_pair
#define vi vector<int>
#define S(v) sizeof(v)
#define all(v) v.begin()


void init(){
    freopen("C:/Users/HP/Desktop/DSA/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/DSA/output1.txt", "w", stdout);
}


using namespace std;

ll sum(ll n, ll a, ll p){
    return ((n * (a + p) / 2));
}



void solve(){
    ll a, b;
    cin >> a >> b;
    ll ans = sum(b-1, 1, b-1);
    //cout << ans << endl;
    ans += sum (a, b, a * b);
    cout << ans << endl;
    


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
