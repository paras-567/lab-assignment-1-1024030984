#include <iostream> 
using namespace std; 
 
void reverseArray(int arr[], int n) { 
    for (int i = 0; i < n / 2; i++) { 
        int temp = arr[i]; 
        arr[i] = arr[n - i - 1]; 
        arr[n - i - 1] = temp; 
    } 
    cout << "Reversed array: "; 
    for (int i = 0; i < n; i++) cout << arr[i] << " "; 
    cout << endl; 
} 
 
void matrixMultiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, 
int c2) { 
    if (c1 != r2) { 
        cout << "Matrix multiplication not possible\n"; 
        return; 
    } 
    int res[10][10]; 
    for (int i = 0; i < r1; i++) { 
        for (int j = 0; j < c2; j++) { 
            res[i][j] = 0; 
            for (int k = 0; k < c1; k++) res[i][j] += a[i][k] * b[k][j]; 
        } 
    } 
    cout << "Resultant matrix:\n"; 
    for (int i = 0; i < r1; i++) { 
        for (int j = 0; j < c2; j++) cout << res[i][j] << " "; 
        cout << endl; 
    } 
} 
 
void transposeMatrix(int a[10][10], int r, int c) { 
    int t[10][10]; 
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) 
            t[j][i] = a[i][j]; 
    cout << "Transpose of first matrix:\n"; 
    for (int i = 0; i < c; i++) { 
        for (int j = 0; j < r; j++) cout << t[i][j] << " "; 
        cout << endl; 
    } 
} 
 
int main() { 
    int arr[100], n; 
    cout << "Enter number of elements: "; 
    cin >> n; 
    cout << "Enter elements:\n"; 
    for (int i = 0; i < n; i++) cin >> arr[i]; 
    reverseArray(arr, n); 
 
    int a[10][10], b[10][10], r1, c1, r2, c2; 
    cout << "Enter rows and cols of first matrix: "; 
    cin >> r1 >> c1; 
    cout << "Enter first matrix:\n"; 
    for (int i = 0; i < r1; i++) 
        for (int j = 0; j < c1; j++) 
            cin >> a[i][j]; 
    cout << "Enter rows and cols of second matrix: "; 
    cin >> r2 >> c2; 
    cout << "Enter second matrix:\n"; 
    for (int i = 0; i < r2; i++) 
        for (int j = 0; j < c2; j++) 
            cin >> b[i][j]; 
    matrixMultiplication(a, b, r1, c1, r2, c2); 
transposeMatrix(a, r1, c1); 
return 0; 
} 
