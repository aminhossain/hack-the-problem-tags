/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: Sieve of Eratosthenes + binary search
 *  problem-link: https://codeforces.com/contest/230/problem/B
**/

#include<bits/stdc++.h>
#include<string>
    
using namespace std;
typedef long long int ll;
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
#define sl(n)             scanf("%lld",&n)
#define sll(x,y)          scanf("%lld %lld",&x,&y)
#define slll(x,y,z)       scanf("%lld %lld %lld",&x,&y,&z)
#define outn(x)           cout << x << "\n"
#define outt(x, y)        cout << x << " " << y << "\n"
#define outs(x)           cout << x << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                1000000
#define mod               1000000007
#define base              10000007
 
 
void inOut();
bool check[mx+2];
vector<ll> primes;
vector<ll> tprimes;
 
void sieve() {
    CLR(check, true);
    for(ll i = 2; i*i <= 1e12; i++) {
        if(check[i]) {
            primes.pb(i);
            for(ll j = i*i; j <= mx; j+=i) 
                check[j] = false;
        }
    }
 
    ll size = primes.size();
    for(ll i = 0; i < size; i++) {
        tprimes.pb(primes[i]*primes[i]);
    }
}
 
bool findTPrime(ll n) {
    int low = 0, high = tprimes.size();
    int mid = (low+high)/2;
 
    while(low <= high) {
        if(tprimes[mid] == n) return true;

        if(tprimes[mid] > n) high = mid - 1;
        else low = mid + 1;
        mid = (high + low)/2;
    }
 
    return false;
}
 
int main() {
 
    inOut();
    sieve();
    
    ll i, j, tc, k, l, n, x;
    string s;
 
    cin >> n;
 
    FOR(i,0,n) {
        cin >> x;
        if(findTPrime(x)) outn("YES");
        else outn("NO");
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
