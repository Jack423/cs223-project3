//
// Created by Jack Butler on 5/3/2018.
//

#include <iostream>
using namespace std;

class DynamicStack {

private:
    int *A;
    int topOfStack;
    int length;

public:
    DynamicStack() {
        topOfStack = -1;
        length = 1;
        A = new int[length];
    }

    ~DynamicStack() {
        delete A;
    }

    int getNumElements() {
        return (topOfStack + 1);
    }

    int getLength() {
        return length;
    }

    void push(int val) { // complete this method
    }

    int pop() { // complete this method
    }

    void printArray() {
        cout << "[";
        for (int i = 0; i < getNumElements() - 1; i++)
            cout << A[i] << ", ";
        cout << A[getNumElements() - 1] << "]";
    }
};

int main() {
    int A[] = { 360, 948, 29, 447, 515, 53, 491, 761, 719, 854, -360, -948, -29,
                -447, -515, -53 };
    int len = sizeof(A) / sizeof(int);
    DynamicStack da;
    cout << "*** Push test ***" << endl;
    for (int i = 0; i < len; i++) {
        cout << "Pushed " << A[i] << ", ";
        da.push(A[i]);
        cout << "Num elements: " << da.getNumElements() << ", Length: "
             << da.getLength() << endl;
    }
    cout << endl << "*** Pop test ***" << endl;
    for (int i = 0; i < len; i++) {
        cout << "Popped " << da.pop() << ", ";
        cout << "Num elements: " << da.getNumElements() << ", Length: "
             << da.getLength() << endl;
    }
    return 0;
}

