#include <iostream>
using namespace std;
int main()
{
	int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int C[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int X[40];
	
	for (int i = 0; i < 20; i++)
	{
		X[i] = A[i];
	}
	for (int i = 0; i < 20; i++)
	{
		X[i] = C[i];
	}
	for(int i = 0; i<40;i++)
	{
		cout << X << endl;
	}
	cout << endl;
	return 0;
}