#include <iostream>
using namespace std;

int main()
{
    int array[7] = {12, 32, 45, 67, 52, 7, 46}, indeks, pengganti;

    // mencetak isi array sebelum diganti
    for (int i = 0; i < 7; i++)
    {
        cout << "Nilai array ke-" << i + 1 << ": " << array[i] << endl;
    }

    cout << "Array nilai ke berapa yang ingin diganti? : ";
    cin >> indeks;
    cout << "Diganti dengan: ";
    cin >> pengganti;

    array[indeks - 1] = pengganti;

    // mencetak isi array sebelum diganti
    for (int i = 0; i < 7; i++)
    {
        cout << "Nilai array ke-" << i + 1 << ": " << array[i] << endl;
    }

    return 0;
}