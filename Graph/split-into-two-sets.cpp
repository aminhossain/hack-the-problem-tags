/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: dsu, dfs, bipariti graph
 *  problem-link: https://codeforces.com/contest/1702/problem/E
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
#define MAXN              300

void inOut();
// int arr[MX];

map<int, vector<int> >mp;
vector<bool> vis;

int check(int v) {
    vis[v] = true;
    for(auto cur : mp[v]) {
        if(!vis[cur]) return check(cur) + 1;
    }

    return 1;
} 

int main() {

    inOut();
    int tc, i, j, k, l, r, n, m, x, y;
    char ch; string s, s1, s2, s3;

    ci(tc);

    while(tc--) {
        int u, v;
        bool ok = false;
        mp.clear();
        vis.clear();

        ci(n);
        vis.resize(n+1, false);

        FOR(i,0,n) {
            cii(u,v);
            mp[u].pb(v);
            mp[v].pb(u);

            if(u == v || mp[u].size() > 2 || mp[v].size() > 2) ok = true;
        }

        if(ok) {
            out1("NO");
            continue;
        }

        FOR(i,0,n) {
            if(!vis[i+1]) {
                if(check(i+1)%2) {
                    ok = true; break;
                }
            }
        }

        if(ok) out1("NO");
        else out1("YES");
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