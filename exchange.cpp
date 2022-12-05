#include <iostream>
#include <vector>

using namespace std;


int solve(int n, int a, int b)
{
    if(a <= b)
    {
        return (n+a-1)/a;
    }
    else
    {
        return 1;
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, a, b;
  
  cin >> t;
  while (t--) {
    cin >> n >> a >> b;
    cout << solve(n, a, b) << "\n";
  }
}
