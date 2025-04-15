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
      mahasiswa mhs;

      cout << "Masukkan NIM = ";
      cin >> mhs.nim;
      cin.ignore();
      cout << "Masukkan NAMA = ";
      getline (cin , mhs.nama);
      cout << "Masukkan ALAMAT DESA = ";
      cin >> mhs.alamat.desa;
      cout << "Masukkan ALAMAT KOTA = ";
      cin >> mhs.alamat.kota;

      cout << endl;
      cout << "Data Mahasiswa " << endl;

      cout << "NIM = " << mhs.nim << endl;
      cout << "NAMA = " << mhs.nama << endl;
      cout << "ALAMAT DESA = " <<mhs.alamat.desa << endl;
      cout << "ALAMAT KOTA = " <<mhs.alamat.kota << endl;

}