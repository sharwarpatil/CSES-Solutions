#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n;
    cin >> n;
    vector<int> a;

    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    
        
        for(int i=1;i<n;i+=2){   
          
                a.push_back(i+1);
        
        }
        for(int i=0;i<n;i+=2){   // 0->1 2->3 4->5
          
                a.push_back(i+1);
        
        }
    
    for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    
    
    

    return 0;
}

