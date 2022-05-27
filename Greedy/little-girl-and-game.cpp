/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]    
 *  Idea: Bruteforce, ASCII Table 
 *  problem-link: https://codeforces.com/problemset/problem/276/B
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
#define mx                100002
#define mod               1000000007
#define base              10000007
    
void inOut();

int arr[26];

int main() {
 
    inOut();
    int tc, i, j, k, l, n;
    string str; 
    char ch;
    
    cin >> str;
    int size = str.size(), cnt = 0;

    FOR(i,0,size) {
        arr[str[i] - 'a']++;
    }

    FOR(i,0,26) {
        if(arr[i] % 2 == 1) cnt++;
    }

    if(cnt <= 1) cout << "First" << "\n";
    else if(cnt %2 == 0) cout << "Second" << "\n";
    else cout << "First" << "\n";

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
