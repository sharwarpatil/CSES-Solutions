#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (auto &[end,start]: a)
    {
        cin>>start>>end;

    }
    
    sort(a.begin(),a.end());
    int ans=0,prev=-1;
    for(auto &[end,start]: a){
        if(start>=prev){
            ans++;
            prev=end;
        }
    }
    cout<<ans;
    return 0;
}
