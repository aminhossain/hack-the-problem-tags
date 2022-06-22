/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce, knight move algo
 *  problem-link: https://www.codechef.com/START44D/problems/KNIGHTATTACK
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

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

void inOut();


int main() {

    inOut();
    int i, j, tc, k, l, n;
    char ch; string s1, s2;
    
    ci(tc);

    while(tc--) {
        int x, y, x1, y1, x2, y2;
        bool ok = false;
        vector<vector<int> > v1, v2;

        cii(x1, y1);
        cii(x2, y2);

        FOR(i,0,8) {
            x = x1 + dx[i];
            y = y1 + dy[i];
            if(x >= 1 && x <= 8 && y >= 1 && y <= 8) {
                v1.pb({x,y});
            }

            x = x2 + dx[i];
            y = y2 + dy[i];
            if(x >= 1 && x <= 8 && y >= 1 && y <= 8) {
                v2.pb({x,y});
            }
        }

        for(auto& k1 : v1) {
            for(auto& k2 : v2) {
                if(k1 == k2) {
                    ok = true;
                }
            }
        }

        if(ok) outn("YES");
        else outn("NO");
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