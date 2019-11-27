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

	friend void inputMatrix(Matrix First[]);
	friend void outputMatrix(Matrix First[]);
	void Separation(int array[n], int leftIndex, int rightIndex)
	{
		if (leftIndex < rightIndex)
		{
			int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

			Separation(array, leftIndex, middleIndex);
			Separation(array, middleIndex + 1, rightIndex);

			Sorting(array, leftIndex, middleIndex, rightIndex);
		}
	}
	 void Sorting(int array[], int LeftBorder, int Middle, int RightBorder)
	{
		int row, column;
		int size_of_left_array = Middle - LeftBorder + 1;
		int size_of_right_array = RightBorder - Middle;
		int *left_array= new int [size_of_left_array], *right_array= new int[size_of_right_array];

		for (row = 0; row < size_of_left_array; row++)
			left_array[row] = array[LeftBorder + row];
		for (column = 0; column < size_of_right_array; column++)
			right_array[column] = array[Middle + 1 + column];

		int Index = LeftBorder;
		int LeftIndex = 0;
		int RightIndex = 0;
		while (LeftIndex < size_of_left_array && RightIndex < size_of_right_array)
		{
			if (left_array[LeftIndex] <= right_array[RightIndex])
			{
				array[Index] = left_array[LeftIndex];
				LeftIndex++;
			}
			else
			{
				array[Index] = right_array[RightIndex];
				RightIndex++;
			}
			Index++;
		}

		while (LeftIndex < size_of_left_array)
		{
			array[Index] = left_array[LeftIndex];
			LeftIndex++;
			Index++;
		}

		while (RightIndex < size_of_right_array)
		{
			array[Index] = right_array[RightIndex];
			RightIndex++;
			Index++;
		}
	}

	 void sort_by_column()
	 {
		 int array[n];
		 for (int column = 0; column < n; column++)
		 {
			 for (int row = 0; row < n; row++)
			 {
				 array[row] = this[row].mas[column];
			 }

			 Separation(array, 0, n - 1);

			 for (int row = 0; row < n; row++)
			 {
				 this[row].mas[column] = array[row];
			 }

		 }
	 }
	friend void accounting_f_and_Fij(Matrix First[]);
};
void accounting_f_and_Fij(Matrix First[])
{
	int f[n] = { 0,0,0,0,0 }, column, F = 1;
	for (int row = 0; row < n-1; row++)
	{
		for (column = row + 1; column < n; column++)
		{
			f[row] += First[row].mas[column];
		}
		cout<<endl << "f[" << row << "]=" << f[row];
	}
	for (int row = 0; row < n-1; row++)
	{
		F *= f[row];
	}
	cout<<endl<< pow(F, 0.25);
}
void inputMatrix(Matrix First[])
{
	for (int row = 0; row < n; row++)
	{
		cout << "\n";
		for (int column = 0; column < n; column++)
		{
			cout << "[" << row << "][" << column << "]=";
			cin >> First[row].mas[column];
			cout << "\n";
		}
	}
}

void outputMatrix(Matrix First[])
{
	cout << endl << endl << endl;
	for (int row = 0; row < n; row++)
	{
		cout << "\n";
		for (int column = 0; column < n; column++)
		{
			cout << First[row].mas[column]<<"\t";
		}
	}
}