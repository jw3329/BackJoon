#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char ch[1000001] = {};

	cin.getline(ch, 1000001);

	int count;
	if (ch[0] == ' ')
		count = 0;
	else
		count = 1;
	if (strcmp(ch, "") == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; ch[i]; i++)
	{
		if (ch[i] == ' ' && ch[i + 1] != ' ' && ch[i+1] != 0)
			count++;
	}
	
	cout << count << endl;
	return 0;
}