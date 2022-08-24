/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: number theory, binary serach, prime factor
 *  problem-link: https://codeforces.com/problemset/problem/1474/B
**/

#include<bits/stdc++.h>
#include<string>
 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long int ull;
    
#define sf                scanf
#define pf                printf
#define pb                push_back
#define ppb               pop_back
#define MP                make_pair
#define PF                first
#define PS                second
#define si(n)             scanf("%d",&n)
#define sii(x,y)          scanf("%d %d",&x,&y)
#define siii(x,y,z)       scanf("%d %d %d",&x,&y,&z)
#define ci(n)             cin >> n
#define cii(x,y)          cin >> x >> y
#define ciii(x,y,z)       cin >> x >> y >> z
#define sl(n)             scanf("%lld",&n)
#define sll(x,y)          scanf("%lld %lld",&x,&y)
#define slll(x,y,z)       scanf("%lld %lld %lld",&x,&y,&z)
#define out1(x)           cout << x << "\n"
#define out2(x, y)        cout << x << " " << y << "\n"
#define out3(x, y, z)     cout << x << " " << y << " " << z << "\n"
#define outs1(x)          cout << x << " "
#define outs2(x, y)       cout << x << " " << y << " "
#define outs3(x, y, z)    cout << x << " " << y << " " << z << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define PI                acos(-1) // 3.1415926535897932
#define MX                1000005
#define MOD               1000000007
#define BASE              1000000002
#define MAXN              5005
 
void inOut();
// int arr[MX];
vector<ll> primes;
bitset<MX> vis;
 
void seive() {
    for(int i = 2; i < MX; i++) {
        if(vis[i]) continue;
        primes.pb(i);
        for(int j = i; j < MX; j += i) vis[j] = 1;
    }
}
 
 
int main() {
 
    inOut();
    ll tc, i, j, k, l, r, n, m, x, y;
    char ch; string s, s1, s2, s3;
    seive();
 
    ci(tc);
 
    while(tc--) {
        ci(n);
        x = lower_bound(primes.begin(), primes.end(), n+1) - primes.begin();
        ll n1 = primes[x];
        y = lower_bound(primes.begin(), primes.end(), n+n1) - primes.begin();
        ll n2 = primes[y];
 
        out1(n1*n2);
        
    }
 
    return 0;
}

    
    
void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif
}