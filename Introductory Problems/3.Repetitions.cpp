#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string a;

    cin >> a;

    int x = 1, ans = 1;
    
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] == a[i])
        {
            x++;
        }
        else
        {
            x = 1;
        }
        ans = max(ans, x);
    }
   
    cout << ans;
    return 0;
}
