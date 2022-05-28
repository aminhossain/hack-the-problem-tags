/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: Sort + Bruteforce
 *  problem-link: https://codeforces.com/contest/285/problem/C
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
#define mx                300005
#define mod               1000000007
#define base              10000007
    
void inOut();
ll arr[mx];
 
int main() {
 
    inOut();
    
    ll i, j, tc, k, l, n;
    string s;
    ll ans = 0;
 
    cin >> n;
 
    FOR(i,0,n) cin >> arr[i];

    sort(arr, arr+n);
    j = n - 1, k = n;
    
    if(arr[n] > k) {
        ans += (arr[n] - k);
        j -= 1, k -= 1;
    }
 
    for(i = j; i >= 0; i--) {
        if(arr[i] < 0) ans += abs(arr[i] - k);
        else if(arr[i] > k) ans += (arr[i] - k);
        else if(arr[i] < k) ans += (k - arr[i]);
        k--;
    }
 
    outn(ans);
 
    return 0;
}
    
    
void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}