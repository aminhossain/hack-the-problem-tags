/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]  
 *  Idea: math, pattern observation 
 *  problem-link: https://www.codechef.com/JUNE221D/problems/RED0
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
#define ci(n)             cin >> n
#define cii(x,y)          cin >> x >> y;
#define ciii(x,y,z)       cin >> x >> y >> z
#define sl(n)             scanf("%lld",&n)
#define sll(x,y)          scanf("%lld %lld",&x,&y)
#define slll(x,y,z)       scanf("%lld %lld %lld",&x,&y,&z)
#define outn(x)           cout << x << "\n"
#define outt(x, y)        cout << x << " " << y << "\n"
#define outtt(x, y, z)    cout << x << " " << y << " " << z << "\n"
#define outs(x)           cout << x << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                1000000000
#define mod               1000000007
#define base              10000007

void inOut();

int main() {

    inOut();
    int i, j, tc, k, l, n;
    char ch; string s, s1;
    
    ci(tc);

    while(tc--) {
        ll x, y, maxi, mini, ans = 0, down = 0, diff = 0, move = 0;
        cii(x,y);

        maxi = max(x,y);
        mini = min(x,y);

        if((mini == 0 && maxi > 0) || (mini > 0 && maxi == 0)) outn(-1);
        else if(mini == 0 && maxi == 0) outn(0);
        else {
            while(mini <= maxi) {
                if((mini*2) > maxi) break;
                mini *= 2;
                ans++;
            }
            if(mini == maxi) outn(ans+maxi);
            else {
                diff = maxi - mini;
                down = (mini - diff) + 1;
                move = diff * 2;
                outn(ans + move + down);
            }
        }
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
