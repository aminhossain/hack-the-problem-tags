/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce
 *  problem-link: https://codeforces.com/problemset/problem/433/A
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
#define mx                100000
#define mod               1000000007
#define base              10000007
    
void inOut();
 
int main() {
 
    inOut();
    int tc, i, j, k, l, n, x;
    char ch; string str1, str2;
    int arr[102], cnt1 = 0, cnt2 = 0;
 
    si(n);
 
    FOR(i,0,n) {
        si(x);
        if(x == 100) cnt1++;
        else cnt2++;
    }
    
    if(cnt1 % 2 == 0 && cnt1 != 0) cout << "YES" << "\n";
    else if(cnt2 % 2 == 0 && cnt2 == n) cout << "YES" << "\n";
    else cout << "NO" << "\n";
 
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
