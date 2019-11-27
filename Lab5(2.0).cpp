#include <iostream>
#include "Matrix.h"
using namespace std;
int main(void)
{
	Matrix array[n];
	inputMatrix(array);
	outputMatrix(array);
	array->sort_by_column();
	outputMatrix(array);
	accounting_f_and_Fij(array);
	return 0;
}