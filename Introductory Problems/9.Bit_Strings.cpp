#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
static const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    
    int n;
    cin >> n;    
    int ans =1;
    for(int i=1;i<=n;i++) {
      ans= 2* ans;
      if(ans>mod) ans%=mod;
    }
        
    
    cout<<ans<<endl;

    long long res = 1;
    for(int a = 2, b = n; b; b /= 2, a = 1ll * a * a % mod){
        if(b & 1) res = 1ll * res * a % mod;
    }
    return 0;
}

