#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, temp; cin >> n;
	long long int ans = 0;

	multiset<int> p;

	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		p.insert(temp);
	}

	multiset<int>::iterator it = p.begin();
	advance(it, n/2);
	int median = *it;

	it = p.begin();

	while(it != p.end())
	{
		ans += abs(median - *it);
		advance(it, 1);
	}

	cout << ans << '\n';

	return 0;
}