#include <iostream>

using namespace std;

#define MAX 100

void ReadMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void PrintMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void GetMultiplicationMatrices(int matrixA[MAX][MAX], int rowsA, int colsA, int matrixB[MAX][MAX], int rowsB, int colsB, int matrixM[MAX][MAX])
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
                matrixM[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
}

int main()
{
int matrixA[MAX][MAX],  rowsA,  colsA,  matrixB[MAX][MAX],  rowsB,  colsB,  matrixM[MAX][MAX];
cin>>rowsA>>colsA;
ReadMatrix(matrixA,rowsA,colsA);
cin>>rowsB>>colsB;
ReadMatrix(matrixB,rowsB,colsB);
GetMultiplicationMatrices(matrixA,  rowsA,  colsA,  matrixB,  rowsB,  colsB,  matrixM);
PrintMatrix(matrixM,rowsA,colsB);

}