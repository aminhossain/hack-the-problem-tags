```C++
/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: Bruteforce + Keep Track
 *  problem-link: https://codeforces.com/contest/230/problem/A
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
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                102
#define mod               1000000007
#define base              10000007
    
void inOut();

int main() {
 
    inOut();
    int i, j, tc, k, l, s, n, m, a, b;
    string s1, ans = "YES";
    vector< pair<int, int> >vp;
    
    cin >> s >> n;

    FOR(i,0,n) {
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }

    sort(vp.begin(), vp.end());
    ll kSum = s, dSum = 0;

    if(vp[0].first < s) {
        kSum += vp[0].second;
        FOR(i, 1, n) {
            if(kSum <= vp[i].first) {
                ans = "NO";
                break;
            }
            kSum += vp[i].second;
        }
    } else {
        ans = "NO";
    }

    cout << ans << "\n";

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

```