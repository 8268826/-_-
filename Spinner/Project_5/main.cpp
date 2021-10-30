#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n,k;
	cout << "Input (n,k): "; cin >> n>>k;
	int* a = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
	int p =rintf((float)n/2);
	a[p]=1;
	a[n]=1;
	k--;
	while (k!=0)
	{
		int dem = 0, demmax = 0,q;
		for (int i = 0; i <= n; i++)
		{
			if (a[i]==0)
			{
				dem++;
			}
			if (dem>=demmax&&a[i]==1)
			{
				demmax = dem;
				cout<<demmax<<endl;
				dem=0;
				q=i;
			}
		}
		q--;
		int j = q-rintf((float)(demmax) / 2);
		cout<<demmax<<" "<<q<<" "<<j<<endl;
		a[j] = 1;
		k--;
	}
	for (int  i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}
