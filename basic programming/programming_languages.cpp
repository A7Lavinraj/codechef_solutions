#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

#define vt vector
#define ar array
#define pb push_back
#define sz(x) (int)(x).size();

#define fore(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, k, n) for (i = k; k < n ? i < n : i > n ? i += 1 : i -= 1)
#define EACH(x, a) for (auto& x : a)

#define PI 3.141592653589793238
#define SOL 299792458

template<class A> void read (vt<A>& v);
template<class A, size_t S> void read (ar<A, S>& a);
template<class T> void read (T& x){
    cin >> x;
}

void read (double& d){
    string t;
    read(t);
    d = stod(t);
}

void read (long double& d){
    string t;
    read(t);
    d = stod(t);
}

template<class H, class...T> void read(H& h, T&...t){
    read(h);
    read(t...);
}

template<class A> void read(vt<A>& x){
    EACH(a, x)
        read(a);
}

void solve(){
	int a, b, a1, b1, a2, b2;
	read(a, b, a1, b1, a2, b2);
	if((a==a1&&b==b1)||(a==b1&&b==a1))
		cout << "1" <<"\n";
	else if((a==a2&&b==b2)||(a==b2&&b==a2))
		cout << "2" << "\n";
	else
		cout << "0" << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		solve();
	}
    return 0;
}
