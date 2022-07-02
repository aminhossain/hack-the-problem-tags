/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: number-theory, math, bruteforce
 *  problem-link: https://codeforces.com/contest/460/problem/B
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

// int arr[mx];

int main() {

    inOut();
    
    ll i, j, tc, k, l, n, m, x, y, z;
    char ch; string s1, s2, s3;
    vector<int> ans;

    ciii(x,y,z);

    FOR(i,1,82) {
        ll mp = 1;
        FOR(j,0,x) mp = mp*i;
        ll num = (y*mp)+z, res = num, sum = 0;

        if(num > 0 && num < mx) {
            while(num) {
                if(num==0) break;
                sum += (num % 10);
                num /= 10;
            }
            if(sum == i) {
                ans.pb(res);
            }
        }
    }

    outn(ans.size());
    sort(ans.begin(), ans.end());

    FOR(i,0,ans.size()) {
        outs(ans[i]);
    }
    cout << "\n";

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