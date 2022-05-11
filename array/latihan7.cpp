#include <iostream>
using namespace std;

int main()
{
    int i, n, jumlah = 0, terkecil, terbesar;

    cout << "Input banyak nilai: ";
    cin >> n;

    int nilai[n]; // membuat array

    for (i = 0; i < n; i++)
    {
        cout << "Input banyak nilai: ";
        cin >> nilai[i];
        jumlah = jumlah + nilai[i];
        if (i == 0)
        {
            terkecil = nilai[0];
            terbesar = nilai[0];
        }
        if (nilai[i] < terkecil)
        {
            terkecil = nilai[i];
        }
        if (nilai[i] > terbesar)
        {
            terbesar = nilai[i];
        }
    }

    cout << "\nData Nilai";
    for (i = 0; i < n; i++)
    {
        cout << " " << nilai[i];
    }

    cout << "\nJumlah nilainya adalah: " << jumlah;
    cout << "\nNilai terkecil: " << terkecil;
    cout << "\nNilai terbesar: " << terbesar;
}