/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy,implementation, sorting
 *  problem-link: https://codeforces.com/contest/1738/problem/A
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
#define MX                100005
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
ll a[MX], b[MX];

int main() {

    inOut();
    ll tc = 1, i, j, k, l, r, n, m, t;
    char ch; string s, s1, s2, s3, s4;

    ci(tc);

    while(tc--) {
        vector<ll> vx, vy;
        int x, y, cnt0 = 0, cnt1 = 0; 
        ll ans = 0;

        ci(n);

        FOR(i,0,n)  
            ci(a[i]);

        FOR(i,0,n) {
            ci(b[i]);
            if(a[i] == 0) vx.pb(b[i]), cnt0++;
            else vy.pb(b[i]), cnt1++;
        }

        sort(vx.begin(), vx.end());
        sort(vy.begin(), vy.end());

        x = vx.size(), y = vy.size();

        FOR(i,0,n) {

            if(cnt1 > 0 && cnt0 > 0) {
                if(x == 1 && y == 1) {
                    ans += min(vx[x-1], vy[y-1]) + (max(vx[x-1], vy[y-1])*2);
                } else {
                    ans += (vx[x-1]*2) + (vy[y-1]*2);
                    x--, y--, cnt0--, cnt1--;
                }
                i++;
            } else if(cnt0 > 0) {
                ans += vx[x-1], x--, cnt0--;
            } else if(cnt1 > 0) {
                ans += vy[y-1], y--, cnt1--;
            }
        }
        
        out1(ans);
    }

    return 0;
}
    
void inOut() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        // freopen("input-cpp.txt", "r", stdin);
        // freopen("output-cpp.txt", "w", stdout);
    #endif
}