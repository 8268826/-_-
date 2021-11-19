#include <iostream>
using namespace std;

unsigned long long Factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return n * Factorial(n - 1);
}

unsigned long long Katalana(int n)
{
	return Factorial(2 * n) / (Factorial(n + 1) * Factorial(n));
}

int main()
{
	int n, m, i = 1;
	cout << "Input (m,n): " << endl;
	cin >> n >> m;
	if (n < 1) n = 1;
	cout << "Output: " << endl;
	while (true)
	{
		if (Katalana(i) >= n && Katalana(i) <= m) cout << Katalana(i) << " ";
		else if (Katalana(i) > m) break;
		i++;
	}
	return 0;
}
