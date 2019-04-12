#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000000
#define mod 1000000007
#define PI acos(-1.0)

#define size1 100010

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


ll calculate(ll num)
{
    ll cnt = 0;
    while(num != 0){
        if(num % 2 == 1) cnt++;
        num /= 2;
    }
    return cnt;
}

int main()
{
    ll tc, total, have;

    sc1(tc);

    while(tc--){

        ll num;
        sc1(num);

        for(ll i = 0; i < num; i++){
            ll now;
            sc1(now);
            cout << calculate(now) << " ";
        }

        cout << endl;
    }
}