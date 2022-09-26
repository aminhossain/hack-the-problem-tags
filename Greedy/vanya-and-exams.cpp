/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy, bruteforce
 *  problem-link: https://codeforces.com/problemset/problem/492/C
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
#define bug(...)          __f (#__VA_ARGS__, __VA_ARGS__)
    
#define PI                acos(-1) // 3.1415926535897932
#define MX                1000005
#define MOD               1000000007
#define BASE              1000000002
#define MXN               1e14

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

void inOut();
// int a[505];

int main() {

    inOut();
    int tc = 1, i, j, k, l, r, n, m, t;
    char ch; string s, s1, s2, s3, s4;

    // ci(tc);

    while(tc--) {
        ll x, y, need, a, b, tot = 0, ans = 0;
        vector<pair<ll, ll>> vp;
        ciii(n,x,y);
        need = n*y;

        FOR(i,0,n) {
            cii(a,b);
            tot += a;
            vp.pb({b,a});
        }

        if(tot/n >= y) out1(0);
        else {
            need -= tot;
            sort(vp.begin(), vp.end());

            FOR(i,0,n) {
                if(x-vp[i].PS > 0 && need > 0) {
                    ans += (min(need, (x-vp[i].PS)) * vp[i].PF);
                    need -= min(need, (x-vp[i].PS));
                }
            }
            out1(ans);
        }
    }

    return 0;
}
    
    
void inOut() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}