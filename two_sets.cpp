#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    switch (n%4)
    {
        case 0: cout << "YES" << '\n';
            cout << n/2 << '\n';
            for(int i = 0; i < n/4; i++) cout << (4*i+1) << ' ' << (4*i+4) << ' ';
            cout << '\n' << n/2 << '\n';
            for(int i = 0; i < n/4; i++) cout << (4*i+2) << ' ' << (4*i+3) << ' ';
            break;
        case 1: cout << "NO" << '\n';
            break;
        case 2: cout << "NO" << '\n'; break;
        case 3: cout << "YES" << '\n';
            cout << n/2 + 1 << '\n';
            cout << "1 2 ";
            for(int i = 0; i < n/4; i++) cout << (4*i +4) << ' ' << (4*i + 7) << ' ';
            cout << '\n' << n/2 << '\n';
            cout << "3 ";
            for(int i = 0; i < n/4; i++) cout << (4*i + 5) << ' ' << (4*i + 6) << ' ';
            break;
    }
    return 0;
}