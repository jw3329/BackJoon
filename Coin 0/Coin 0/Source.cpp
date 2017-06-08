#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int coin[10] = {};

	for (int i = 0; i < n; i++)
	{
		cin >> coin[i];
	}

	int count = 0;
	int i = n-1;
	while (k < coin[i])
		i--;
	while (k != 0)
	{
		while (k >= coin[i])
		{
			k -= coin[i];
			count++;
		}
		i--;
	}

	cout << count << endl;
	return 0;
}	