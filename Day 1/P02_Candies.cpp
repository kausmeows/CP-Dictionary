#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
     
void solve(vector <int>v, int a, int b)
{
    ll res = 0;
    for (int i = a; i <=b; ++i)
        res += v[i];
    cout << res;
}
    
int main() {
int n;
cin >> n;
vector<int> v(n);
for (int& i: v)
    cin >> i;
int a, b;
cin >> a >> b;
solve(v, a, b);
return 0;
}