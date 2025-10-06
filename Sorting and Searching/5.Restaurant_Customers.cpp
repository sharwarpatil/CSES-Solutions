#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> a(2*n);
    for (int i = 0; i < n; i++)
    {
        int arrive,leave;
        cin>>arrive>>leave;
        a.push_back({arrive,1});
        a.push_back({leave,-1});
    }
    
    sort(a.begin(),a.end());
    int ans =0,count=0;
    for(auto  &i: a){
        count += i.second;
        ans= max(ans,count);
    }
    cout<<ans;
    return 0;
}
