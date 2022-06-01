/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce + sort + observation
 *  problem-link: https://codeforces.com/contest/451/problem/B
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
#define mx                100005
#define mod               1000000007
#define base              10000007


void inOut();
int arr[mx];

int main() {

    inOut();
    
    int i, j, tc, k, l, n;
    string s;

    ci(n);
    FOR(i,0,n) ci(arr[i]);

    int x = 0, y = 0, no = 0;

    FOR(i,0,n-1) {
        if(arr[i] > arr[i+1]) {
            j = i, x = i, y = i+1;
            while(arr[j] > arr[y] && y < n) j++, y++;
            break;
        }
    }

    if(x >= 0 && y > 0) {
        sort(arr+x, arr+y);
        FOR(i,0,n-1) {
            if(arr[i] > arr[i+1]) {
                no = 1; break;
            }
        }
        if(no) outn("no");
        else outn("yes"), outt(x+1, y);
    } else {
        outn("yes"), outt(1,1);
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
