#include"bits/stdc++.h"
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

 


void solve(){
    int n; cin >> n;
    string s;
    cin >> s;
    int a[28];
    memset(a, 0, sizeof(a));
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[s[i] - 'A'] == 1) cnt += 1;
        else{
            cnt += 2;
            a[s[i] - 'A'] = 1;
        }
    }
    cout << cnt << endl;
}


int main(){
   
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--)solve();
    return 0;
}
