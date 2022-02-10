#include<iostream>
using namespace std;

void solve(string s)
{
    int length = s.length();
    if(length > 10)
    {
        char c_first = s[0];
        char c_last = s[length - 1];
        int decimal = length - 2;
        string str = c_first + to_string(decimal) + c_last;
        cout << str << endl; 
    }
    else
    {
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        solve(s);
    }
}