#include <iostream>
#include <string>
#include <ctime>
#include <memory>
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

    string tl;
    cout << "masukan tanggal lahir (YYYY-MM-DD): ";
    cin >> tl;

    int year = stoi(tl.substr(0, 4));
    int month = stoi(tl.substr(5, 2));
    int day = stoi(tl.substr(8, 2));

    unique_ptr<tm> birth = make_unique<tm>();
    birth->tm_year = year - 1900;
    birth->tm_mon = month - 1;
    birth->tm_mday = day;

    time_t now = time (0);
    tm* current = localtime(&now);

    int umur_tahun = (current->tm_year + 1900) - year;
    int umur_bulan = ((current->tm_year + 1900) - year)*12;
    int umur_hari = (current->tm_mday);



    if((current->tm_mon + 1 == month) && (current->tm_mday < day)) {
        umur_tahun--;
    }

    if((current->tm_mday < day)) {
        umur_bulan--;
    }

    cout << "you are " << umur_tahun << "years old !! " << umur_bulan << " " << umur_hari << endl; 
}

