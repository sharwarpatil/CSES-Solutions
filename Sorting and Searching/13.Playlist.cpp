    #include <iostream>
    #include <vector>
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
        int ans=0;
        int mx=0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1] && mx<a[i]){
                mx=max(mx,a[i])
            }
        }
        
        return 0;
    }

