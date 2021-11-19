#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, k, demmax;
Again:
	cout << "Input (n,k): "; cin >> n >> k;
	demmax = n;
	if (n < 1 || k < 1 || n < k)
	{
		cout << "Input is falsed!" << endl;
		system("pause");
		system("cls");
		goto Again;
	}
	int* a = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
	a[n / 2] = 1;
	a[n] = 1;
	while (k > 1)
	{
		int dem = 0, q;
		demmax = 0;
		for (int i = 0; i <= n; i++)
		{
			if (a[i] == 0)
				dem++;
			else if (dem >= demmax && a[i] ==1)
			{
				demmax = dem;
				dem = 0;
				q = i;
			}
			else dem = 0;
			
		}
		q--;
		a[q - demmax / 2] = 1;
		k--;
	}
	cout << "Output: " << rintf(((float)demmax / 2) - 0.6) << " " << rintf(((float)demmax / 2));
	delete[]a;
	return 0;
}
