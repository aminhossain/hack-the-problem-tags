#include<bits/stdc++.h>
#include<string>

using namespace std;
typedef long long ll;
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
#define out1(x)           cout << x << "\n"
#define out2(x, y)        cout << x << " " << y << "\n"
#define out3(x, y, z)     cout << x << " " << y << " " << z << "\n"
#define outs1(x)          cout << x << " "
#define outs2(x, y)       cout << x << " " << y << " "
#define outs3(x, y, z)    cout << x << " " << y << " " << z << " "
#define FOR(i,x,y)        for(int i=x;i<y;i++)
#define RFOR(i,x,y)       for(int i=x;i>=y;i--)
#define CLR(arr,val)      memset(arr,val,sizeof arr);
#define TC(case,t)        for(case=1;case<=t;case++)
    
#define pi                acos(-1) // 3.1415926535897932
#define mx                100005
#define mod               1000000007
#define base              1000000002

void inOut();
vector<int> vp;
bool prime[mx];

// int arr[mx];
// bool isPrime(int n);
// int nextPrime(int N);

void seive();
int ansR[502], ansC[502];

int main() {

    inOut();
    int i, j, tc, k, l, n, m, x;
    char ch; string s, s1, s2, s3;
    int rtot, ans = INT_MAX;
    seive();
    cii(n, m);
   
    FOR(i,1,n+1){
        rtot = 0;
        FOR(j,1,m+1) {
            k = 0;
            ci(x);
            if(prime[x] == 0) k = 0;
            else k = (*upper_bound(vp.begin(),vp.end(), x)) - x;
            ansC[j] += k, rtot += k;
        }
        ansR[i] += rtot;
    }
    
    FOR(i,1,n+1) ans = min(ans, ansR[i]);
    FOR(i,1,m+1) ans = min(ans, ansC[i]);

    out1(ans);

    return 0;
}

void seive() {
    int i, j, sq = sqrt(mx);
 
    for(i=4; i<=mx; i+=2) prime[i]=1;
 
    for(i = 3; i <=sq; i+=2) {
        if(prime[i] == 0) {
            for(j=i*i; j<=mx; j+=2*i) prime[j] = 1;
        }
    }

    prime[1]= prime[0] = 1;
    vp.push_back(2); 

    for(i=3;i<=mx;i+=2) {
        if(prime[i]==0) vp.push_back(i);
    }
}

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}

int nextPrime(int N) {

    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    while (!found) {
        prime++;
        if (isPrime(prime)) 
            found = true;
    }
 
    return prime;
}
    
void inOut() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("input-cpp.txt", "r", stdin);
        freopen("output-cpp.txt", "w", stdout);
    #endif
}