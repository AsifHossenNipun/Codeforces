#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define epic

void init(){
    freopen("C:/Users/HP/Desktop/DSA/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/DSA/output1.txt", "w", stdout);
}


using namespace std;

bool is_pal(int t, int m){
    int x = t % 10;
    x *= 10;
    int y = t / 10;
    if(x + y == m) return true;
    return false;
}
void solve(){
    string s;
    cin >> s;
    int n; cin >> n;
    int p = 1440 / n;
    string d = "", c = "";
    d += s[0]; d += s[1];
    c += s[3]; c += s[4];
    int l = stoi(d);
    int q = stoi(c);
    int cnt = 0;
    //cout << p << endl;
    //cout << l  << " " << q << endl;
    if(is_pal(l,q)) cnt++;
    for(int i = 0; i < p+1; i++){
        int h = (n) / 60;
        l += h;
        int b = (n%60);
        q += b;
        l %= 24;
      // cout << l << ":" << q << endl;
        if(is_pal(l,q))cnt++;

    }
    cout << cnt << endl;

    
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
