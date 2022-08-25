/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]    
 *  Idea: prefix-sum, binary-serach
 *  problem-link: https://codeforces.com/problemset/problem/978/C
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
ll pre[MX];

ll findPos(ll x, ll hi) {
    ll lo = 1, mid, ans = 0;
    while(lo <= hi) {
        mid = (lo+hi)>>1;

        if(pre[mid] < x) ans = mid, lo = mid+1;
        else hi = mid-1;
    }
    return ans;
}

int main() {

    inOut();
    ll tc, i, j, k, l, r, n, m, x;
    char ch; string s, s1, s2, s3;
    
    cii(n, m);

    FOR(i,1,n+1) {
        ci(x);
        pre[i] = pre[i-1] + x;
    }

    FOR(i,0,m) {
        ci(x);  
        ll id = findPos(x, n);
        // ll id = lower_bound(pre, pre+n+1, x) - pre;
        x -= pre[id];
        out2(id+1, x);
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
