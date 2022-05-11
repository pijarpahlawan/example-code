#include <iostream>
using namespace std;

int main()
{
    string buah[5] = {"Apel", "Jeruk", "Jambu", "Durian", "Mangga"};

    for (int i = 0; i < 4; i++)
    {
        cout << "Nilai ke-" << i + 1 << ": " << buah[i] << endl;
    }
}