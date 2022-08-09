#include"bits/stdc++.h"
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

 


void solve(){
    int x , y , n , r;
    cin >> x >> y >> n >> r;
    int p;
    if(x * n > r) {cout << -1 << endl; return; }
    else if(y * n <= r) p = n;
    else if(y > (r - (x * (n-1)))) p = 0;
    else{
        int l = 1, h = n,m;
        while(l <= h){
            m = (l + h) >> 2;
            int ans = (m * y) + ((n - m) * x);
            if(ans < r and ((m + 1) * y) + ((n - m - 1) * x) > r) {p = m;break;}
            if(ans > r) h = m  - 1;
            if(ans < r) l = m + 1;
        }
        cout << n - p << " " << p << endl;
    }



}



int main(){

    #ifndef OJ
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
   // cin >> T;
    solve();
    return 0;
}