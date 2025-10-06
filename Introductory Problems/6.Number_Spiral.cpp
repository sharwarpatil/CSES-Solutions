#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll y,x;
    cin >> y>>x;
    ll ans =0;
    if(y>=x) {
        if(y%2==1) ans=(y-1)*(y-1)+x;
        else ans= y*y-x+1;
        
 
    }else {
        if(x%2==1) ans=x*x-y+1;
        else ans= (x-1)*(x-1)+y;

        
    }
        
    
    cout<<ans<<endl;

    }
    return 0;
}

