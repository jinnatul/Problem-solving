#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>

using namespace std;


int main()
{

    long long int n,i=0,j,a,b,c,ln,my=0,ck=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;

        if(a*a+b*b==c*c)
            cout<<"YES"<<endl;
        else if(a*a+c*c==b*b)
            cout<<"YES"<<endl;
        else if(b*b+c*c==a*a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

     }

}
