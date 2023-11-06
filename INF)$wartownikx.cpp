#include <bits/stdc++.h>
using namespace std;
main()
{
	srand(time(NULL));
	cout<<"Podaj element, ktory ma byc szukany(liczb z zakresu 1-100): ";
	int x;
	cin>>x;
	int n;
	cout<<"Podaj rozmiar tablicy(nie mniejsza ni 50 elementow): ";
	cin>>n;
	if(n>=50)
	{
		system('cls');
		int T[n+1];
		for(int i=0; i<n; i++)
		{
			T[i] = rand() % 100;
		}
		T[n] = x;
		for(int i=0; i<=50; i++)
		{
			if()
			{
				
			}
			else
			{
				
			}
		}
	}
	else
	{
		system('cls');
		cout<<"Tablica nie zawiera 50 elementow!";
		return 0;
	}
}