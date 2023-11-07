#include <bits/stdc++.h>
using namespace std;
class Notatka 
{
	private:
    	static int licznikNotatek;
    	int identyfikator;
    	string tytul;
    	string tresc;

	public:
    	Notatka(string tytul, string tresc):tytul(tytul), tresc(tresc) 
		{
        	licznikNotatek++;
        	identyfikator=licznikNotatek;
    	}

    void wyswietlNotatke() 
	{
        cout<<"Tytul: "<<tytul<<endl;
        cout<<"Tresc: "<<tresc<<endl;
    }

    void wypiszDane() 
	{
        cout<<identyfikator<<";"<<tytul<<";"<<tresc<<endl;
    }

    static int getLicznikNotatek() 
	{
        return licznikNotatek;
    }
};
int Notatka::licznikNotatek = 0;
int main() 
{
    Notatka notatka1("Notatka 1", "Stefan lubi placki.");
    Notatka notatka2("Notatka 2", "Jas ma wieczne problemy z ukladem trawiennym");
    cout<<"Liczba utworzonych notatek: "<<Notatka::getLicznikNotatek()<<endl;
    cout<<"Notatka 1:"<<endl;
    notatka1.wyswietlNotatke();
    cout<<"Dane notatki 1: ";
    notatka1.wypiszDane();
    cout<<"Notatka 2:"<<endl;
    notatka2.wyswietlNotatke();
    cout<<"Dane notatki 2: ";
    notatka2.wypiszDane();
    return 0;
}