#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	unordered_map<int, int> m;

	int n; cin >> n; int temp;

	for(int i=0; i < n; i++)
	{
		cin >> temp;
		if(m.find(temp) == m.end()) m[temp] = 1;
		else m[temp] += 1;
	}

	if(m.find(1) == m.end()) cout << 1 << '\n';
	else
	{
		vector<unordered_map<int,int> > v;
		v.push_back(m);
		v[0][0] -= 1;

		long long int ans = 2;
		long long int curr = 2;
		bool possible;

		while(1)
		{
			curr = ans;
			possible = false;
			while(curr > 0)
			{
				if(m[])

				curr--;
			}
			if(possible)
				{
					ans++;
				}
			else
			{
				cout << ans << '\n';
				break;
			}
		}
	}

	return 0;
}