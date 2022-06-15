#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define arr array
#define pb push_back

#define fore(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, k, n) for (i = k; k < n ? i < n : i > n ? i += 1 : i -= 1)
#define PI 3.141592653589793238
#define SOL 299792458

void solve(){
	int n, x;
	cin >> n >> x;
	cout << (n%6==0?x*(n/6):x*(n/6+1)) << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, i = 1;
    cin>>t;
    while(t--){
        //cout<<"#"<<i<<": ";
        solve();
        //++i;
    }
    return 0;
}
