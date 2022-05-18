#include <iostream>

struct Mahasiswa
{
    std::string nama;
    std::string nim;
    float nilai; // nilai bisa berupa bilangan pecahan
};

void inputDataMahasiswa(int num)
{
    // variabel array struct di dalam suatu fungsi
    struct Mahasiswa mhs[num];

    // memasukkan data
    std::cout << "INPUT DATA" << std::endl;
    for (int i = 0; i < num; i++)
    {
        std::cout << "MAHASISWA KE-" << i + 1 << std::endl;
        std::cout << "Masukkan nama : ";
        std::cin.ignore();
        std::getline(std::cin, mhs[i].nama);
        std::cout << "Masukkan nim  : ";
        std::getline(std::cin, mhs[i].nim);
        std::cout << "Masukkan nilai: ";
        std::cin >> mhs[i].nilai;
    }

    // mengeluarkan data
    std::cout << "\nOUTPUT DATA" << std::endl;
    for (int i = 0; i < num; i++)
    {
        std::cout << "MAHASISWA KE-" << i + 1 << std::endl;
        std::cout << "Nama : " << mhs[i].nama << std::endl;
        std::cout << "Nim  : " << mhs[i].nim << std::endl;
        std::cout << "Nilai: " << mhs[i].nilai << std::endl;
    }
}

int main()
{
    int jumlah;
    std::cout << "Masukkan jumlah mahasiswa: ";
    std::cin >> jumlah;
    inputDataMahasiswa(jumlah);
    return 0;
}