#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    bool b = false;
    cout<<"Input: "; cin>>a;
    cout<<"Output: "<<endl;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++)
            if (i * 3 + 4 * j == a)
            {
                b = true;
                cout<< i << " " << j << endl;
                break;
            }
    if (!b)
        cout << 0 << endl << 0;
        return 0;
}
