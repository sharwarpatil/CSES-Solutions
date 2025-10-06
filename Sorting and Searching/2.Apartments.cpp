#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    int j = 0, i = 0;
    while (i < n && j < m)
    {
        int mx = a[i] + k;
        int mn = a[i] - k;
        if (b[j] < mn)
        {
            j++;
            continue;
        }
        if (b[j] > mx)
        {
            i++;
            continue; // breaks and continues the next
        }
        ans++;
        i++;
        j++;
    }
    cout << ans;
    

    return 0;
}
