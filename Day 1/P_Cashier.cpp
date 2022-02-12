#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int n, int L, int a, vector<int> t, vector<int> l)
{
   if(n == 0)
   {
    cout << L/a; // number of breaks if there are no clients.
    return;
   }
   int breaks=0;
   breaks += t[0] / a; // number of breaks he can take before the first client arrives.
   for(int i=0; i<n-1; i++)
   {
       int free = t[i+1] - (t[i] + l[i]);
       breaks += free / a; // number of breaks between every two clients.
   }
    breaks += (L - (t[n-1] + l[n-1])) / a; // number of breaks after the last client;
    cout << breaks;
}

int main()
{
    int n, L, a;
    cin >> n >> L >> a;
    vector<int> t(n), l(n);
    for(int i=0; i<n; i++)
    {
        cin >> t[i] >> l[i];
    }
    solve(n, L, a, t, l);
}