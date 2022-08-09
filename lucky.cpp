#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define epic


void init(){
    freopen("C:/Users/HP/Desktop/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/output1.txt", "w", stdout);
}


using namespace std;



void solve(){
    int n, m;


    cin >> n >> m;
    //ll a[n][m], b[n][m], c[n][m];
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int mx = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int ans = 0;
            int ci = i, cj = j;
            while(ci >= 0 and ci < n and cj >= 0 and cj < m){
                ans += a[ci][cj];

                ci++; cj++;
            }
            ci = i, cj = j;
            while(ci >= 0 and ci < n and cj >= 0 and cj < m){
                ans += a[ci][cj];

                ci++; cj--;
            }
            ci = i, cj = j;
            while(ci >= 0 and ci < n and cj >= 0 and cj < m){
                ans += a[ci][cj];

                ci--; cj++;
            }
            ci = i, cj = j;
            while(ci >= 0 and ci < n and cj >= 0 and cj < m){
                ans += a[ci][cj];

                ci--; cj--;
            }
            ans -= a[i][j] * 3;


            mx = max(ans, mx);

        }
    }
    cout << mx << endl;




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
