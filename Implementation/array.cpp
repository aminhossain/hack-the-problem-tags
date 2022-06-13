/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce
 *  problem-link: https://codeforces.com/problemset/problem/300/A
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
#define outss(x, y)       cout << x << " " << y << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                200005
#define mod               1000000007
#define base              10000007

void inOut();

int main() {

    inOut();
    
    int i, j, tc, k, l, n, m, x, y;
    char ch; string s1, s2;
    vector<int> vi[4];
    int v0, v1, v2;

    ci(n);
    FOR(i,0,n) {
        ci(x);
        if(x < 0) vi[0].pb(x);
        else if(x > 0) vi[1].pb(x);
        else if(x == 0) vi[2].pb(x);
    }

    v0 = vi[0].size(), v1 = vi[1].size(), v2= vi[2].size();
    
    if(v0%2 == 0) {
        vi[2].pb(vi[0][v0-1]);
        vi[0].pop_back();
    }

    if(v1 == 0) {
        v0 = vi[0].size();
        vi[1].pb(vi[0][v0-1]), vi[1].pb(vi[0][v0-2]);
        vi[0].pop_back(), vi[0].pop_back();
    }

    FOR(i,0,3) {
        outs(vi[i].size());
        FOR(j,0,vi[i].size()) {
            outs(vi[i][j]);
        }
        cout << "\n";
    }
    
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