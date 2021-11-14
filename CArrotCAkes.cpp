#include <bits/stdc++.h>
//afraim77
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define dg(x) cout << #x << " = " << x << endl

int main()
{
  ll n, t, k, b, d, a, sum, c0unt;
  cin >> n >> t >> k >> d;
  sum = 0;
  c0unt = 0;
  // for(int i=0; i<n; i++){
  // cin>>a;
  if (k > n)
    cout << "NO" << endl;
  else
  {
    a = t + d;// 6+5=11
    t = ceil(t * (double)(n / k));//total time = 12mins
    if (a < t)
    {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }
  // else
  // cout<<"0"<<endl;

  //  cout<<c0unt<<endl;
}
