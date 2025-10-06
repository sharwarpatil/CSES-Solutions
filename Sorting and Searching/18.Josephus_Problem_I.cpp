// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(false), cin.tie(0);

//     int n;
//     cin >> n;
//     set<int> a;
//     for(int i=0;i<n;i++){
//         a.insert(i+1);
//     }
//     vector<int> b;
//     int j=0;
//     while(!a.empty()){
//         int k= (j+1)%a.size();
//         auto it = a.begin();
//         advance(it, k);
//         b.push_back(*it);
//         a.erase(it);
//         j++;
//         if(j+1>a.size()) j=0;

//     }
    
    
//     for(int &i:b){
//         cout<<i<<" ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> a(n);
    iota(a.begin(),a.end(),1);

    for(int i:a) cout<<i<<" ";
    
    return 0;
}