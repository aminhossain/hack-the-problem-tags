/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy
 *  problem-link: https://codeforces.com/contest/1680/problem/B
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
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
#define out(x)            cout << x << "\n"
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                100000
#define mod               1000000007
#define base              10000007
 
int dx[8] = {1,-1,0,0,-1,-1,1,1};
int dy[8] = {0,0,-1,1,-1,1,-1,1};
    
void inOut();
 
int main() {
 
    inOut();
    int tc, i, j, k, l;
    char ch; string str, str2;
    char re[5][5];
 
    cin >> tc;
 
    while(tc--) {
        int n, m, cnt = 0;
        bool flag = true;
        vector<string> vs;
 
        cin >> n >> m;
        FOR(i,0,n) cin >> str, vs.pb(str);
        int poi = INT_MAX, jj = 0, poj = INT_MAX, ii = 0;
        
        FOR(i,0,n) {
            FOR(j,0,m) {
                if(vs[i][j] == 'R') {
                    if(i < poi) poi = i, jj = j;
                    if(j < poj) poj = j, ii = i;
                }
            }
        }
 
        if(poi == ii && poj == jj) out("YES");
        else out("NO");
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
