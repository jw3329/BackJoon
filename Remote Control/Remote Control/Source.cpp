#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m, temp, ans;
	bool chk[10];
	for (int i = 0; i<10; i++) chk[i] = true;
	cin >> n >> m;
	for (int i = 0; i<m; i++)
	{
		cin >> temp;
		chk[temp] = false;
	}
	ans = abs(100 - n);

	for (int i = 0; i <= 1000000; i++)
	{
		bool can = true;
		int temp = i, len = 0;
		while (temp)
		{
			if (!chk[temp % 10]) can = false;
			temp /= 10; len++;
		}
		if (i == 0) { len = 1;  if (!chk[0]) can = false; }
		if (can) ans = min(ans, abs(n - i) + len);
	}
	cout << ans << endl;
	return 0;
}