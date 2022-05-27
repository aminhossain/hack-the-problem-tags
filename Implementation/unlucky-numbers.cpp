/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: bruteforce + sorting
 *  problem-link: https://codeforces.com/problemset/problem/160/B
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
    int i, j, tc, k, l, n, m, a, b;
    string s, s1 = "", s2 = "";
    
    cin >> n >> s;
    int len = n*2;

    FOR(i,0,len) {
      if(i < n) s1 += s[i];
      else s2 += s[i];
    }

    bool unlucky = false;
    int cnt = 0;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    FOR(i,0,n) {
      if(s1[i] < s2[i]) cnt++;
    }

    if(cnt == n) {
      outn("YES");
      return 0;
    }
    
    sort(s1.begin(), s1.end());
    reverse(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    reverse(s2.begin(), s2.end());
    
    cnt = 0;
    FOR(i,0,n) {
      if(s1[i] > s2[i]) cnt++;
    }

    if(cnt == n) outn("YES");
    else outn("NO");
    
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
