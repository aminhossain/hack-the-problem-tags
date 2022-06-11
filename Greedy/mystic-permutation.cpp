/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy, bruteforce, obseration
 *  problem-link: https://codeforces.com/contest/1690/problem/B
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
#define cii(x,y)          cin >> x >> y
#define ciii(x,y,z)       cin >> x >> y >> z
#define sl(n)             scanf("%lld",&n)
#define sll(x,y)          scanf("%lld %lld",&x,&y)
#define slll(x,y,z)       scanf("%lld %lld %lld",&x,&y,&z)
#define outn(x)           cout << x << "\n"
#define outt(x, y)        cout << x << " " << y << "\n"
#define outtt(x, y, z)    cout << x << " " << y << " " << z << "\n"
#define outs(x)           cout << x << " "
#define outts(x, y)       cout << x << " " << y << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                100005
#define mod               1000000007
#define base              10000007

void inOut();
int arr[1002];

int main() {

    inOut();
    
    int i, j, tc, k, l, n, x, y;
    char ch; string s1, s2;

    ci(tc);

    while(tc--) {
        vector<int> vi;
        ci(n);

        FOR(i,1,n+1) {
            ci(arr[i]);
        }

        if(n == 1) {
            outn(-1);
        } else {
            int ok = 0;
            FOR(i,1,n+1) {
                if(arr[i] == i) {
                    if(i == n) {
                        vi.pb(i);
                        swap(vi[vi.size()-1], vi[vi.size()-2]);
                    } else {
                        vi.pb(i+1); ok = i;
                        arr[i+1] = arr[i];
                    }
                } else if(ok) {
                    vi.pb(ok), ok = 0; 
                } else {
                    vi.pb(i);
                }
            }

            int sz = vi.size();
            FOR(i,0,sz) {
                outs(vi[i]);
            }
            cout << "\n";
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