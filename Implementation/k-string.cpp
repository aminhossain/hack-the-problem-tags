/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: Bruteforce, ASCII Table
 *  problem-link: https://codeforces.com/contest/230/problem/A  
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
#define mx                102
#define mod               1000000007
#define base              10000007
    
void inOut();

int main() {

    inOut();
    ll i, j, tc, k, l, n, m;
    string s1, ans = "";
    int arrN[26] = {0};
    
    cin >> k >> s1;
    int len = s1.size(), flg = 0, anslen = 0;


    FOR(i,0,len) {
        arrN[s1[i] - 'a']++;
    }

    FOR(j,0,k) {
        FOR(i,0,26) {
            if(arrN[i] >= k) {
                ans += 'a' + i;
                if(arrN[i] > k) {
                    int ext = (arrN[i] - k) / k;
                    while(ext--) ans += 'a' + i;
                }
            } else if(arrN[i] != 0) {
                flg = 1;
            }
        }
        if(flg == 1) break;
    }
    

    if(flg == 1 || ans.size() != s1.size()) cout << -1 << "\n";
    else cout << ans << "\n";

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
