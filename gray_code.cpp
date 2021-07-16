#include<bits/stdc++.h>
using namespace std;

void toggle(short int arr[16], int digit)
{
    if(arr[digit]) arr[digit] = 0;
    else arr[digit] = 1;
}

void print_gray(short int arr[16], int level, int n)
{
    if(level == n-1)
    {
        for(int i = 0; i < n; i++) cout << arr[i];
        cout << '\n';
        toggle(arr, n-1);
        for(int i = 0; i < n; i++) cout << arr[i];
        cout << '\n';
        return;
    }
    print_gray(arr, level+1, n);
    toggle(arr, level);
    print_gray(arr, level+1, n);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    short int arr[16] = {0};
    print_gray(arr, 0, n);
    return 0;
    

}