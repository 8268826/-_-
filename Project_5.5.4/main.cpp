#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Sort(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = i + 1; j < str.length(); j++)
		{
			char tg1 = str[i];
			char tg2 = str[j];
			if (tg1 >= 'A' && tg1 <= 'Z')
				tg1 += 31.5;
			if (tg2 >= 'A' && tg2 <= 'Z')
				tg2 += 31.5;
			if (tg1 > tg2)
			{
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}

int main()
{
	int select;
	string str;
	char c;
	int i=0;
	fstream input;
	getline(cin, str);
	A:
    input.open("input.txt", ios::out);
	Sort(str);
	input << str;
	input.close();
	while (true)
	{
		cout << "Press 1 to add characters to the string, press 0 to exit the program: ";
		cin >> select;
		if (select == 0)
			break;
		cin >> c;
		str.push_back(c);
		goto A;
	}
	return 0;
}