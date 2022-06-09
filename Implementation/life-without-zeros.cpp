/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce
 *  problem-link: https://codeforces.com/problemset/problem/75/A
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
#define mx                200005
#define mod               1000000007
#define base              10000007

void inOut();
// int arr[mx];

void decimalTobase(int num1, int num2) {

}

int main() {

    inOut();
    
    ll i, j, tc, k, l, n, x, y;
    char ch; string s1, s2;
    bool ok = false, ze = false;

    cii(x, y);
    ll sum = x + y, newX = 0, newY = 0, newSum = 0, xdigi, ydigi, sdigi;

    while(x || y || sum) {

        xdigi = x % 10, ydigi = y % 10, sdigi = sum % 10;

        if(xdigi != 0) newX = newX*10 + xdigi;
        if(ydigi != 0) newY = newY*10 + ydigi;
        if(sdigi != 0) newSum = newSum*10 + sdigi;

        x /= 10, y /= 10, sum /= 10;
    }

    sum = newSum, x = newX, y = newY, newX = 0, newY = 0, newSum = 0;

    while(x || y || sum) {

        xdigi = x % 10, ydigi = y % 10, sdigi = sum % 10;

        if(xdigi != 0) newX = newX*10 + xdigi;
        if(ydigi != 0) newY = newY*10 + ydigi;
        if(sdigi != 0) newSum = newSum*10 + sdigi;

        x /= 10, y /= 10, sum /= 10;
    }

    if((newX+newY) == newSum) outn("YES");
    else outn("NO");
    
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