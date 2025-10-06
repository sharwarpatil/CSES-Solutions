#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <climits>   
#define ll long long 
using namespace std;


int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<ll> a(n);
    for(ll &i:a){
        cin>>i;
    }
    ll maxsum=LONG_MIN;
    // for(int i=0;i<n;i++){
    //     int sum =0;
    //     for(int j=i;j<n;j++){
    //         sum+=a[j];
    //         maxsum=max(maxsum,sum);
    //     }
        
    // }
    ll sum=0;
      for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<0) sum=0; 
        maxsum=max(maxsum,sum);  
    }
    if(maxsum==0){
       sort(a.begin(),a.end());
       cout<<a[n-1];
        return 0;
    }
    cout<<maxsum;
    return 0;
}