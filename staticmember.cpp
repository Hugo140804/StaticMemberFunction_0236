#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa
    
public:
    static int nim;
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();

    //pembuatan constructor Mahasiswa dengan parameter pnama
    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }

};

//memberi value ke variabel nim dari calss Mahasiswa
int Mahasiswa::nim = 10;

void Mahasiswa::setID() { //prosedur setID untuk memberikan nilai id
    id = nim;
    nim++;
}

void Mahasiswa::printAll() { //prosedur printAll untuk menampilkan nilai
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout << endl;
}

int main () {
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Joko Purbo");
    Mahasiswa mhs4("Andi kurniawan");
    
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}
