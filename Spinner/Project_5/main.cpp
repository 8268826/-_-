#include <iostream>
#include <deque>
#include <algorithm>
#define MAX 1e18
using namespace std;

int main()
{
	deque<int> tuan;
	int n, k;
	cout << "Input (n,k): ";
Again:
	cin >> n >> k;
	if (n < 1 || k < 1 || MAX < n < k )
	{
		cout << "Input is falsed!" << endl;
		system("pause");
		system("cls");
		cout << "Re-input (n,k): ";
		goto Again;
	}
	tuan.push_back(n);
	while (k > 0)
	{
		tuan.push_back(n / 2);
		tuan.push_front((n - 1) / 2);
		for (int i = 0; i < tuan.size(); i++) if (tuan[i] == *max_element(tuan.begin(), tuan.end()))
			tuan.erase(tuan.begin() + i);
		n = *max_element(tuan.begin(), tuan.end());
		k--;
	}
	cout << tuan.front() << " " << tuan.back();
	return 0;
}
