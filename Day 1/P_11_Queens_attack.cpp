#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int q, int r, int c, vector <int> &row, vector <int> &col, vector <int> &diagonal1, vector <int> &diagonal2)
{
    if(row[r] == 0 && col[c] == 0 && diagonal1[c-r+n] == 0 && diagonal2[c+r] == 0)
    {
        cout << "YES" << endl;
        row[r] = true;
        col[c] = true;
        diagonal1[c-r+n] = true;
        diagonal2[c+r] = true;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector <int> row(n+1, 0), col(n+1, 0), diagonal1((n+1)*2, 0), diagonal2((n+1)*2, 0);
    for(int i=0; i<q; i++)
    {
        int r, c;
        cin >> r >> c;
        solve(n, q, r, c, row, col, diagonal1, diagonal2);
    }
}