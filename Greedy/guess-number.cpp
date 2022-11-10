/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy, two-pointer
 *  problem-link: https://codeforces.com/problemset/problem/416/A
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
#define INF               1e18

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

void inOut();
// int a[MX];

int main() {

    inOut();
    int tc = 1, i, j, k, l, r, n, m;
    char ch; string s, s1, s2, s3;
    
    // ci(tc);

    while(tc--) {
        int x; l = -2e9, r = 2e9;
        bool ok = true;
        ci(n);

        while(n--) {
            ciii(s1, x, ch);

            if(s1 == ">=") {
                if(ch == 'Y') l = max(l, x);
                else r = min(r, x-1);
            } else if(s1 == "<=") {
                if(ch == 'Y') r = min(r, x);
                else l = max(l, x+1);
            } else if(s1 == ">") {
                if(ch == 'Y') l = max(l, x+1);
                else r = min(r, x);
            } else {
                if(ch == 'Y') r = min(r, x-1);
                else l = max(l, x);
            }
        }
        
        if(l <= r) out1(l);
        else out1("Impossible");
    }

    return 0;
}
    
void inOut(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}