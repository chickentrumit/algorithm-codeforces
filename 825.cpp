#include <bits/stdc++.h>
  using namespace std;
  #define fi first
  #define se second
  #define endl '\n'
  #define pb push_back
  #define int long long   
  #define all(x) x.begin(),x.end()
  const int inf = 1e6 + 33; const int N = 1000111;
  typedef pair<int, int> pii; typedef vector<int> vi; typedef long long ll;
   int f[inf+1];
  int powmod(int n,int k){
   if(k==1) return n;
   int tmp=powmod(n,k/2);
   if(k&1) return ((tmp%inf)*(tmp%inf)%inf)*(n%inf)%inf;
   else return (tmp%inf)*(tmp%inf)%inf;   
  }
  int32_t main(int32_t argc, char *argv[]) { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    f[0] = 1;
    int cur = 1;
    for(int i=1;i<=inf;++i)
    { 
        (cur *= i) %= inf;
        f[i] = f[i-1] * cur % inf;
    }
   int t; cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        if (r >= inf) cout << 0;
        else
        {
            int x = f[r] * powmod(f[l-1], inf-2) % inf;
            cout << powmod(x, k);
        }
       cout<<endl;
    }
  }