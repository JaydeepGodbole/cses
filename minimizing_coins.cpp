#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n; cin >> n; int x; cin >> x; int temp;

	std::vector<int> ans(x+1, -1);

	ans[0] = 0;

	set<int> denominations;

	for(int i =0; i < n; i++)
	{
		cin >> temp;
		if(temp > x) continue;
		denominations.insert(temp);
		ans[temp] = 1;
	}

	set<int>::iterator it = denominations.begin();

	for(int i = 1; i <= x; i++)
	{
		if(ans[i]==-1)
		{
			temp = INT_MAX;
			it = denominations.begin();
			while(it != denominations.end())
			{
				if(*it > i) break;
				if(ans[i - *it] != -1) temp = min(temp, ans[i - *it] + 1);
				advance(it, 1);
			}
			if(temp != INT_MAX) ans[i] = temp;
		}
	}

	cout << ans[x] << '\n';

	return 0;
}