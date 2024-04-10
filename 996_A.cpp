#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
typedef long double db;
const ll MOD=1e9+7;
const ll NMAX=1e18;
#define all(x) x.begin(), x.end()
#define fori(i,a,b) for(ll i=a;i<b;i++)

#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define mi map<int,int>
#define mll map<ll,ll>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a ;}
ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}

bool prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++)
        if (n%x == 0)
            return false;
    return true;
}
vl get_divisors(ll n) {
    vl dp(n + 1, 1);
    for (ll i = 2; i <= n; i++) {
        for (ll j = i; j <= n; j += i) {
            dp[j]++;
        }
    }
    vl divisors;
    for (ll i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.pb(i);
        }
    }
    return divisors;
}
vl factors(ll n) {
    vl f;
    for (ll x = 2; x*x <= n; x++)
        while (n%x == 0)
        {
            f.pb(x);
            n /= x;
        }
    if (n > 1) f.pb(n);
    return f;
}
bool carreParfait(ll n) {
    double x = sqrt(n);
    return floor(x) == x;
}
template <class T>
void show(T v) {
    fori(i,0,v.size()) cout<<v[i]<<" ";
    cout<<endl;
}
template <class T>
ll sum(T v) {
    ll s=0;
    fori(i,0,v.size()) s+=v[i];
    return s;
}
template <class T>
void read(T &v,ll n) {fori(i,0,n) {cin >> v[i];}}

void solve()
{
    ll n;
    cin>>n;
    ll bill100, bill20, bill10 , bill5, bill1;

    bill100=n/100;
    n%=100;
    bill20=n/20;
    n%=20;
    bill10=n/10;
    n%=10;
    bill5=n/5;
    n%=5;
    bill1=n/1;
    cout<<bill100+bill20+bill10+bill5+bill1<<endl;

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//int tt=1;
	//cin >> tt;
	//for (int i = 1; i <= tt; i++)
	//{
		solve();
	//}
}