#include<bits/stdc++.h>
using namespace std;

bool sort_by_ending(const pair<int, int> &a, const pair<int,int> &b)
{
	return a.second < b.second;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;int temp1, temp2;
	cin >> n;
	std::vector<pair<int, int> > v;

	while(n--)
	{
		cin >> temp1 >> temp2;
		v.push_back(make_pair(temp1, temp2));
	}

	sort(v.begin(), v.end(), sort_by_ending);
	int i = 0, ans = 0, ending_time;

	while(i < v.size())
	{
		ans += 1;
		ending_time = v[i].second;
		do{i++;} while(v[i].first < ending_time);
	}

	cout << ans << '\n';
	return 0;
}