#include <iostream>
using namespace std;


float hitung_bmi(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

void input_data(float &berat, float &tinggi){
    cout << "Masukkan berat badan (Kg) = ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m) = ";
    cin >> tinggi;
}

string status_bmi(float bmi){
    if(bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main(){
    float berat, tinggi, bmi;
    input_data(berat, tinggi);
    bmi = hitung_bmi(berat, tinggi);    //itung bmi
    
    cout << "Nilai BMI = " << bmi << endl; //menampilkan output
    cout << "Kondisi = " << status_bmi(bmi) << endl;
}