#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
    #define ll long long 

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n, t;
    cin >> n >> t;
    vector<pair<int,int>> a(n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i].first;
        a[i].second=i+1;
    }
    
    sort(a.begin(),a.end()); 

    int ans= 0;
    int l=0, r= n-1;
    while(l<r){
        ans =a[l].first+a[r].first;
        if(ans==t){
            cout<<a[l].second<<" "<<a[r].second<<endl;
            l++;
            r--;
        }else if(ans>t){
            r--;
        }else{
            l++;
        }
    }
    return 0;
}




