#include <iostream>
using namespace std;

int faktorial(int a){
    int hasil = 1;
    if (hasil < 0){
        cout << "Nilai yang anda masukkan salah.";
    } else{
        for (int i = 1; i <= a; i++){
            hasil *= i;
        }
    }
    return hasil;
}
void perhitungan(){
    int n, r, kombinasi;
    cout << "Masukkan Nilai n : ";
    cin >> n;
    cout << "Masukkan Nilai r : ";
    cin >> r;
    kombinasi = faktorial(n) / (faktorial(r) * faktorial(n - r));
    cout << "Hasil Combinasi " << n << "C" << r << " adalah " << kombinasi << endl;
}

int main(){

    char lanjut;

    do{
    system("cls");
    cout << "\n--------------------------------------------------" << endl;
    cout << "                  MODUL FUNCTION                  " << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "                PROGRAM COMBINASI                 " << endl;
    cout << "--------------------------------------------------" << endl;

    perhitungan();

    cout  << endl << endl;
    cout << "Ingin melanjutkan perhitungan? <y/n> ";
    cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}