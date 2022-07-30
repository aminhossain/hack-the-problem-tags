/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce, observation
 *  problem-link: https://codeforces.com/problemset/problem/285/B
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
#define MX                100005
#define MOD               1000000007
#define BASE              1000000002
#define MAXN              300

void inOut();

int arr[MX];

int main() {

    inOut();
    int i, j, tc, k, l, r, n, m, x, y;
    char ch; string s, s1, s2, s3;
    bool ok = false;
    int ans = 0;

    ciii(n, l, r);

    if(l == r) ok = true;

    FOR(i,0,n) ci(arr[i]);
    m = l;

    if(!ok) {
        while(1) {
            ans++;
            if(arr[m-1] == r) {
                ok = true; break;
            } else if(arr[m-1] == l) {
                ok = false; break;
            } else {
                m = arr[m-1];
            }
        }
    }

    if(!ok) out1(-1);
    else out1(ans);

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