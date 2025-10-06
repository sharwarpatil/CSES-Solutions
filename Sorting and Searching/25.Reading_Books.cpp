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
         ll ans =0; 
        for(int &i:a) {
            cin>>i;
            ans+=i;
        }
        ans+=a[n-1];
        cout<<ans;
        return 0;
    }

