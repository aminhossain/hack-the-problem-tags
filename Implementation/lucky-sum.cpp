/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce, backtrack
 *  problem-link: https://codeforces.com/problemset/problem/121/A
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
    
#define pi                acos(-1) // 3.1415926535897932
#define mxn               1e10
#define mx                200005
#define mod               1000000007
#define base              1000000002

void inOut();

// int arr[mx]
vector<ll> vln;

// backtrack
void luckyNum(ll curNum) {
    vln.pb(curNum);
    ll lnum4 = curNum * 10 + 4;
    ll lnum7 = curNum * 10 + 7;

    if(lnum4 < mxn) luckyNum(lnum4);
    if(lnum7 < mxn) luckyNum(lnum7);

    return;
}

int main() {

    inOut();
    ll i, j, tc, k, l, r, n, m, x, y;
    char ch; string s, s1, s2, s3;
    
    luckyNum(0);
    sort(vln.begin(), vln.end());
    ll sz = vln.size(), ans = 0;

    cii(l, r);

    FOR(i,0,sz-1) {
        ll lnum = vln[i] + 1;
        ll rnum = vln[i+1];
        if(r < lnum || rnum < l) continue;

        ll maxi = max(lnum, l);
        ll mini = min(rnum, r);
        ans += (mini - maxi + 1) * rnum;
    }

    out1(ans);

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