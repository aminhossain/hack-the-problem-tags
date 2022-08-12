/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]    
 *  Idea: dp
 *  problem-link: https://codeforces.com/problemset/problem/467/C
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
#define MX                200005
#define MOD               1000000007
#define BASE              1000000002
#define MAXN              5005

void inOut();
// int arr[MX];
ll dp[MAXN][MAXN], arr[MAXN], sum[MAXN], ans = 0;

int main() {

    inOut();
    int tc, i, j, k, l, r, n, m, x;
    // char ch; string s, s1, s2, s3;
    
    ciii(n, m, k);

    FOR(i,1,n+1) {
        ci(arr[i]);
        sum[i] = sum[i-1] + arr[i];
    }

    FOR(i,m,n+1) {
        FOR(j,1,k+1) {
            dp[i][j] = max(dp[i-1][j], dp[i-m][j-1]+sum[i]-sum[i-m]);
        }
        ans = max(ans, dp[i][k]);
    }

    out1(ans);

    return 0;
}
    
    
void inOut() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}
