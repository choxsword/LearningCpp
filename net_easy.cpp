#include<bits/stdc++.h>

using namespace std;

namespace xzj
{
	int n;
	long long w;
	map<pair<int, long long >, long long> mmap;
	vector<int> v(n + 1);
	vector<int> M(w + 1, 1);
	void f1()
	{


		for (int i = 1;i <= n;++i)
		{
			for (int j = w;j >= 0;--j)
			{
				int rhs, lhs;
				if (j - v[i] < 0)
					lhs = 0;
				else
				{
					lhs = M[j - v[i]];
				}
				rhs = M[j];

				M[j] = rhs + lhs;
			}
		}
		cout << M[w];
	}

	long long get(int index, long long weight)
	{
		if (weight < 0)
			return 0;
		if (weight == 0||index==0)
			return 1;
		
		auto&& p = make_pair(index, weight);
		if (mmap.find(p)!= mmap.end())
			return mmap[p];
		else
		{
			return mmap[p]=get(index - 1, w - v[index]) + get(index - 1, w);
		}
	}
}


int main()
{
	using namespace xzj;

	cin >> n >> w;
	v.resize(n + 1);
	for (int i = 1;i <= n;++i)
	{
		int k;
		cin >> k;
		v[i] = k;
	}
	cout << get(n, w);
		return 0;
}

