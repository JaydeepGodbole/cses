#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int max = 0;
    int curr = 0;
    char c = 'R';
    for(auto &ch : s)
    {
        if(ch == c)
        {
            curr++;
        }
        else
        {
            c = ch;
            curr=1;
        }
        max = (curr>max)?curr:max;
    }
    cout << max;
    return 0;

}