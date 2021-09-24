#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double m, m0, s, n, a, p, r;
	int i;
	cout << "Input S m n : ";
	cin >> s >> m >> n;
	for (i = 1; i <= 100000; i++) {
		p = i / 1000;
		r = p / 100;
		a = 1 + r;
		m0 = (s * r * pow(a, n)) / (12 * (pow(a, n) - 1));
		if (m0 > m) {
			break;
		}
	}
	cout << "Percent-Protsent p = " << p << endl;
	return 0;
}
