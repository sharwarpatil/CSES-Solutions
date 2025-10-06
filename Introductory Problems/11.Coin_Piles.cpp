#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;cin>>t;
    while(t--){

 
    long long a, b;
    cin >> a >> b;

    if(a<=2*b && b<=2*a && (a+b)%3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
    

    return 0;
}
