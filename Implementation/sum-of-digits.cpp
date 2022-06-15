/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce
 *  problem-link: https://codeforces.com/problemset/problem/102/B
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
ll arr[102];

int main() {

    inOut();
    
    int i, j, tc, k, l, n, m, sum1, sum2;
    char ch = '1'; string s1, s2;
    int ans = 0;

    ci(s1);
    n = s1.size();

    while(n > 1) {
        sum1 = 0, sum2 = 0;
        s2 = s1, s1 = "";
        
        FOR(i,0,n) {
            sum1 += s2[i] - 48;
            if(sum1 >= 10) sum2++, sum1-=10;
        }
        
        while(sum2) {
            if(sum2 == 0) break;

            int digi = sum2 % 10;
            if(digi < 10) s1 += (digi + 48);
            else s1 += (digi + 55);

            sum2 /= 10;
        }

        reverse(s1.begin(), s1.end());
        s1 += (sum1 + 48);
        n = s1.size();
        ans++;
    }

    outn(ans);

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