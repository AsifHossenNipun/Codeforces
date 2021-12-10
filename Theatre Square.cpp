
#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;


int main(){

    ll n , m , a;
    cin >> n >> m >> a;
    n = n % a == 0 ? n / a : n / a + 1;
    m = m % a == 0 ? m / a : m / a + 1;
    cout << n * m ;
    return 0;


}


