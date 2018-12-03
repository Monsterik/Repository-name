#include "pch.h"
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int* arr = NULL;
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	if ((n < m) || ((argc - 3) != n))
	{
		cout << "ERROR! WRONG ARGUMETS!";
	}
	else
	{
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = atoi(argv[i + 3]);
		}
		cout << "Res:" << arr[m - 1] * arr[m - 1];
	}
	return 0
}
