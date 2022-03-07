#include <iostream>

using namespace std;

//komponen
struct Mahasiswa{
 string nama, fakultas, jurusan;
 Mahasiswa *next;


};

Mahasiswa *head, *tail, *cur, *newNode, *del;

//create single linked list
void createSingleLinkedList(string nama, string fakultas, string jurusan){
    head = new Mahasiswa();
    head->nama = nama;
    head->fakultas = fakultas;
    head->jurusan = jurusan;
    head->next = NULL;
    tail = head;

}

//tambah awal single linked list
void addFirst(string nama, string fakultas, string jurusan){
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->fakultas = fakultas;
    newNode->jurusan = jurusan;
    newNode->next = head;
    head = newNode;
}

//tambah akhir single linked list
void addLast(string nama, string fakultas, string jurusan){
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->fakultas = fakultas;
    newNode->jurusan = jurusan;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

//delete First
void removeFirst(){
    del = head;
    head = head->next;
    delete del;

}

//delete Last
void removeLast(){

    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;

}

//print single linked list
void printSingleLinkedList(){
cur = head;
    while( cur != NULL ) {
        cout << "Nama Mahasiswa :" << cur->nama << endl;
        cout << "Fakultas Mahasiswa :" << cur->fakultas << endl;
        cout << "Jurusan Mahasiswa  :" << cur->jurusan << endl;

        cur = cur->next;

    }

}

int main(){

    createSingleLinkedList("Nurikbal", "Teknik", "Informatika" );
   
    printSingleLinkedList();
   
    cout << "\n\n" << endl;

    addFirst("Fadhil", "Teknik", "Mesin" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Agus", "Teknik", "Si" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeFirst();

    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("roro", "Teknik", "Arsitektur" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeLast();

    printSingleLinkedList();

    cout << "\n\n" << endl;



}
 