#include<iostream>
#include<string>

using namespace std;

int main()
{
	int iAlter = 0;
	string strVorname = "";
	string strNachname = "";
	string strVorNachname = "";
	string strWhiteSpace = " ";
	//Ein- und Ausgabe einer Zeichenkette

	cout << "Bitte geben Sie Ihr Alter ein:" << endl;
	cin >> iAlter;

	cin.ignore();

	cout << "Geben Sie bitte ihren Vornamen ein:" << endl;

	//cin >> strVorname;//cin liest nur bis zum ersten white Space ein!!

	getline(cin, strVorname);
	strVorname.push_back(' ');

	//cout << "Vorname: " << strVorname;

	//Verknüfung von Zeichenketten
	cout << "Bitte geben Sie jetzt Ihren Nachnamen ein: ";

	getline(cin, strNachname);
	//Verknüpfen der Zeichenketten mit einem '+' !!!!!
	strVorNachname = strVorname + " " + strNachname;
	cout << "Ihr Name lautet: " << strVorNachname << endl;
	for (int i = 0; i < strVorNachname.size(); i++)
	{
		cout << strVorNachname[i] << endl;
	}
	cout << "----------------------------------------------------" << endl;

	for (int i = 0; i < strVorNachname.size(); i++)
	{
		cout << strVorNachname[i] << endl;
		cout << strWhiteSpace;
		strWhiteSpace.push_back(' ');
	}


	return 0;
}