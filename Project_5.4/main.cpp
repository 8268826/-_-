#include <bits/stdc++.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int m,n,select;
    cout<<"Введите количество столбцов: "; cin>>m;
    cout<<"Введите количество строк: "; cin>>n;
    int** a = new int* [m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
	Again:
	cout<<"Enter the matrix: "<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
		    cout<<"a["<<i<<"]["<<j<<"]= ";
			cin >>a[i][j];
		}
	}
	do{
            system("cls");
        cout<<"1.Re-enter the matrix"<<endl;
        cout<<"45).Написать программу, которая вводит по строкам с клавиатуры двумерный массив и вычисляет суммы его элементов по столбцам."<<endl;
        cout<<"47).Написать программу, которая вычисляет сумму диагональных элементов квадратной матрицы."<<endl;
        cout<<"Пожалуйста, выбери: "; cin>>select;
        switch(select)
        {
            default:{cout<<"Пожалуйста, введите еще раз!"<<endl; system("pause"); break;}
            case 0: break;
            case 1:
                    goto Again;
            case 45: {
                int sum;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        sum += a[j][i];
                    }
                    cout << "a[" << j << "]= " << sum << endl;
                    sum = 0;
                }
                system("pause");
                break;
            }
            case 47:
                {
                    int sum;
                    if(m!=n)
                    {
                        cout<<"Не квадратная матрица!"<<endl;
                    }
                    else{
                         for (int i = 0; i < n; i++)
                    {
                        sum += a[i][i];
                    }
                    cout<<sum;
                    }
                    system("pause");
                    break;
                }
        }
	}while(select);

	for (int i = 0; i < m; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}