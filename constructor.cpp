#include <iostream>
using namespace std;

class Mahasiswa { 
public:
    Mahasiswa();
};

Mahasiswa::Mahasiswa() {
    cout << "Constructor Mahasiswa dipanggil" << endl;
};

int main() {
    Mahasiswa mhs;
    return 0;
}