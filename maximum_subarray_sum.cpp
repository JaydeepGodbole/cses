#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n; int temp;
	bool pos = false;
	int num_max = INT_MIN;
	long long int sum = 0;
	long long int prev = 0;
	long long int ans = 0;
	
	while(n--)
	{
		cin >> temp;
		num_max = max(num_max, temp);

		if(!pos)
		{
			if(temp > 0)
			{
				// for the first time
				pos = true;
				sum = temp;
				ans = max(ans, sum);
			}
		}
		else
		{
			sum = max((long long int)0, sum + temp);
			ans = max(ans, sum);
		}
	}
	
	if(!pos) cout << num_max << '\n';
	else
	{
		cout << ans << '\n';
	}
	 

	return 0;
}