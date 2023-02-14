#include <iostream>
using namespace std;

void search (string * siswa, int size)
{
    string name;

    for (;;)
    {
        cout<<"👇 Cari Nama Mahasiswa 👇" ;
        cout<<endl;
        getline(cin, name);
        if (name == "END") break;

        int awal = 0;
        int akhir = size - 1;
        bool friends = false;

        while(!friends && awal <= akhir)
        {
            int middle = (awal + akhir)/2;
            if (siswa[middle] == name)
            {
                friends = true;
                cout<<siswa[middle]<<" adalah Mahasiswa Universitas Indonesia Mandiri"<<endl;
            }
            else if (siswa[middle] > name)
                akhir = middle - 1;
            else
                awal = middle + 1;
        }
    }
}

int main() // menguji fungsi search()
{
cout << "## Tugas 13 Sekuensial Array ##" << endl;
cout<<"======================================"<<endl;
cout<<endl;
cout<<"nama : Efi ero sofia"<<endl;
cout<<"nim  : 5520122014"<<endl;
cout<<"prodi : informatika "<<endl;
cout<<endl;
cout<<"======================================"<<endl;
cout<<endl;

    string siswa[] = {"bayu", "warou", "eko", "Gustiawan", "ucup"};
       search(siswa, 6);
}
