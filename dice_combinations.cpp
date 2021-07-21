#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int temp;
	cin >> n;

	if(n == 1) {cout << 1 << '\n'; return 0;}
	int * a = new int[n+1];
	a[0] = 0;
	a[1] = 1;

	for(int i = 2; i <= n; i++)
	{
		temp = 0;
		for(int k = 1; k <= 6; k++)
		{
			if(i-k < 0) break;
			temp = (temp + a[i-k])%1000000007;
		}
		if(i <= 6) a[i] = (temp + 1);
		else a[i] = temp;
		a[i] = a[i]%1000000007;
	}
	cout << a[n] << '\n';

	return 0;
}