/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: bruteforce + math
 *  problem-link: https://codeforces.com/problemset/problem/353/A
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
#define sl(n)             scanf("%lld",&n)
#define sll(x,y)          scanf("%lld %lld",&x,&y)
#define slll(x,y,z)       scanf("%lld %lld %lld",&x,&y,&z)
#define outn(x)           cout << x << "\n"
#define outt(x, y)        cout << x << " " << y << "\n"
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                1000005
#define mod               1000000007
#define base              10000007
    
void inOut();
 
int main() {
 
    inOut();
    
    int i, j, tc, k, l, n, x, y;
    string s = "";
    
    cin >> n;
    int sum1 = 0, sum2 = 0, diff = 0;
    
    FOR(i,0,n) {
        cin >> x >> y;
        sum1 += x, sum2 += y;
        if(sum1%2 != sum2%2) diff++;
    }
 
    if(sum1 % 2 == 0 && sum2 % 2 == 0) {
        outn(0);
    } else if(sum1 % 2 == 1 && sum2 % 2 == 1) {
        if(diff != 0) outn(1);
        else outn(-1);
    } else {
        outn(-1);
    }
    
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
