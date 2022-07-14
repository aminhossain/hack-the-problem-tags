/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]    
 *  Idea: binary serach
 *  problem-link: https://codeforces.com/problemset/problem/371/C
**/
 
#include<bits/stdc++.h>
#include<string>

//Compiler version g++ 6.3.0
    
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
#define ci(n)             cin >> n
#define cii(x,y)          cin >> x >> y
#define ciii(x,y,z)       cin >> x >> y >> z
#define sl(n)             scanf("%lld",&n)
#define sll(x,y)          scanf("%lld %lld",&x,&y)
#define slll(x,y,z)       scanf("%lld %lld %lld",&x,&y,&z)
#define outn(x)           cout << x << "\n"
#define outt(x, y)        cout << x << " " << y << "\n"
#define outtt(x, y, z)    cout << x << " " << y << " " << z << "\n"
#define outs(x)           cout << x << " "
#define outts(x, y)       cout << x << " " << y << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                1000000000
#define mod               1000000007
#define base              10000007

void inOut();

int arr[5005];

int main() {

    inOut();
    
    ll i, j, tc, k, l, n, m, x, y, z, sz;
    char ch; string s1, s2, s3;
    ll b = 0, c = 0, s = 0, pb1, pc1, ps1, pb2, pc2, ps2;

    ci(s1);
    ciii(pb1, ps1, pc1);
    ciii(pb2, ps2, pc2);
    ci(n);
    
    sz = s1.size();

    FOR(i,0,sz) {
        if(s1[i] == 'B') b++;
        else if(s1[i] == 'C') c++;
        else s++;
    }

    ll tot, mid, lo = 0, hi = 1e14, ans = 0;

    while(lo <= hi) {
        mid = (hi+lo)/2;
        tot = max(0LL, (b*mid)-pb1)*pb2 + max(0LL, (s*mid)-ps1)*ps2 + max(0LL, (c*mid)-pc1)*pc2;
        if(tot <= n) ans = mid, lo = mid+1;
        else hi = mid-1;
    }

    outn(ans);

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
