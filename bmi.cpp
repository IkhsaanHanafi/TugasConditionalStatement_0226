#include <iostream>
using namespace std;


float hitung_bmi(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

void input_data(float berat, float tinggi){
    cout << "Masukkan berat badan (Kg) = ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m) = ";
    cin >> tinggi;
}
