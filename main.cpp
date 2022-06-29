#include <iostream>

using namespace std;

class Towary {

    public:

        string nazwa;
        double cena;
        int waga;
        char polka;

    void promocja(int p)
    {

        switch(p)
        {
        case 1:
                cout << "PROMOCJA 10%" << endl;
                break;
        case 2:
                cout << "PROMOCJA 20%" << endl;
                break;
        case 3:
                cout << "PROMOCJA 30%" << endl;
                break;
        default:
                cout << "Nie ma takiego wariantu promocji" << endl;
        }



    }
};



int main()
{
    Towary kawa;

    kawa.nazwa = "MOCCA";
    kawa.cena = 15.50;
    kawa.waga = 250;
    kawa.polka = 'A';

    Towary herbata;

    herbata.nazwa = "YELLOW";
    herbata.cena = 10.50;
    herbata.waga = 150;
    herbata.polka = 'B';

    cout << kawa.nazwa << endl;
    cout <<herbata.nazwa << endl;

    Towary promo;

    int p;
    cout << "Wariant promocji (1, 2, 3): ";
    cin >> p;

    promo.promocja(p);


    return 0;
}
