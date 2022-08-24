/**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: bruteforce, observation
 *  problem-link: https://www.codechef.com/problems-old/QUEENBL
**/

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
    
#define PI                acos(-1) // 3.1415926535897932
#define MX                100005
#define MOD               1000000007
#define BASE              1000000002
#define MAXN              300

void inOut();

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

int a[MX], b[MX];

int main() {

    inOut();
    int i, j, tc, k, l, n;
    char ch; string s1, s2, s3;

    ci(tc);
   
    while(tc--) {
        int mat[9][9] = {0};
        int x, y;
        cii(x, y);

        FOR(i,1,9) {
            FOR(j,1,9) {
                if(x == 1 && (y == 1 || y == 8)) {
                    if(i == x && j == y) { 
                        mat[i][j] = 1;
                        if(y == 1) mat[i+2][2] = 2;
                        else if(y == 8) mat[i+2][7] = 2;
                    }
                } else if(x == 8 && (y == 1 || y == 8)) {
                    if(i == x && j == y) {
                        mat[i][j] = 1;
                        if(y == 1) mat[6][2] = 2;
                        else if(y == 8) mat[6][7] = 2;
                    }
                } else if(x > 1 && x < 8 && (y == 1 || y == 8)) {
                    if(i == x && j == y) {
                        mat[i][j] = 1;
                        if(y == 1) mat[i-1][j+2] = 2, mat[i+1][j+2] = 2;
                        else if(y == 8) mat[i-1][6] = 2, mat[i+1][6] = 2; 
                    }
                } else if(y > 1 && y < 8 && (x == 1 || x == 8)) {
                    if(i == x && j == y) {
                        mat[i][j] = 1;
                        if(x == 1) mat[i+2][j-1] = 2, mat[i+2][j+1] = 2;
                        else if(x == 8) mat[6][j-1] = 2, mat[6][j+1] = 2; 
                    }
                } else if(y == 2 || y == 7) {
                    if(i == x && j == y) {
                        mat[i][j] = 1;
                        if(i+2 <= 8 && j+3 <= 8) mat[i+2][j-1] = 2, mat[i-1][j+3] = 2;
                        else if(i-2 >= 1 && j+3 <= 8) mat[i-2][j-1] = 2, mat[i+1][j+3] = 2;
                        else if(i+2 <= 8 && j-3 >= 1) mat[i+2][j+1] = 2, mat[i-1][j-3] = 2;
                        else mat[i-2][j+1] = 2, mat[i+1][j-3] = 2;
                    }
                } else if(x > 1 && x < 8 && y > 1 && y < 8) {
                    if(i == x && j == y) {
                        mat[i][j] = 1;
                        mat[i+1][j-2] = 2, mat[i-1][j+2] = 2;
                    }
                } else {
                    mat[i][j] = 0;
                }
            }
        }

        FOR(i,1,9) {
            FOR(j,1,9) 
                outs1(mat[i][j]);
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
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif
}
