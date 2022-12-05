#include<iostream>
#include <vector>
#define N 200
#define big 1000000000007
#define ll long long int

using namespace std;

ll solve(ll n, ll tab[N][N], ll max)
{
    ll min_diag = big;
    ll min_index;

    //get minimum diagonal
    for(ll i = 0; i < n; i++)
    {
        if(min_diag > tab[n - 1 -i][i])
        {
            min_diag = tab[n - 1 -i][i];
            //min_index = i;
        }
    }

    return max - min_diag;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  ll tab[N][N];
  ll m = 0;

  cin >> n;
  for(ll i = 0; i < n; i ++)
  {
    for(ll j = 0; j < n; j++)
    {
        cin >> tab[i][j];
        m += tab[i][j];
    } 
  }

  cout << solve(n, tab, m) << "\n";
}