#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Input banyak nilai = ";
    cin >> n;

    int nilai[n]; // membuat array

    // menyimpan nilai ke array
    for (int i = 0; i < n; i++)
    {
        cout << "Input nilai ke- " << i + 1 << ": ";
        cin >> nilai[i];
    }

    // menampilkan nilai dari array
    for (int i = 0; i < n; i++)
    {
        cout << "Nilai ke-" << i + 1 << ": " << nilai[i] << endl;
    }
}