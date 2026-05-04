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