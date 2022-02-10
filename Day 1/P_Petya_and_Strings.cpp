#include<iostream>
using namespace std;

void solve(string s1, string s2)
{
   for(int i=0; i<s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for(int i=0; i<s1.length(); i++)
    {
        s2[i] = tolower(s2[i]);
    }
   if(s1 < s2)
    cout << "-1" << endl;
   else if(s1 > s2)
    cout << "1" << endl;
   else 
    cout << "0" << endl;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
}