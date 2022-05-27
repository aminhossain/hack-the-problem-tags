/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: Bruteforce
 *  problem-link: https://codeforces.com/contest/218/problem/B
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
#define mx                1002
#define mod               1000000007
#define base              10000007
    
void inOut();

int main() {
 
    inOut();
    int i, j, tc, k, l, n, m;
    string s1, ans = "YES";
    int arrN[mx], arrM[mx];
    
    cin >> n >> m;

    FOR(i,0,m) {
        cin >> arrM[i], arrN[i] = arrM[i];
    }

    sort(arrN, arrN+m);
    sort(arrM, arrM+m);

    int psgMaxi = n, maxi = 0; i = m-1;

    while(psgMaxi > 0) {
        i = m-1;
        if(arrM[i] > 0) maxi += arrM[i], arrM[i]--, --psgMaxi;
        sort(arrM, arrM+m);
    }

    int psgMini = n, mini = 0; i = 0;

    while(psgMini > 0) {
        if(i >= m) i = 0;
        if(arrN[i] <= 0) i++;
        mini += arrN[i];
        arrN[i]--, psgMini--;
    }

    cout << maxi << " " << mini << "\n";

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
