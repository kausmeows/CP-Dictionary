#include<iostream>
using namespace std;

void solve(string s)
{
    int count0 = 0, count1 = 1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '1')
        {
            count1++;
            count0 = 0;
        }
        else if(s[i] == '0'){
            count0++;
            count1=0;
        }
        if(count1 >= 7 || count0 >= 7)
        {
            cout << "YES";
            return;
        }
    }
        cout << "NO";
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}