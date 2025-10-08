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
        vector<int> a(n);  
        ll sum =0;
        int l=0,r=0; 
        for(int &i:a) {
            cin>>i;
        }
        int ans =0;
        while(r<n){
            sum+=a[r];
            while(sum>t){
                sum-=a[l];
                l++;
            }
            if(sum==t) ans++;
                
            r++;
        }
        cout<<ans;
        return 0;
    }

