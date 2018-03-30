#include<bits/stdc++.h>
using namespace std;

namespace xzj
{
	

}

int main()
{
	using namespace xzj;
	int n;
	int res=1;
	vector<int> judge;
	int f = 0;
	cin >> n;
	if (n % 3 == 0)
	{
		res = pow(3, n / 3);
		cout << res;
		return 0;
	}
	while (n != 4 && n != 2)
	{
		judge.push_back(3);
		n -= 3;
	}
	while (n!=0)
	{
		judge.push_back(2);
		n = n - 2;
	}
	for (auto&i : judge)
	{
		res *=i;
	}
	cout << res;
	return 0;
}