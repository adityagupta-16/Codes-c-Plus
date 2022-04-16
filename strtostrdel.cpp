#include<bits/stdc++.h>
using namespace std;

//Remove characters from the first string which are present in the second string
int main()
{
    string s;
    cin >> s;
    string s1;
    cin >> s1;
    unordered_map<char, int>m;
    for (int i = 0;i < s1.length();i++)
    {
        m[s1[i]]++;
    }
    string res = "";
    for (int i = 0;i < s.length();i++)
    {
        if (!m.count(s[i]))
            res += s[i];
    }
    cout << res;

}
