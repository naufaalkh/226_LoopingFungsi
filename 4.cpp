#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas=300, hNB=250, hCompass=200, hPuma=150, hNike=350;

void input(){
    cout << "Masukkan jumlah Adidas = ";
    cin >>nAdidas;

    cout << "Masukkan jumlah Puma = ";
    cin >> nPuma;

    cout << "Masukkan jumlah NB = ";
    cin >> nNB;

    cout << "Masukkan jumlah Compass = ";
    cin >> nCompass;

    cout << "Masukkan jumlah Nike = ";
    cin >> nNike;
}

int totalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nCompass * hCompass) + (nNike * hNike);
}

void Display(){

    cout << endl;
    cout << "==============" << endl;
    cout << "Jumlah Puma = " << nPuma << endl;
    cout << "Jumlah Adidas = " << nAdidas << endl;
    cout << "Jumlah NB = " << nNB << endl;
    cout << "Jumlah Compass = " << nCompass << endl;
    cout << "Jumlah Nike = " << nNike << endl;
    cout << endl;
    cout << "Total Harga = Rp." << totalHarga() << endl;
}

int main()
{
    input();
    Display();

    //cout << "Apakah anda ingin mengulangi (y/n)?";
    
}

