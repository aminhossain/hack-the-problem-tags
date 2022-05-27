/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: Bruteforce
 *  problem-link: https://codeforces.com/contest/287/problem/A
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
#define outn(x)           cout << x << "\n"
#define outt(x, y)        cout << x << " " << y << "\n"
#define outs(x)           cout << x << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                200005
#define mod               1000000007
#define base              10000007
    
void inOut();
// int arr[mx];

int main() {

    inOut();
    
    int i, j, tc, k, l, n;
    string s;
    char iq[4][4];
    bool flag = false;

    FOR(i,0,4){
        FOR(j,0,4){
            cin >> iq[i][j];
        }
    }

    FOR(i,0,3) {
        FOR(j,0,3) {
            int black = ((iq[i][j] == '#')+(iq[i][j+1] == '#')+(iq[i+1][j] == '#')+(iq[i+1][j+1] == '#'));
            int white = ((iq[i][j] == '.')+(iq[i][j+1] == '.')+(iq[i+1][j] == '.')+(iq[i+1][j+1] == '.'));
            if(black >= 3 || white >= 3) flag = true;
        }
        if(flag) break;
    }

    if(flag) outn("YES");
    else outn("NO");

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