#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,n) for (int i=(a);i<=(n);i++)
#define per(i,a,n) for (int i=(n);i>=(a);i--)
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pii pair<int,int>
#define fi first
#define se second
#define lowbit(i) ((i)&(-i))
#define all(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
using namespace std;

int main() {

#ifndef OJ
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	
	int t, n, x, z;
	scanf("%d", &t);

	while (t--) {
		int ans = 0;
		scanf("%d%d", &n, &z);
		rep(i, 1, n) {
			scanf("%d", &x);
			ans = max(ans, z | x);
		}
		printf("%d\n", ans);
	}

	return 0;
}