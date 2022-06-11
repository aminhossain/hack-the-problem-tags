/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: observation
 *  problem-link: https://www.codechef.com/JUNE221D/problems/DIVBYI
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
    string s;

    ci(tc);

    while(tc--) {
        int x, y, a = 1, b = 0;
        ci(x);

        if(x == 2) outs(1), outn(2);
        else if(x == 3) outs(2), outs(1), outn(3);
        else {
            y = x/2, j = 0, k = x;
            while(x) {
                if(a && k%2 == 1) outs(y+j+1), a = 0, b = 1;
                else if(b && k%2 == 1) outs(y-j), j++, a = 1, b = 0;
                else if(a && k%2 == 0) outs(y-j), j++, a = 0, b = 1;
                else if(b && k%2 == 0) outs(y+j), a = 1, b = 0;
                x--;
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
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif
}