#include <iostream>
using namespace std;

int spiners(int k,int n)
{
	if (n == 1) return 1;
	return k*spiners(k, n - 1);
}

int main()
{
	int m, n, k = 0;
	cout<<"Input (N,M): "<<endl;
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		k += i;
	}
	n += 1;
	cout <<"Output: "<< spiners(k,n) << endl;
}
