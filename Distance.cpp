//In the name of Allah, most Gracious, most Merciful

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define Asif ios::sync_with_stdio(0);cin.tie(0);


using namespace std;

void solve();


int main(){
    Asif
    int tt = 1;
    cin >> tt;
    while(tt--) solve();

    return 0;


}



void solve(){
    int x, y;
        cin >> x >> y;
        bool ml = false;
        for(int i = 0; i <= 50; i++){
            for(int j = 0; j <= 50; j++){
                int p = abs(0-i) + abs(0-j);
                int q = abs(x-i) + abs(y-j);
                if(p==q){
                    cout << i << " " << j << endl;
                    ml = true; break;
                }
                
    
            }
            if(ml)break;
        }
        if(!ml) cout << -1 << " " << -1 << endl;
}

// Alhamdulillah  - All praise to my Lord, the First & the Last


