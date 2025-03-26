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
    int j, i;// membuat variabel j sebagai penanda

    for(i=1;i<=n-1;i++)
    {//step 1

        temp=arr[i];//step 2
        j=i-1;//step3
        while (j>=0&& arr [j] > temp)// step 4
        {
            arr[j+1]=arr[j] ;//step 4a
            j--;//step 4b
        }

        arr[j+1] = temp ; // step 5
    }
}

void display ()
{ 
    cout<< endl;// output baris kosong
    cout<<"===================="<<
    cout<<"total pass="<<n-1<<
    endl;// cout elemant movement
    cout<<"===================="<<
    endl;//output ke layar
    cout<<"element array yang telah tersusun"<< endl;// output ke layar
    cout<<"===================="<<
    endl;//output ke layar

    for (int j=0;j <n;j++)
    {//lopping dengan j di mulai dari 0 hingga n-1
        cout<<arr [j]<<endl;//output ke layar
    }

    cout<<endl;?? output baris kosong
}




