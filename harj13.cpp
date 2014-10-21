/*Ensin kysyy etunime‰ ja sitten sukunime‰. Sitten ohjelma yhdist‰‰ ne yhdeksi merkkijonoksi mutta ensin etunimen per‰‰n lis‰t‰‰n v‰lilyˆnti, jotta nimi ja sukunimi eiv‰t tulostu yhdess‰.*/
#include <iostream> 
using namespace std;
#include <cstring>
int main()
{
	char jono1[30];
	char jono2[30];

		cout << "Syˆt‰ Etunimi: ";
		cin >> jono1;

		cout << "Syˆt‰ Sukunimi: ";
		cin >> jono2;

		strcat_s(jono1, " ");
		strcat_s(jono1, jono2);
		
		cout << "Nimesi oli: " << jono1 << " ";

		return 0;


}
