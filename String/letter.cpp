/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: ASCII Table
 *  problem-link: https://codeforces.com/contest/43/problem/B
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
#define mx                100000
#define mod               1000000007
#define base              10000007
    
void inOut();
 
int main() {
 
    inOut();
    int tc, i, j, k, l, n;
    char ch; string str1, str2;
    int arrA[26] = {0}, arrB[26] = {0};
    int arrC[26] = {0}, arrD[26] = {0};
    bool flag = true;
   
    std::getline(cin, str1);
    std::getline(cin, str2);
 
    int len1 = str1.size(), len2 = str2.size();
 
    FOR(i,0,len1) {
        if(str1[i] >= 65 && str1[i] <= 90) arrA[str1[i] -'A']++;
        else if(str1[i] >= 97 && str1[i] <= 122) arrB[str1[i] -'a']++;
    }
 
    FOR(i,0,len2) {
        if(str2[i] >= 65 && str2[i] <= 90) arrC[str2[i] -'A']++;
        else if(str2[i] >= 97 && str2[i] <= 122) arrD[str2[i] -'a']++;
    }
    
    FOR(i,0,26) {
        if(arrA[i] >= arrC[i] && arrB[i] >= arrD[i]);
        else flag = false;
        if(!flag) break;
    }
 
    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
 
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
