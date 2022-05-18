#include <iostream>

struct Dosen
{
    std::string nama;
    std::string nik; // nik tidak akan dikenai operasi bilangan
    std::string matkul;
};

int main()
{
    struct Dosen dosen1;
    struct Dosen dosen2;

    // memasukkan data dosen1
    dosen1.nama = "Ahmad Soebardjo";
    dosen1.nik = "00012253499";
    dosen1.matkul = "Komputer Grafis";

    // memasukkan data dosen2
    dosen2.nama = "Annie Soebandono";
    dosen2.nik = "00078999780";
    dosen2.matkul = "Analisis Lingkungan";

    // membaca data dosen1
    std::cout << dosen1.nama << std::endl;
    std::cout << dosen1.nik << std::endl;
    std::cout << dosen1.matkul << std::endl;

    std::cout << "-----------------------" << std::endl;

    // membaca data dosen2
    std::cout << dosen2.nama << std::endl;
    std::cout << dosen2.nik << std::endl;
    std::cout << dosen2.matkul << std::endl;
    return 0;
}