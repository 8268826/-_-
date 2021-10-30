#include <iostream>
#include <math.h>
using namespace std;

int check(int n,int m)
{
	int x = m % 10;
	if (m==0)
	{
		return 0;
	}
	return pow(x, n) + check(n, m / 10);
}

int main()
{
	int n,m=0,x=1;
	cout<<"Input: ";
	cin >> n;
	int* a = new int[n];
	for (int i = n-1; i >= 0; i--)
	{
		a[i] = 9;
		m += a[i] * x;
		x *= 10;
	}
	cout<<"Output: "<<endl;
	for (int i = x / 10; i < m; i++)
	{
		if (check(n, i) == i)
		{
			cout << i << endl;
		}
	}
	return 0;
}
