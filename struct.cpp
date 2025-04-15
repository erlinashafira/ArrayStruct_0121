#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
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
    cout << "Masukkan ALAMAT = ";
    cin >> mhs.alamat;

    cout << "NIM = " << mhs.nim << endl;
    cout << "NAMA = " << mhs.nama << endl;\
    cout << "ALAMAT = " << mhs.alamat << endl;
}