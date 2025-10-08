    #include <iostream>
    #include <vector>
    #include <set>
    #include <algorithm>
    #include<unordered_map>
    using namespace std;
    #define ll long long 
    static const int mod = 1e9 + 7;
    int main()
    {
        ios::sync_with_stdio(false), cin.tie(0);
        
        int n,t;
        cin >> n>>t;   
        vector<int> a(t);  
        for(int &i:a){
            cin>>i;
        }
        
        set<int> lights{0,n};
        multiset<int> dist{n};
        for(auto val:a){
            auto it1 = lights.upper_bound(val);
            auto it2=it1;
            it2--;
            dist.erase(dist.find(*it1-*it2));
            dist.insert(val-*it2);
            dist.insert(*it1-val);
            lights.insert(val);
            cout<<*dist.rbegin()<<" ";
        }
        return 0;
    }

