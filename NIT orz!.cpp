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
    
    int n, z;
    cin >> n >> z;
 
    int mx = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mx = max(mx, x | z);
    } 
    cout << mx << endl;
    // int n, z;
    // cin >> n >> z;
    // int m = 0;
    // for(int i = 0; i < n; i++){
    //     int a;
    //     cin >> a;
    //     m = max(m, a | z);
    // }
    // cout << m << '\n';


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
