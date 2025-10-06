#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n;
    cin >> n;
    vector<long long> a(n);
    for(long long &i:a){
        cin>>i;
    }
    long long ans=0;
    long long currmax=0;
    for(int i=1;i<a.size();i++){
        if(a[i-1]>a[i] || currmax>a[i]){
            ans+=max(a[i-1]-a[i],currmax-a[i]);
            currmax=max(a[i-1],currmax);
        }
    }
    
    cout<<ans;
    

    return 0;
}

