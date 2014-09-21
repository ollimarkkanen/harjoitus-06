/* Tyˆn nimi: Harjoitus 6
* Tekij‰: Olli Markkanen
* Kuvaus teht‰v‰st‰:
*	Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
*	ja lihapiirakan hinnan.
*	Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
*   Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
*   Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.
*   K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
*   ostaa lihapiirakkaa.
* P‰iv‰m‰‰r‰: 16.9.2014
* Versio: 1.0
*/

#include <iostream>
using namespace std;
void main()
{
	int maara;
	int piirakka;
	int tulos;
	cout << "Paljonko sinulla on rahaa?";
	cin >> maara;
	int luku2;
	cout << "Paljonko piirakka maksaa?";
	cin >> piirakka;
	tulos = maara - piirakka;
	if (maara < piirakka)
		cout << "Sinun tulisi paastota.\n";
	if (maara >= piirakka)
		cout << "Sinulla on rahaa " << tulos << " euroa.\n";
	cin.get();
}