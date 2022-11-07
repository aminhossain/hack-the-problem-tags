/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: implementation, constructive algorithms
 *  problem-link: https://codeforces.com/contest/1750/problem/C
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
#define MAXN              1002

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

void inOut();

int a[MX], L[MX];

int main() {

    inOut();
    int tc = 1, i, j, k, l, r, n, m;
    char ch; string s, s1, s2, s3;
    
    ci(tc);

    while(tc--) {
        int x;
        vector<pair<int, int>> pii;

        ci(n);
        cii(s1, s2);

        if(s1 != s2) {
            pii.pb({0,n-1});
            FOR(i,0,n) {
                s1[i] = s1[i] == '0' ? '1' : '0';
            }
        }

        if(s1 != s2 || (n == 1 && s2[0] == '1')) {
            out1("NO"); continue;
        } 

        FOR(i,0,n) {
            if(s1[i] == '0') {
                j = i; s1[i] = '1';
                while(j+1 < n && a[j] == '0') {
                    j++; s1[j] = '1';
                }
                pii.pb({i,j});
                if(i > 0) {
                    s2[0] = s2[0] == '0' ? '1' : '0';
                }
            }
        }

        if(s2[0] == '0') pii.pb({0, n-1});
        else pii.pb({0, 0}), pii.pb({1, n-1});

        out1("YES");
        out1(pii.size());
        for(auto it : pii) {
            out2(it.PF+1, it.PS+1);
        }
    }

    return 0;
}
    
void inOut() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}
