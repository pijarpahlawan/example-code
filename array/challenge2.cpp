#include <iostream>
using namespace std;

int main()
{
    int panjang;

    cout << "Masukkan panjang array: ";
    cin >> panjang;

    // deklarasi array dengan ukurannya
    int array[panjang];

    // menginisialisasi array
    for (int i = 0; i < panjang; i++)
    {
        cout << "Masukkan nilai array ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    // menyeleksi bilangan genap dan ganjil
    for (int i = 0; i < panjang; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << "Nilai array ke-" << i + 1 << ": " << array[i] << " bilangan genap" << endl;
        }
        else
        {
            cout << "Nilai array ke-" << i + 1 << ": " << array[i] << " bilangan ganjil" << endl;
        }
    }

    return 0;
}