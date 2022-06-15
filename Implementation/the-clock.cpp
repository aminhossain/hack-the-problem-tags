/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce, string
 *  problem-link: https://codeforces.com/contest/1692/problem/D
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

int checkPalindrom(string s, int tt) {
    int hh = tt/60, mm = tt%60;

    int x = hh/10, y = hh%10;
    s[0] = (x+48), s[1] = (y+48);

    x = mm/10, y = mm%10;
    s[3] = (x + 48), s[4] = (y + 48);

    string rev = s;
    reverse(s.begin(), s.end());

    return rev == s;
}

int main() {

    inOut();
    
    int i, j, tc, k, l, n, m, x, y;
    char ch; string s1, s2, s3, s4;

    ci(tc);

    while(tc--) {
        int ans = 0, hm, tt;
        bool ok = false;

        cii(s1, n);

        hm = (stoi(s1.substr(0, 2)) * 60) + stoi(s1.substr(3, 2));
        tt = hm;

        while(1) {

            if(tt >= 1440) tt -= 1440;
            if(tt == hm && ok) break;
            
            ans += checkPalindrom(s1, tt);
            tt += n;
            ok = true;
        }

        outn(ans);
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