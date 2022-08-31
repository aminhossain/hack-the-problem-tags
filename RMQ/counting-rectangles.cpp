/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: 2D-prefix-sum
 *  problem-link: https://codeforces.com/contest/1722/problem/E
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
#define MAXN              1002

void inOut();
ll ar[1005][1005];
ll ps[1005][1005];

int main() {

    inOut();
    int tc, i, j, k, l, r, n, m;
    char ch; string s, s1, s2, s3;

    ci(tc);

    while(tc--) {

        int h, w, hs, ws, hb, wb;
        cii(n, k);

        FOR(i,0,MAXN) 
            FOR(j,0,MAXN) ar[i][j] = ps[i][j] = 0;

        FOR(i,0,n) {
            cii(h, w);
            ar[h][w] += h*w;
        }

        FOR(i,1,MAXN) {
            FOR(j,1,MAXN) {
                ps[i][j] = ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1] + ar[i][j];
            }
        }

        while(k--) {
            cii(hs, ws);
            cii(hb, wb);

            ll ans = ps[hb-1][wb-1] - ps[hb-1][ws] - ps[hs][wb-1] + ps[hs][ws];
            out1(ans);
        }
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