#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1) cout << 1;
    else if(n == 4)
    {
        cout << " 2 4 1 3";
    }
    else if(n < 5) cout << "NO SOLUTION";
    else
    {
        for(int i = 0; i < n; i=i+2)
        {
            cout << i+1 << " "; 
        }
        for(int i = 1; i < n; i=i+2)
        {
            cout << i+1 << " ";
        }
    }
    return 0;
}