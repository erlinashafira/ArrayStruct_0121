#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    sring kota;
};

struct mahasiswa{
string nim;
string nama;
detailAlamat alamat;
};

int main(){
      //membuat object struct mahasiswa
      mahasiswa mhs;

      //mengaksesstruct mahaasiswa
      mhs.nim = "20201400";
      mhs.nama = "Abra";
      mhs.alamat = "Kasihan";

      cout << "Masukkan NIM = ";
      cin >> mhs.nim;
      cout << "Masukkan Nama = ";
      cin >> mhs.nama;
      cout << "Masukkan ALAMAT DESA = ";
      cin >> mhs.alamat.desa;
      cout << "Masukkan ALAMAT KOTA = ";
      cin >> mhs.alamat.kota;

      cout << endl;
      cout << "Data Mahasiswa " <, endl;

      cout << "NIM = " << mhs.nim << endl;
      cout << "ANAMA = " << mhs.nama << endl;
      cout << "ALAMAT DESA = " <<mhs.alamat.desa << endl;
      cout << "ALAMAT KOTA = " <<mhs.alamat.kota << endl;

}