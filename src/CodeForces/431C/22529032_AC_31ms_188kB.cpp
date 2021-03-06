#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 100007
#define mod 1000000007
#define PI acos(-1.0)
#define size1 2000006

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

ll n, k, d;
ll dp[105][105][2];

ll callDP(ll indx, ll sum, bool ok)
{
    if(sum > n) return 0;
    if(sum == n) return ok;

    ll &retval = dp[indx][sum][ok];
    if(retval != -1)
        return retval;

    ll ans = 0;

    for (ll i = 1; i <= k; ++i) {
        ans = (ans + callDP(indx + 1, sum + i, ok || (i >= d))) % mod;
    }

    return retval = ans;
}

int main() {

    ll m, tc, num, t = 1;

    sc2(n, k);
    sc1(d);

    memset(dp, -1, sizeof(dp));
    cout << callDP(0, 0, 0) << endl;
}