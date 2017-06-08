#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int arr[10] = {};
	int res = A*B*C;

	while (res != 0)
	{
		int rem = res % 10;
		res /= 10;
		switch (rem)
		{
		case 0:
			arr[0]++;
			break;
		case 1:
			arr[1]++;
			break;
		case 2:
			arr[2]++;
			break;
		case 3:
			arr[3]++;
			break;
		case 4:
			arr[4]++;
			break;
		case 5:
			arr[5]++;
			break;
		case 6:
			arr[6]++;
			break;
		case 7:
			arr[7]++;
			break;
		case 8:
			arr[8]++;
			break;
		case 9:
			arr[9]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}