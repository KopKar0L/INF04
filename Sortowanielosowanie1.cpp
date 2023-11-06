#include <bits/stdc++.h>
using namespace std;
class sortowanie
{
	private:
		int szukaj(int y)
		{
			int najm = T[y];
			int najm_i = y;
			for(int i=y; i<10; i++)
			{
				if(T[i]<najm)
				{
					najm = T[i];
					najm_i = i;
				}
			}
			return najm_i;
		}
		
		
	public:
		int T[10];
		void sortuj()
		{
			for(int i=0; i<10; i++)
			{
				int x=szukaj(i);
				swap(T[i], T[x]);
				
			}
		}
		void losuj()
		{
			srand(time(NULL));
			for(int i=0; i<10; i++)
				T[i] = rand() % 10;
		}
		void drukuj()
		{
			cout<<"\n		Zawartosc tablicy: \n";
			for(int i=0; i<10; i++)
				cout<<T[i]<<" ";
		}
};
main()
{
	sortowanie a;
	a.losuj();
	a.drukuj();
	a.sortuj();
	a.drukuj();
}