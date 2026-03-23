#include <iostream>
#include <string>
using namespace std;

int main() {
    int array[4] = {1, 2, 3, 4};
    int* arr = array;

    for (int i = 0; i < 4; i++) {
        cout << "values array with pointer: " << *(arr + i)  << endl;
    }
}

