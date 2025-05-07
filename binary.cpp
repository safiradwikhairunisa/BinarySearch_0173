#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyknya element pada array (maksimal 10): ";
        cin >> nPanjang;
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah element tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }

    cout << "\n==============================\n";
    cout << "    Masukkan element array      \n";
    cout << "================================\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i+1) << " = ";
        cin >> element [i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element [j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    }while (pass <= nPanjang - 1);
}

void display()
{
    cout << "\n==========================================\n";
    cout << "   Element array setelah diurutkan (Asc)    \n";
    cout << "\n==========================================\n";
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " -->";
        }
    }
    cout << endl;
}