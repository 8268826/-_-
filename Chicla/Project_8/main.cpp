#include <iostream>
using namespace std;

unsigned long long Factorial(int n)
{
	if (n==1||n==0)
		return 1;
	return n * Factorial(n - 1);
}

int main()
{
	int n, m;
	cout<<"Input (m,n): "<<endl;
	cin >> n >> m;
	if (n < 1) n = 1;
	cout<<"Output: "<<endl;
	for (int i = n; i <= m; i++)
		cout << Factorial(2 * i) /(Factorial(i + 1)* Factorial(i))<< endl;
	return 0;
}
