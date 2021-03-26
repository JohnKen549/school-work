#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int N=8;
    int A[N][N];
    int B[N];
    int i, j;
    for (i = 0; i <N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
                A[i][j]=0;
            }
            else
                A[i][j]=rand()%1000;
                cout <<A[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i <N; i++) {
        for (j = 0; j < N; j++) {
            if (i >= j) {
                int index = (i * (i - 1)) / 2
                            + j - 1;
                B[index] = A[i][j];
                cout << B[index] << " ";
            }
        }
    }

    N=32;
    A[N][N];
    B[N];
    for (i = 0; i <N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
                A[i][j]=0;
            }
            else
                A[i][j]=rand()%1000;
            cout <<A[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i <N; i++) {
        for (j = 0; j < N; j++) {
            if (i >= j) {
                int index = (i * (i - 1)) / 2
                            + j - 1;
                B[index] = A[i][j];
                cout << B[index] << " ";
            }
        }
    }

    N=128;
    A[N][N];
    B[N];
    for (i = 0; i <N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
                A[i][j]=0;
            }
            else
                A[i][j]=rand()%1000;
            cout <<A[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i <N; i++) {
        for (j = 0; j < N; j++) {
            if (i >= j) {
                int index = (i * (i - 1)) / 2
                            + j - 1;
                B[index] = A[i][j];
                cout << B[index] << " ";
            }
        }
    }

    return 0;
}
