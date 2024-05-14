#include <iostream>
using namespace std;

int main (){
    int arraySize;
    cout << "Hallo zet een nummer voor jouw array: ";
    cin >> arraySize;

    int* arr = new int [arraySize];

    cout << "Zet elements in je array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << "Element " << i + 1 << ":";
        cin >> arr[i];
    }

    cout << "Je elementen zijn: "; 
    for (int i = 0; i < arraySize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}