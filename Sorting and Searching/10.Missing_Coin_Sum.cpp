#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i:a){
        cin>>i;
    } 
    ll ans =1;
    sort(a.begin(),a.end()); 
    for(int &i:a){
       if(i>ans){
        break;
       }    
       ans+=i;
    }
    
    cout<<ans;

    return 0;
}

