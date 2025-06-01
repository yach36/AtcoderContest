#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s;
  cin >> n >> s;

  vector<int> t(n + 1);
  t[0] = 0;
  for (int i = 1; i <= n; i++) cin >> t[i];

  float limit = s + 0.5;
  for (int i = 1; i <= n; i++) {
    if (t[i] - t[i - 1] >= limit) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
