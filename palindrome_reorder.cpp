#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c[26] = {0};
    
    for(auto &ch : s)
    {
        c[ch - 'A']++;
    }
    char oddoneout = 'a';
    bool one_odd = false;
    for(int i = 0; i < 26; i++)
    {
        if(c[i]%2 == 1) 
            {
                if(!one_odd) {one_odd = true; oddoneout = (char)(i + 'A');}
                else {cout << "NO SOLUTION" << '\n'; return 0;}
            }
    }
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < c[i]/2; j++) cout << (char)(i + 'A');
    }
    if(one_odd) cout << oddoneout;
    for(int i = 25; i >= 0; i--)
    {
        for(int j = 0; j < c[i]/2; j++) cout << (char)(i + 'A');
    }
    cout << '\n';
    return 0;
}