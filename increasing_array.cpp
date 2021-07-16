#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long moves = 0;
    int prev_max = 0;
    int curr;
    cin >> prev_max;
    for(int i = 0; i < n-1; i++)
    {
        cin >> curr;
        if(curr < prev_max) moves += prev_max-curr;
        prev_max = max(curr, prev_max);
    }
    cout << moves;
    return 0;
}