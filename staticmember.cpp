#include <iostream>
using namespace

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
};
void Mahasiswa::printAll() { //prosed
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
