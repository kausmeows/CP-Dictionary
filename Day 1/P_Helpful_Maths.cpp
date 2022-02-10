#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string s)
{
    vector<int> n;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != '+')
        {
            n.push_back(s[i]);
        }
    }
    sort(n.begin(), n.end());
     for (int i = 0; i < n.size(); i++) {
        if(i != n.size() - 1)
            cout << n[i] - '0' << "+";
        else    
            cout << n[i] - '0';
    }
}

int main()
{
    string s;
    getline(cin, s);
    solve(s);
}