/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: string, dp
 *  problem-link: https://codeforces.com/contest/1714/problem/D
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
#define MX                1005
#define MOD               1000000007
#define BASE              1000000002
#define MAXN              300

void inOut();
// int arr[MX];

int main() {

    inOut();
    int tc, i, j, k, l, r, n, m, x, y;
    char ch; string s, s1, s2, s3;
    
    ci(tc);

    while(tc--) {
        int vis[102] = {0};
        vector<pair<int, int>> vi;
        vector<string> vs;
        int cur = 0, sz; l = 0, r = 0;
        bool ok = true;

        cii(s1,n);
        FOR(i,0,n) ci(s2), vs.pb(s2);
        sz = s1.size();

        FOR(i,0,sz) {
            FOR(j,0,n) {
                int s2z = vs[j].size();
                if(s1.substr(i, s2z) == vs[j] && i+s2z > r) {
                    l = j, r = i+s2z;
                }
            }

            for(k = r-1; k >= 0 && !vis[k]; k--) vis[k] = 1;
            if(!vis[i]) {
                ok = false; break;
            }

            if(i == cur) {
                vi.pb(MP(l, r-vs[l].size()));
                cur = r;
            }
        }
        if(!ok) out1(-1);
        else {
            out1(vi.size());
            for(auto& ii : vi) out2(ii.PF+1, ii.PS+1);
        }
    }

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
