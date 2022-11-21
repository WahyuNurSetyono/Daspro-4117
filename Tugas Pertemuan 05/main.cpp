#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Nama : Wahyu Nur Setyono \nNIM :A11.2022.14633 \nKelp. : A11 - 4117" << endl;
    printf ("TUGAS OPERATOR ARITMATIKA");
    cout << endl;

    cout << "Diketahui sebuah Lingkaran dengan diameter 20 cm. \nTentukan Luas Lingkaran tersebut!" << endl;

    int D, d, l;
    D = 20;
    d = 2;
    l = 314;
    float pi, r, hasil;
    pi = 3.14;
    r = 10;

    printf ("Jawab : ");
    cout << "\nD = " << D;
    cout << "\nr = ";
    cout << D / d << endl;

    cout << "Luas Lingkaran = pi x r x r" << endl;
    printf ("= 3.14 x 10 x 10");
    hasil = pi * r * r;
    cout << "\n= " << hasil << endl;
    cout << "Jadi, Luas Lingkaran tersebut adalah " << l << endl;

    //add
    string s;
    int rt;

    cout << "\nYour Suggestioon : ";
    cin >> s;
    cout << "Suggestion : " << s << endl;

    printf ("Your Rating : ");
    scanf ("%d", &rt);
    printf ("Rating : %d", rt);
    cout << "\nThank You So Much" << endl;

    return 0;
}
