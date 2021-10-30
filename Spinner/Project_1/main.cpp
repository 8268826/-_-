#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, i = 0;
	cout << "Input (a,b,c): " << endl;
	cin >> a >> b >> c;
	while (true)
	{
		if (a + b * i > c)
		{
			cout << "Output: " << i - 1;
			break;
		}
		i++;
	}
	return 0;
}
