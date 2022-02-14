#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

void solve(int n, ll arr[])
{
    ll ans = 1, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 2 * arr[i - 1])
        {
            cout << arr[i-1] << " ";
            count++;
            ans = max(ans, count);
        }
        else
            count = 1;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    solve(n, arr);
}