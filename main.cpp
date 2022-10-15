#include <iostream>
using namespace std;

void perkenalan_biasa(){

    string nama = "Jonathan";
    int umur = 19;
    
    cout << " Perkenalkan nama saya " << nama << " dengan umur "<< umur << endl;
    
}

void perkenalan (string nama_fungsi, int umur_fungsi){
    
    string nama = nama_fungsi;
    int umur = umur_fungsi;
    
    cout << " perkenalkan nama saya " << nama << " dengan umur " << umur << endl;
    
}

int penjumlahan (int angka1, int angka2){
    
    int angka_dalam_fungsi1 = angka1;
    int angka_dalam_fungsi2 = angka2;
    
    return angka_dalam_fungsi1 + angka_dalam_fungsi2;
}

int main(){
    
    perkenalan_biasa();
    perkenalan_biasa();
    perkenalan_biasa();
    
    perkenalan("Jonathan", 19);
    perkenalan("yudha", 19);
    perkenalan("ayyub", 19);
    
    int angka = penjumlahan (7, 7) + penjumlahan (8, 8);
    cout << penjumlahan (7, 7) << endl;
    cout << penjumlahan (8, 8) << endl;
    
    cout << angka;

    
    
}
