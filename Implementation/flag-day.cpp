/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: keep-track, observation
 *  problem-link: https://codeforces.com/problemset/problem/357/B
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
#define mx                100005
#define mod               1000000007
#define base              10000007

void inOut();

// int arr[mx];

int main() {

    inOut();
    
    int i, j, tc, k, l, n, m, x, y, z, sz;
    char ch; string s1, s2, s3;
    int track[mx] = {0}, inp[3], last;

    cii(n, m);
    last = 0;
    FOR(i,0,m) {
        bool ok = false;
        FOR(j,0,3) {
            ci(inp[j]);
            if(track[inp[j]] && j == 1) swap(inp[j-1], inp[j]), ok = true;
            else if(track[inp[j]] && j == 2) {
                if(ok) swap(inp[j-1], inp[j]);
                else swap(inp[j-2], inp[j]);
            }
        }

        FOR(j,0,3) {
            if(last == 3) last = 0;
            if(!track[inp[j]]) track[inp[j]] = ++last;
            else last = track[inp[j]];
        }
    }

    FOR(i,1,n+1) outs(track[i]);
    cout << "\n";

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
