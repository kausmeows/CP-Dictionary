#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, string s)
{
    int count = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '8')
            count++;
    }
    cout << min(count, n / 11);
}
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    solve(n, s);
}