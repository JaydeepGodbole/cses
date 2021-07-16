#include<bits/stdc++.h>
using namespace std;

class tickets
{
private:
	int temp;
	multiset<int> h;

public:

	void insert_tickets(int n)
	{
		while(n--) {cin >> temp; h.insert(temp);}
	}

	void assign_tickets(int m)
	{
		for(int i = 0; i < m; i++)
		{
			//cout << i << endl;
			cin >> temp;
			auto a = h.upper_bound(temp);
			if(a == h.begin())
				cout << -1 << '\n';
			else
			{
				--a;
				cout << *a << '\n';
				h.erase(a);	
			}
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m;

	cin >> n >> m;

	tickets t;

	t.insert_tickets(n);
	t.assign_tickets(m);

	return 0;
}