#include<bits/stdc++.h>
using namespace std;

bool sort_first(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.first < b.first;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	cin >> n >> x;
	std::vector<pair<int, int> > v;
	
	int * a = new int[n];

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		v.push_back(make_pair(a[i], i+1));
	}
	sort(a, a+n);
	sort(v.begin(), v.end(), sort_first);

	for(int i = 0; i < n; i++)
	{
		auto r = equal_range(a + i + 1, a + n, x - a[i]);

		if(r.second - r.first)
		{
			// some elements such that they sum up to x
			cout << v[i].second << " " << v[r.first - a].second << '\n';
			return 0;
		}
	}
	cout << "IMPOSSIBLE\n";

	return 0;
}