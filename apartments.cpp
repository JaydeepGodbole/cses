#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	int * a = new int[n];
	int * b = new int[m];

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int j = 0; j < m; j++)
	{
		cin >> b[j];
	}

	sort(a, a + n);
	sort(b, b + m);

	int ans = 0;
	int i = 0; int j = 0;
	while(i < n && j < m)
	{
		if(a[i] < b[j] - k) i++; // can't find this applicant a place
		else if(a[i] > b[j] + k) j++; // can't allot this or any room before to this applicant, but maybe later
		else
		{
			i++;
			j++;
			ans++;
		}
	}
	cout << ans;
    return 0;
}