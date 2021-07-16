#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    bool * temp = new bool[n];
    
    for(int i = 0; i < n; i++) temp[i] = false;
    
    int idx;
    
    for(int i=0; i < n-1;i++)
    {
        cin >> idx;
        temp[idx-1] = true;
    }

    for(int i = 0; i < n; i++)
    {
        if(!temp[i]) {cout << i+1;break;} 
    }
    return 0;

}