#include <iostream>

using namespace std;

int main() {
    int A[100][100], B[100][100], C[100][100];
    int M, P, N;

    // Input matrix dimensions
    cout << "Enter the number of rows for matrix A: ";
    cin >> M;
    cout << "Enter the number of columns for matrix A and rows for matrix B: ";
    cin >> P;
    cout << "Enter the number of columns for matrix B: ";
    cin >> N;

    // Input matrices A and B
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < P; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < P; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < P; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output matrix C
    cout << "Resultant matrix C:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
