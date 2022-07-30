/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: bruteforce, math, probability
 *  problem-link: https://codeforces.com/problemset/problem/353/A
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
#define cii(x,y)          cin >> x >> y
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
    
#define PI                acos(-1) // 3.1415926535897932
#define MX                100005
#define MOD               1000000007
#define BASE              1000000002
#define MAXN              300

void inOut();

int arr[MX];

int main() {

    inOut();
    int i, j, tc, k, l, r, n, m, x, y;
    char ch; string s, s1, s2, s3;

    cii(s1, s2);
    x = s1.size(), y = s2.size();

    int pos1 = 0;
    FOR(i,0,x) 
        pos1 += (s1[i] == '+') ? 1 : -1;

    int pos2 = 0, move = 0;

    FOR(i,0,y) {
        if(s2[i] == '?') move++;
        else pos2 += (s2[i] == '+') ? 1 : -1;
    }

    int distance = pos1 - pos2;
    double ans = 0;

    if((distance+move)%2 != 0 || move < abs(distance)) ans = 0;
    else {
        m = (move + abs(distance))/2;
        int d = 1;
        
        FOR(i,0,m) d *= move-i;
        FOR(i,2,m+1) d /= i;
        ans = (double)d/(1<<move);
    }

    printf("%.12f\n", ans);

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
