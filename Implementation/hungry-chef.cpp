/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: bruteforce, math
 *  problem-link: https://codeforces.com/contest/1681/problem/A
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
#define cii(x,y)          cin >> x >> y;
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
#define mx                300005
#define mod               1000000007
#define base              1000000002

void inOut();

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

// int arr1[mx];

int main() {

    inOut();
    ll i, j, tc, k, l, n;
    char ch; string s1, s2, s3;
    
    ci(tc);

    while(tc--) {
        ll x, y, r, xbuy = 0, ybuy = 0, xtot = 0, ytot = 0, rem = 0;
        cii(x, y);
        cii(n, r);
        xtot = x * n;

        if(xtot > r) out1(-1);
        else {
            ybuy = r/y, ytot = ybuy*y;

            if(ybuy >= n) out2(0, n);
            else {
                xtot = r%y;
                while((xbuy+ybuy) < n) {
                    if((xbuy+ybuy) == n) break;

                    rem = n-(xbuy+ybuy);
                    xtot = (rem*x) - xtot;
                    ytot -= xtot, ybuy = ytot/y;
                    xbuy += rem, xtot = 0;

                }
                out2(xbuy, ybuy);
            }
        }
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
