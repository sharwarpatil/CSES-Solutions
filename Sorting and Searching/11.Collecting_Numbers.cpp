#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    int ans=1;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(a[i].second<a[i-1].second) ans++;
      
    }
  
    cout<<ans;
    return 0;
}
