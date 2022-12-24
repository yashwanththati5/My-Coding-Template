#include<bits/stdc++.h>
using namespace std;       
#define nl cout<<"\n";
#define ll long long
#define mod 1000000007
#define tc int t;cin>>t;while(t--)
#define maxv(v) *max_element((v).begin(), (v).end());
#define minv(v) *min_element((v).begin(), (v).end());
#define print(x) _print(x);
ll amod(ll a , ll b , int m = 1000000007) {return (a % m + b % m) % m;}
ll mmod(ll a , ll b , int m = 1000000007) {return (a % m * b % m) % m;}
ll smod(ll a , ll b , int m = 1000000007){return (a % m - b % m + m) % m;}
ll power(ll a , ll b){ll ans = 1; while(b != 0){if(b & 1){ans = mmod(ans , a);}a = mmod(a , a);b = b >> 1;}return ans;}
ll dmod(ll a , ll b , int m = 1000000007) {return (mmod(a, power(b, m - 2)) + m) % m;}
template<class T> void _print(vector<T> v){for(auto i: v){cout<<i<<" ";} nl;}
template<class T , class V> void _print(map<T , V> m){for(auto p: m){cout<<p.first<<" "<<p.second;nl;}nl;}
template<class T , class V> void _print(unordered_map<T , V> m){for(auto p: m){cout<<p.first<<" "<<p.second;nl;}nl;}
template<class T> void _print(set<T> s){for(auto p: s){cout<<p<<" ";}nl;}
template<class T> void _print(unordered_set<T> s){for(auto p: s){cout<<p<<" ";}nl;}
template<class T , class V> void _print(pair<T , V> p){for(auto x: p){cout<<x.first<<" "<<x.second; nl;}nl;}
//------- Options -----//
bool ch = 1, comp = 0;
//---------------------//
void solve()
{
  
  if(ch) nl;
}

//---------------*******MAIN*******------------//
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  if(comp) {freopen("input.txt" , "r" , stdin); freopen("output.txt" , "w" , stdout);}
  if(!ch) solve();
  else {tc {solve();}}
      return 0;
}
