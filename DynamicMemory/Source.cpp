#include<iostream>

using namespace std;


//#define DINAMIC_MEMORY_1
#define DINAMIC_MEMORY_2

#ifdef DINAMIC_MEMORY_1
void Fillrand(int*, const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива:"; cin >> n;
	int* arr = new int[n];
	Fillrand(arr, n);
	Print(arr, n);

	int brr[5];
	cout << endl;
	Fillrand(brr, 5);
	Print(brr, 5);

	delete[] arr;
}

void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
    {//*- оператор разыменовани возволщает значение по адресу
	 *(arr + i) = rand() % 100;
    }
}

void Print(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
	 cout << arr[i] << "\t";
    }
}

#endif // DINAMIC_MEMORY_1




