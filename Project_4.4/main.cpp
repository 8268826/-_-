#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 45; j++)
		{
			if (i <= 5 && j <= 7) cout << "*";
			else cout << "-";
		}
		cout << endl;
	}
}
