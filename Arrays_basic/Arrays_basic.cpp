#include <iostream>
using namespace std;


void funcGet(int arr2[], int len2) {
    int value;

    for (int i = 0; i < len2; i++) {
        cout << "Enter the value: " << endl;
        cin >> value;
        arr2[i] = value;
    }
}


void funcPrint(int arr3[], int len3) {

    for (int k = 0; k < len3; k++) {
        cout << arr3[k] << endl;
    }
}

int main()
{
    int arr[10];
    int len;

    len = sizeof(arr) / sizeof(arr[0]);

    funcGet(arr, len);

    funcPrint(arr, len);

    return 0;
}