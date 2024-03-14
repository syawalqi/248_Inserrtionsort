#include <iostream>
using namespace std;


int arr[40];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 40)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
        }
    }
    cout << endl;
    cout << "================" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << "; ";
        cin >> arr[i];
    }

}

void insertionsort() {
    int i, j, temp;
    
    for (i = 1; i <= n - 1; i++) {// step 1
        temp = arr[i]; //step 2

        j = i - 1; //step3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; // j--  step 4b
        }

        arr[j + 1] = temp;// step5
    }
}


void display() {
    cout << endl;
    cout << "================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass =" << n - 1 << endl;
    cout << endl;
    cout << endl;
}


int main()
{
    input(); //memanggil prosedur untuk menginput data 
    insertionsort(); //memanggil prosedur bubblesort
    display(); // memanggil prosedur untuk menampilkan data yang telah diproses
    system("pause");

    return 0;

    std::cout << "Hello World!\n";
}

