//In the name of Allah, most Gracious, most Merciful

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define Asif ios::sync_with_stdio(0);cin.tie(0);
#define ull unsigned long long
#define INF 1e+19


using namespace std;


long long add(int x) {

    return x * 1LL * (x + 1) / 2;
}

int main(){
    Asif

    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        ll l = 1, r = 2 * n - 1;
        ll ans = r;
        bool bl = false;
        while(l <= r){
           // cout << "Honey" << endl;
            int mid = (l + r) >> 1;
            if(mid >= n){
                bl =( (add(n) + add(n-1) - add(2 * n - 1 - mid)) >= x);
            }
            else bl = (add(mid) >= x);

            if(bl){
                r = mid - 1;
                ans = mid;
            }
            else l = mid + 1;
           // cout << "Oop" << endl;
        }
        cout << ans << endl;
    }

    return 0;


}




// Alhamdulillah  - All praise to my Lord, the First & the Last
