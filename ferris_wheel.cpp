#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x;
	cin >> n >> x;

	int * p = new int[n];
	for(int i = 0; i < n; i++)
		cin >> p[i];
	sort(p, p + n);

	int front = 0; int back = n-1;
	int doubles = 0;

	while(front < back)
	{
		if(p[front] + p[back] <= x)
		{
			front++;
			back--;
			doubles++;
		}
		else back--;
	}

	cout << n - doubles << '\n';

	return 0;
}