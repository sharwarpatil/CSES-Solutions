#include <iostream>
//  #include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // unordered_set<int> b;
    //  for(int i=0;i<n;i++){
    //     b.insert(a[i]);
    // }
// optimal - 
sort(a.begin(),a.end());
a.erase(unique(a.begin(), a.end()), a.end()); //use unique
    cout<<a.size();
    return 0;
}