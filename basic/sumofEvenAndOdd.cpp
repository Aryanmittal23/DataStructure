#include<iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    cin >> n;

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int A[n]; 
    int B[n]; 
    int sumEven = 0;
    int sumOdd = 0;

    int lenA = 0; 
    int lenB = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            A[lenA] = arr[i]; 
            sumEven += arr[i]; 
            lenA++;
        } else {
            B[lenB] = arr[i]; 
            sumOdd += arr[i]; 
            lenB++; 
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    return 0;
}
