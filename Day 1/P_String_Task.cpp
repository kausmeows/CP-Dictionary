#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void lowercase(string &s){
    for(int i=0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

void solve(string s)
{
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u', 'y'};
    lowercase(s);
    for(int i=0; i<s.length(); i++)
    {
        if(binary_search(vowel.begin(), vowel.end(), s[i])) {
            continue;
        }
        else
            cout << "." << s[i];
    }
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}