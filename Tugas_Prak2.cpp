#include <iostream>
using namespace std;

int jariJari, tinggi;
void luasPermukaanTabung(int &jariJari, int &tinggi);
void luasSelimutTabung(int &jariJari, int &tinggi);
void volumeTabung(int &jariJari, int &tinggi);

int main(){
    
    cout << "\n--------------------------------------------------" << endl;
    cout << "                  MODUL FUNCTION                  " << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "                PROGRAM COMBINASI                 " << endl;
    cout << "                  PROGRAM TABUNG                  " << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "Masukkan Nilai Jari-Jari Tabung : ";
    cin >> jariJari;
    cout << "Masukkan Nilai Tinggi Tabung : ";
    cin >> tinggi;
    cout << endl;

    cout << "--------------------------------------------------" << endl;
    luasPermukaanTabung(jariJari, tinggi);
    luasSelimutTabung(jariJari, tinggi);
    volumeTabung(jariJari, tinggi);
    cout << "------------------------------------------------ --" << endl;

    return 0;
}

void luasPermukaanTabung(int &jariJari, int &tinggi){
    const float phi = 3.14;
    float luasPermukaan;
    luasPermukaan = 2 * phi * jariJari * (jariJari + tinggi);
    
    cout << "Nilai Luas Permukaan Tabung    :" << luasPermukaan << endl;
}
void luasSelimutTabung(int &jariJari, int &tinggi){
    const float phi = 3.14;
    float luasSelimut;
    luasSelimut = 2 * phi * jariJari * tinggi;

    cout << "Nilai Selimut Tabung :" << luasSelimut << endl;
}
void volumeTabung(int &jariJari, int &tinggi){
    const float phi = 3.14;
    float volume;
    volume = phi * jariJari * jariJari * tinggi;
    
    cout << "Nilai Volume Tabung  :" << volume << endl;
}