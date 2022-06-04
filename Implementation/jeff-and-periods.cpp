/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: STL, Hasing, keep-track
 *  problem-link: https://codeforces.com/contest/352/problem/B
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
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                100005
#define mod               1000000007
#define base              10000007


void inOut();

int main() {

    inOut();
    
    int i, j, tc, k, l, n, x;
    char ch; string s;

    map<int, vector<int> >mp;
    map<int, int> ans;
    int cnt = 0;

    ci(n);

    FOR(i,0,n) ci(x), mp[x].pb(i+1);

    for(auto it : mp) {
        int size = it.second.size();
        if(size > 1) {
            int diff = abs(it.second[0] - it.second[1]);
            int check = 1;
            FOR(i,1,size-1) {
                if(abs(it.second[i] - it.second[i+1]) != diff) check = 0;
            }
            if(check) {
                cnt++;
                ans[it.first] = diff;
            }
        } else {
            cnt++;
            ans[it.first] = 0;
        }
    }

    if(cnt > 0) {
        outn(ans.size());
        for(auto it : ans) {
            outt(it.first, it.second);
        }
    } else {
        outn(0);
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