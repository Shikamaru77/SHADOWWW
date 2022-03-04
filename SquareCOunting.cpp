#include <bits/stdc++.h>

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
    ll i, n, k, t, s, arr[10009];
    string s1;
    cin >> t;
    while (t--)
    {
        int c0unt = 0, temp = 0;
        cin >> n >> s;
        if (n * n > s)
        {
            cout << 0 << "\n";
        }
        else if (n * n <= s)
        {
            for (i = 0; i < n * n; i++)
            {
                temp = temp + n * n;
                if(temp<=s)
                 c0unt++;
                 if(temp>s)
                 break;
             
            }
               cout << c0unt << "\n";
        }
     
    }
}
