/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: prefix-sum + sort + bruteforce
 *  problem-link: https://codeforces.com/contest/433/problem/B
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
#define mx                100005
#define mod               1000000007
#define base              10000007
    
void inOut();
ll arr[mx], arr1[mx], arr2[mx];
 
int main() {
 
    inOut();
    
    ll i, j, tc, k, l, n, m;
    string s;
    ll x = 0, q, a, b;
 
    cin >> n;
 
    FOR(i,0,n) {
        cin >> arr[i];
        arr1[i] = x += arr[i];
    }
 
    sort(arr, arr+n);
    x = 0;
 
    FOR(i,0,n) {
        arr2[i] = x += arr[i];
    }
 
    cin >> m;
 
    FOR(i,0,m) {
        cin >> q >> a >> b;
 
        if(q == 1) {
            if(a > 1) outn(arr1[b-1] - arr1[a-2]);
            else outn(arr1[b-1]);
        } else  {
            if(a > 1) outn(arr2[b-1] - arr2[a-2]);
            else outn(arr2[b-1]);
        }
    }
 
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
