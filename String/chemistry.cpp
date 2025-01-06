  /**
 *  BIS-MILLAHIR RAHMANIR RAHIM
 *  author: Amin Hossain [tripplet]     
 *  Idea: string, ascii, bruteforce
 *  problem-link: https://codeforces.com/contest/1883/problem/B
**/

  #include<bits/stdc++.h>
  using namespace std;

  #define MOD 1000000007
  using ll = long long;
  // int N = 300005;

  void inOut();

  int solve() {
    int n, k;
    string s;

    cin >> n >> k >> s;
    int ch[26] = {0};

    for(int i = 0; i < n; i++) {
      ch[s[i] - 'a']++;
    }

    int ck = 0;
    for(int i = 0; i < 26; i++) {
      if(ch[i]%2 == 1 && k > 0) ch[i]--, k--;
      if(ch[i]%2 == 1) ck++;
    }
    
    if(ck >= 2) cout << "NO\n";
    else cout << "YES\n";
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