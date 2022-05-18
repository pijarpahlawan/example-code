#include <iostream>

struct Buku
{
    // structure member
    std::string judul;
    std::string penulis;
    int harga;
} buku; // variabel structure ini bersifat global

int main()
{
    // menginisialisasi nilai
    buku.judul = "Machine Learning";
    buku.penulis = "Suyanto";
    buku.harga = 129000;

    // membaca data
    std::cout << buku.judul << std::endl;
    std::cout << buku.penulis << std::endl;
    std::cout << buku.harga << std::endl;

    return 0;
}