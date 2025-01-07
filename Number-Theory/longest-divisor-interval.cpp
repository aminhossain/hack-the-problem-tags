  /**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: number theory, bruteforce, greedy
 *  problem-link: https://codeforces.com/problemset/problem/1855/B
**/

  #include<bits/stdc++.h>
  using namespace std;

  #define N 1000000000000000002
  using ll = long long;
  // int N = 300005;

  void inOut();

  int solve() {
    long long n, m, k;

    cin >> n;
    ll cnt = 0;
    for(ll i = 1; true; i++){
      if(n % i == 0) cnt++;
      else break;
    }
    cout << cnt << "\n";

    return 0;
  }
  
  int main() { 
    inOut();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
      solve();
    }

    return 0;
  }

  void inOut() {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      #ifndef ONLINE_JUDGE
          freopen("input-cpp.txt", "r", stdin);
          freopen("output-cpp.txt", "w", stdout);
      #endif
  }