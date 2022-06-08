/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy, bruteforce, obseration
 *  problem-link: https://codeforces.com/contest/1690/problem/B
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
#define outts(x, y)       cout << x << " " << y << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                50005
#define mod               1000000007
#define base              10000007
 
void inOut();
 
int arrA[mx], arrB[mx];
 
int main() {
 
    inOut();
    
    int i, j, tc, k, l, n, x, y;
    char ch; string s;
 
    ci(tc);
 
    while(tc--) {
        ci(n);
        int diff = 0; 
        bool ok = true;
        
 
        FOR(i,0,n) {
            ci(arrA[i]);
        }

        FOR(i,0,n) {
            ci(arrB[i]);
            diff = max(diff, (arrA[i]-arrB[i]));
        }
       
        FOR(i,0,n) {
            int df = arrA[i] - arrB[i];
 
            if(df == diff || df <= diff && arrB[i] == 0);
            else ok = false;
            
            if(!ok) break;
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
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}