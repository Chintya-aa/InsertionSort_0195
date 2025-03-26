#include <iostream>
using namespace std;

int arr [20];//membuat array dengan panjang data 20
int n;// membuat variabel inputan n

void input()
{//prosedur input
    while(true)
    {
        cout<<n;// "memasukkan jumlah data pada array :";// membuat imputan jumlah element array
        cin>>n;// memanggil variabel imputan n
 
    if (n<=20)
        {// membuat kondisi n tidak lebih dari 20 
        break;
         }
    else
        {
        cout<<"\narray yang ada masukkan maksimal 20 elemen.\n",// menampilkan pesan jika data lebih dari 20
        }
    }
        cout;//membuat jatak perbaris program
        cout<<"===================="
    <<endl;// membuat tampilan susunan data element array"<<endl;
    cout<<"====================" << 
    endl;
for (int i=0;i<n;i++)//menggunakan pengulangan for untuk menyimpan data pada array
    {
        cout<<"data ke-"<<(i+1)<<":";//masukkan atau mengimputkan nilai data n kedalam array arr
    }
}

void inserttionSort()
{// procedure insertionSort

    int temp ; // membuat variabel data temporer atau menyimpan sementara

