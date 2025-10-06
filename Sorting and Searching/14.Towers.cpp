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
        
        int n;
        cin >> n;   
        vector<int> a(n);   
        for(int &i:a) cin>>i;
        int ans =0;
        multiset<int> x;//
        for(auto i:a){
            auto it = x.upper_bound(i);
            if(it!=x.end()) x.erase(it);
            x.insert(i);
        }
        cout<<x.size();
        return 0;
    }

