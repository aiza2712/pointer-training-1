#include <iostream>
#include <string>
using namespace std;

int main() {
    int array[4] = {1, 2, 3, 4};
    int* arr = array;

    for (int i = 0; i < 4; i++) {
        cout << "values array with pointer: " << *(arr + i)  << endl;
    }

    int a = 8;
    for (int i = 0; i < 4; i++) {
        *(arr + i) = *(arr + i ) + a; 
        cout << "last value: " << *(arr + i)  << endl;
    }
   
    *(arr + 2) = 30;
    for (int i = 0; i < 4; i++ ) {
        cout << "modif one values: " << *(arr + i) << endl;
    }
}

