/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  problem-link: https://codeforces.com/contest/1679/problem/B
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
#define out(x)            cout << x << "\n"
#define outt(x,y)         cout << x << " " << y <<"\n"
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                200002
#define mod               1000000007
#define base              10000007
 
int dx[8] = {1,-1,0,0,-1,-1,1,1};
int dy[8] = {0,0,-1,1,-1,1,-1,1};
    
void inOut();
 
int arr[mx];
 
int main() {
 
    inOut();
    int tc, i, j, k, l, n, q;
    char ch; string str, str2;
    
 
    cin >> n >> q;
 
    vector<int> vi;
    map<int, int> mpi;
 
    ll sum = 0;
    
    FOR(i,0,n) {
        cin >> arr[i], sum += arr[i];
    }
 
    int xt = 1, size = 1;
    FOR(i,0,q) {
        int t, n1, n2, last;
        cin >> t;
        if(t == 1) {
            cin >> n1 >> n2;
            
            if(xt == 2 && mpi[n1-1] == 0) arr[n1-1] = vi[size-1];
            if(n2 > arr[n1-1]) sum += (n2 - arr[n1-1]), arr[n1-1] = n2;
            else sum -= (arr[n1-1] - n2), arr[n1-1] = n2;
            mpi[n1-1]++;
 
        } else {
            cin >> n2;
            sum = (ll) n * n2;
            vi.pb(n2), xt = t;
            size = vi.size();
            mpi.clear();
        }
 
        out(sum);
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
