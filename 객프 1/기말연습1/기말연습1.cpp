#include <iostream>
using namespace std;
#define AH 5 //height of matrix A
#define AW 1 //width of matrix A
#define BH 1 //height of matrix B
#define BW 5 //width of matrix B

void MatrixSum(int A[AH][BW], int B[AH][BW], int R[AH][BW])
{
	if (AH != BW)
	{
		cout << "Size error for matrix summation!" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				R[i][j] = (A[i][j] + B[i][j]);
			}
		}
	}
}

void MatrixMulti(int A[AH][AW], int B[BH][BW], int R[AH][BW])
{
	if (AH != BW)
	{
		cout << "Matrix Size error!" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				R[i][j] =  (A[i][0] * B[0][j]);
			}
		}
	}
}

void main()
{
	int A[AH][AW] = { {1},{1},{1},{1},{1} };
	int B[BH][BW] = { 1,2,3,4,5 };
	int C[AH][BW] = { {5,0,0,0,0},{0,4,0,0,0},{0,0,3,0,0},{0,0,0,2,0},{0,0,0,0,1} };
	int R1[AH][BW] = { 0 };
	int R2[AH][BW] = { 0 };

	//print out the matrix A
	cout << "A = " << endl;
	for (int i = 0; i < AH; i++)
	{
		for (int j = 0; j < AW; j++)
		{
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;

	//print out the matrix B
	cout << "B = " << endl;
	for (int i = 0; i < BH; i++)
	{
		for (int j = 0; j < BW; j++)
		{
			cout << B[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;

	MatrixMulti(A, B, R1);
	//print out the matrix R1
	cout << "R1 = " << endl;
	for (int i = 0; i < AH; i++)
	{
		for (int j = 0; j < BW; j++)
		{
			cout << R1[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;

	MatrixSum(R1, C, R2);
	//print out the matrix R2
	cout << "R2 = " << endl;
	for (int i = 0; i < AH; i++)
	{
		for (int j = 0; j < BW; j++)
		{
			cout << R2[i][j] << "  ";
		}
		cout << endl;
	}

}