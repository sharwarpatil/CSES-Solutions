#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    
    int n;
    cin >> n;    
    int ans =0;
    while(n/5>0){
        ans+=n/5;
        n/=5;
    }
    cout<<ans<<endl;
    return 0;
}

