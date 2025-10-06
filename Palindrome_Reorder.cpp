#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    string s;
    cin >> s;
    unordered_map<char, int> a;
    for (char x : s)
    {
        a[x]++;
    }
    int n=s.size();
    int odds = 0;
    for (auto &it : a)
    {
        if (it.second % 2 != 0)
            odds++;
    }
    if (s.size() % 2 == 0 && odds > 0)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (s.size() % 2 != 0 && odds > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    int l=0,r=n-1;
    while(l<=r){
        
    }
    return 0;
}
