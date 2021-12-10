//In the name of Allah, most Gracious, most Merciful

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()


using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       vector <pair<int, int> > a(n);
       for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a[i].first = x;
            a[i].second = i;
       }
       sort(all(a));
       ll sum = 0;
       reverse(all(a));
       int l = 0, r = 0;
       int ans[n];
       for(int i = 0; i < n; i++){
           ans[a[i].second] = i & 1 ? --l : ++r;
           sum += abs(ans[a[i].second]) * 2LL * a[i].first;
       }
       cout << sum << endl;
       cout << 0 << " ";
       for(int i = 0; i < n; i++) cout << ans[i] << " ";
       cout << endl;
    }
    return 0;


}

// Alhamdulillah  - All praise to my Lord, the First & the Last


