#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &i : a)
    {
        cin >> i;
    }
    for (int &i: b)
    {
        cin >> i;
    }
    multiset<int> x(a.begin(),a.end());
    
    for(auto p:b){
        auto it = x.upper_bound(p);
        if(it==x.begin()) cout<<"-1"<<endl;
        else{
            it--;
            cout<<*it<<endl;
            x.erase(it);
        }
    }

    return 0;
}




