#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
string nim;
string nama;
detailAlamat alamat;
};

int main(){
    //membuat object struct mahasiswa
    mahasiswa mhs[2];

    for(int n = 0;n < 2; n++){
     cout  << "Data Ke-" << n+1 << endl;
     cout << "Masukkan NIM = ";
     cin >> mhs[n].nim;
     cin.ignore();
     cout << "Masukkan NAMA = ";
     getline (cin , mhs[n].nama);
     cout << "Masukkan ALAMAT DESA = ";
     cin >> mhs[n].alamat.desa;
     cout << "Masukkan ALAMAT KOTA = ";
     cin >> mhs[n].alamat.kota;

     cout << endl;
     cout << "Data Mahasiswa " << endl;

     for(int n = 0;n < 2; n++){
     cout << "NIM = " << mhs[n].nim << endl;
     cout << "NAMA = " << mhs[n].nama << endl;
     cout << "ALAMAT DESA = " <<mhs[n].alamat.desa << endl;
     cout << "ALAMAT KOTA = " <<mhs[n].alamat.kota << endl;
    }
}
}