  /**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: greedy, bruteforce
 *  problem-link: https://codeforces.com/problemset/problem/1850/D
**/
  
  #include<bits/stdc++.h>
  using namespace std;

  #define N 1000000000000000002
  using ll = long long;
  // int N = 300005;

  void inOut();

  int solve() {
    int n, c, m, k;
    cin >> n  >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    int cnt = 1, ans =1;
    for (int i = 1; i < n; i++) {
      if((a[i] - a[i-1]) > k) cnt = 1;
      else cnt++;
      ans = max(cnt, ans);
    }

    cout << n-ans << "\n";
    
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