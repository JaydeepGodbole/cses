#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int start, int mid, int end, int k)
{
    if(k==1) {cout << start << ' ' << end << '\n'; return;}
    tower_of_hanoi(start, end, mid, k-1);
    cout << start << ' ' << end << '\n';
    tower_of_hanoi(mid, start, end, k-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << ((int)pow(2,n) - 1) << '\n';
    tower_of_hanoi(1, 2, 3, n);
    return 0; 
}