#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short q; cin>>q;
    unsigned long long k;
    unsigned long long temp;
    unsigned long long num_numbers;
    short digit = 1;
    while(q--)
    {
        cin >> k;
        if(k<=9) {cout << k << '\n'; continue;}
        
        temp = 0;
        digit = 1;
        num_numbers = 9;
        
        while(temp < k)
        {
            temp += digit*num_numbers;
            digit++;
            num_numbers *= 10;
        }
        
        digit--;
        num_numbers /= 10;
        temp = temp - digit*num_numbers;
        
        // now temp is like the last representative of 99999 and digit = correct;num_numbers = (non_temp+1)*9

        unsigned long long t = num_numbers/9 + (k-temp)/digit;
        int r = (k-temp)%digit;
        //cout << r << endl << t << endl;
        if(r == 0)
        {
            cout << (t - 1)%10 << '\n';
        }
        else
        {
            while(digit - r++) {t /= 10;}
            cout << (t)%10 << '\n';
        }
    }
    return 0;
}
