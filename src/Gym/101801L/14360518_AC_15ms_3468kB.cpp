#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)



int main()
{
    ll i,j=0,k,l,a=0,b,m,n,ck=0,dk=1,w,e,r;

    scl1(n);
    while(n--){
        scl1(a);

        if(a%2==0){
            cout<<a/2<<" "<<a/2<<endl;
        }
        else{
            cout<<(a/2)+1<<" "<<a/2<<endl;
        }
    }
}
