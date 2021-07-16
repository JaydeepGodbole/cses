#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    set<int> s;
    int temp;
    while(n--) {cin >> temp; s.insert(temp);}

    cout << s.size();

    return 0;

}