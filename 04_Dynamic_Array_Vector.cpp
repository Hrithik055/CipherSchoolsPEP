#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numElements;
    cout << "Enter the number of elements you want to store in the dynamic array: ";
    cin >> numElements;

    vector<int> dynamicArray;

    cout << "Enter " << numElements << " elements: " << endl;
    for (int i = 0; i < numElements; ++i) {
        int element;
        cin >> element;
        dynamicArray.push_back(element);
    }

    cout << "Elements in the vector: ";
    for (const int& element : dynamicArray) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Enter a new element to add to the vector: ";
    int newElement;
    cin >> newElement;
    dynamicArray.push_back(newElement);

    cout << "Updated elements in the vector: ";
    for (const int& element : dynamicArray) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
