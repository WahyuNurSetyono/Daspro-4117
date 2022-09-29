#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Wahyu Nur Setyono \nA11.2022.14633 \nA11-4117" << endl;
    cout << endl;

    int x;
    cout << "Masukkan Bilangan Anda : ";
    cin >> x;

    cout << "1. Bilangan genap kurang antara 25-50?" << endl;
    if (x % 2 == 0 && 25 < x < 50) {
        cout << "=Bilangan Sesuai" << endl;
    }
    else {
        cout << "=Bilangan Tidak Sesuai" << endl;
    }
    cout << endl;

    cout << "Bilangan ganjil lebih dari 13 atau kurang dari 5?" << endl;
    if (x % 2 ==1 && x > 13 || x < 5) {
        cout << "=Bilangan Sesuai" << endl;
    }

    else {
        cout << "=Biilangan Tidak Sesuai" << endl;
    }
    cout << endl;

    cout << "Bilangan genap antara 25-50 atau Bilangan ganjil antara 3-15" << endl;
    if (x % 2 == 0 && 25 < x < 50 && x % 2 == 1 && 3 < x < 15) {
        cout << "=Bilangan Sesuai" << endl;
    }
    else {
        cout << "=Bilangan Tidak Sesuai" << endl;
    }
    cout << endl;
    cout << endl;

    cout << "Jurusan : \n1. Teknik Informatika \n2. Sistem Informasi \n3. DKV" << endl;
    int y;
    cout << "Masukkan Nomor Jurusan Anda : ";
    cin >> y;

    if (y == 1) {
        cout << "Jurusan Anda adalah Teknik Informatika";
    }
    else if (y == 2) {
        cout << "Jurusan Anda adalah Sistem Informasi";
    }
    else if (y == 3) {
        cout << "Jurusan Anda adalah DKV";
    }
    else {
        cout << "Jurusan Tidak Diketahui";
    }
    cout << endl;
    return 0;
}
