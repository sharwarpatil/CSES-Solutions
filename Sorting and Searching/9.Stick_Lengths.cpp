    #include <iostream>
    #include <vector>
    #include <algorithm>
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
        
        sort(a.begin(),a.end());
     
        int val = a[n/2];
        ll ans =0;
        for(int &i:a){
            if(i<val) ans+=val-i;
            else if(i>val) ans+=i-val;
        }
        cout<<ans;
        return 0;
    }

