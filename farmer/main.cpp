/*#include <iostream>

using namespace std;

class Zwierze
{
    public:
    // atrybuty
    string gatunek;
    string imie;
    int wiek;
    //metoda
    void dodaj_zwierze()
    {
        cout << "dodawnaie nowego zwierzecie do bazy "<<endl;
        cout << "podaj gatunek: ";
        cin>> gatunek;
        cout << "podaj imie: ";
        cin>> imie;
        cout << "podaj wiek: ";
        cin>> wiek;
    }
    void daj_glos()
    {
        if (gatunek=="kot") cout<<imie<<" lat "<<wiek<<" mial"<<endl;
        else if (gatunek=="koza") cout<<imie<<" lat "<<wiek<<" beee"<<endl;
        else if (gatunek=="krowa") cout<<imie<<" lat "<<wiek<<" muuu"<<endl;
        else cout<< "nieznany gatunek";
    }
};
int main()
{
    Zwierze z1;
    z1.dodaj_zwierze();
    z1.daj_glos();

    Zwierze z2;
    z2.dodaj_zwierze();
    z2.daj_glos();

    return 0;
}
*/
#include <iostream>

using namespace std;

class Samochod
{
    public:
    // atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;
    //metoda
    void wczytaj()
    {
        cout << "dodawnaie nowego samochodu do bazy "<<endl;
        cout << "podaj marke: ";
        cin>> marka;
        cout << "podaj model: ";
        cin>> model;
        cout << "podaj rocznik: ";
        cin>> rocznik;
        cout << "podaj przebieg: ";
        cin>> przebieg;
    }
    void wypisz()
    {
        if (marka=="mazda ") cout<<marka<<model<<" rocznik "<<rocznik<<" przebieg "<<przebieg<<endl;
        else if (marka=="mercedes ") cout<<marka<<model<<" rocznik "<<rocznik<<" przebieg "<<przebieg<<endl;
        else if (marka=="bmw ") cout<<marka<<model<<" rocznik "<<rocznik<<" przebieg "<<przebieg<<endl;
        else cout<< "nieznany marka"<<endl;
    }
};
int main()
{
    Samochod z1;
    z1.wczytaj();
    z1.wypisz();

    Samochod z2;
    z2.wczytaj();
    z2.wypisz();

    return 0;
}
