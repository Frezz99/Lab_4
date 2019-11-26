#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int n = 5;
class Matrix
{
private:
	int mas[n];
public:

	friend void Input(Matrix First[]);
	friend void Output(Matrix First[]);
	void mergeSort(int arr[5], int leftIndex, int rightIndex)
	{
		if (leftIndex < rightIndex)
		{
			int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

			mergeSort(arr, leftIndex, middleIndex);
			mergeSort(arr, middleIndex + 1, rightIndex);

			merge(arr, leftIndex, middleIndex, rightIndex);
		}
	}
	 void merge(int arr[], int l, int m, int r)
	{
		int i, j;
		int size1 = m - l + 1;
		int size2 = r - m;
		int *left= new int [size1], *right= new int[size2];

		for (i = 0; i < size1; i++)
			left[i] = arr[l + i];
		for (j = 0; j < size2; j++)
			right[j] = arr[m + 1 + j];

		int k = l;
		i = 0;
		j = 0;
		while (i < size1 && j < size2)
		{
			if (left[i] <= right[j])
			{
				arr[k] = left[i];
				i++;
			}
			else
			{
				arr[k] = right[j];
				j++;
			}
			k++;
		}

		while (i < size1)
		{
			arr[k] = left[i];
			i++;
			k++;
		}

		while (j < size2)
		{
			arr[k] = right[j];
			j++;
			k++;
		}
	}

	 void Sort()
	 {
		 int arr[5];
		 for (int j = 0; j < n; j++)
		 {
			 for (int i = 0; i < n; i++)
			 {
				 arr[i] = this[i].mas[j];
			 }

			 mergeSort(arr, 0, n - 1);

			 for (int i = 0; i < n; i++)
			 {
				 this[i].mas[j] = arr[i];
			 }

		 }
	 }
	friend void obrachuvania(Matrix First[]);
};
void obrachuvania(Matrix First[])
{
	int f[n] = { 0,0,0,0,0 }, j, F = 1;
	for (int i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			f[i] += First[i].mas[j];
		}
		cout<<endl << "f[" << i << "]=" << f[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		F *= f[i];
	}
	cout<<endl<< pow(F, 0.25);
}
void Input(Matrix First[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << "[" << i << "][" << j << "]=";
			cin >> First[i].mas[j];
			cout << "\n";
		}
	}
}

void Output(Matrix First[])
{
	cout << endl << endl << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << First[i].mas[j]<<"\t";
		}
	}
}