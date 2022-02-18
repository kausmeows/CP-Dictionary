#include<iostream>
using namespace std;
typedef long long ll;

void solve(ll a)
{
    ll peri = INTMAX_MAX, length, breadth;
    for(ll i=1; i*i<=a; i++) /* We can optimize the iterations till sqrt(a) 
                                 to reduce the time complexity. */
    {
        length = 0, breadth = 0;
        if(a % i == 0)
        {
            ll length = i;
            ll breadth = a / i;
            peri = min (peri, 2 * (length + breadth));
        }
    }
    cout << peri;
}

int main()
{
    ll A;
    cin >> A;
    solve(A);
}