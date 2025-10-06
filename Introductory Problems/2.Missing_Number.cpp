#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n-1);
    for(int &i:a){
        cin>>i;
    }
    int ans=n;
    sort(a.begin(),a.end()); 
    // for(int &i:a){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<n;i++){
        // cout<<i<<" "<<a[i-1]<<" "<<i<<endl;
        if(i!=a[i-1]) {
            ans = i;
            break;
        }
    }
    cout<<ans;
    

    return 0;
}

