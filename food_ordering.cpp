#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct DaftarMakanan
{
    string nama;
    int harga;
};

int main()
{
    DaftarMakanan menuMakanan[] = {
        {"Soto", 15000},
        {"Rawon", 20000},
        {"Pecel", 10000},
        {"Bakso", 12500},
        {"Siomay", 25000},
    };

    vector<pair<string, int>> pesanan;
    string inputNamaMakanan;
    int inputJumlah;
    char nambah;

    do
    {
        string pesanMakanan = "isikan makanan yang dipesan (nama makanan (spasi) jumlah porsi) = ";
        string pesanLagi = "apa ingin pesan makanan yang lain ? (y/n) = ";
        cout << pesanMakanan;
        cin >> inputNamaMakanan >> inputJumlah;
        pesanan.push_back(make_pair(inputNamaMakanan, inputJumlah));

        cout << pesanLagi;
        cin >> nambah;
    } while (nambah == 'y' || nambah == 'Y');

    int totalHarga = 0;

    cout << endl;
    cout << "total harga =";
    cout << endl;

    for (const auto &item : pesanan)
    {
        string nama = item.first;
        int jumlah = item.second;
        int harga = 0;

        for (const auto &makanan : menuMakanan)
        {
            if (makanan.nama == nama)
            {
                harga = makanan.harga;
                break;
            }
        }
        int totalHargaMakanan = harga * jumlah;
        totalHarga += totalHargaMakanan;

        cout << nama << " @" << harga << "*" << jumlah << " = " << totalHargaMakanan << endl;
    }

    cout << endl;

    cout << "total = " << totalHarga << endl;

    return 0;
}