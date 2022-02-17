#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    FAST;
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int first = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] > num[i + 1])
        {
            first = i;
            break;
        }
    }

    int last = first;
    for (int i = n - 1; i >= first; i--)
    {
        if (num[i] < num[i - 1])
        {
            last = i;
            break;
        }
    }

    reverse(num.begin() + first, num.begin() + last + 1);

    if (is_sorted(num.begin(), num.end()))
    {
        cout << "yes" << endl;
        cout << first + 1 << " " << last + 1 << endl;
    }
    else
        cout << "no" << endl;
    return 0;
}