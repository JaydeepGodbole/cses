#include<bits/stdc++.h>
using namespace std;

bool sort_by_int(const pair<int,bool> &p1, const pair<int,bool> &p2)
{
	return p1.first < p2.first;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	int temp;
	std::vector<pair<int, bool> > v;
	for(int i=0; i<n; i++)
	{
		cin >> temp;
		v.push_back(make_pair(temp, false));
		cin >> temp;
		v.push_back(make_pair(temp, true));
	}
	sort(v.begin(), v.end(), sort_by_int);

	int num_customers = 0;
	int ans = 0;

	for(int i = 0; i < v.size(); i++)
	{
		if(!v[i].second) {num_customers++; ans = max(ans, num_customers);}
		else num_customers--;
	}

	cout << ans << '\n';

	return 0;
}