```C++
/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]    
 *  Idea: sort + binary serach
 *  problem-link: https://codeforces.com/contest/1676/problem/E
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
#define mx                10002
#define mod               1000000007
#define base              10000007
    
void inOut();
 
int findCount(vector<int>& vsum, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
 
    while(low <= high) {
        int mid = (low + high)/ 2;

        if(vsum[mid] >= target) ans = mid+1;
        if(vsum[mid] >= target) high = mid - 1;
        else low = mid + 1; 
    }
 
    return ans;
}
 
int main() {
 
    inOut();
    int tc, i, j, k, l;
    char ch; string str;
 
    cin >> tc;
 
    while(tc--) {
        int n, m, x, y, sum = 0;
        vector<int> vi, vsum;
 
        cin >> n >> m;
 
        FOR(i,0,n) {
            cin >> x, vi.push_back(x);
        }
 
        sort(vi.begin(), vi.end(), greater<int>());
 
        FOR(i,0,n) {
            sum += vi[i], vsum.push_back(sum);
        }
 
        FOR(i,0,m) {
            cin >> y;
            int ans = findCount(vsum, n, y);
            cout << ans << "\n";
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

```