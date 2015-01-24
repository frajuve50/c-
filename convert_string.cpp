//CONVERTIRE UNA STRINGA
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void minuscolo(string& s)
{
	transform(s.begin(), s.end(), s.begin(),(int(*)(int)) tolower);
}
void maiuscolo(string& s)
{
	transform(s.begin(), s.end(), s.begin(),(int(*)(int)) toupper);
}
int main()
{
string s;
int scelta;
cout<<"Inserisci la stringa che vuoi convertire\n";
cin>>s;
cout<<"Come convertire la stringa:\n1)Per convertire la stringa in maiuscolo digita 1\n2)Per convertire la stringa in minuscolo digita 2\n";
cin>>scelta;
if(scelta!=1 && scelta!=2)
{
	cout<<"Scelta non valida\n";
	return 0;
}
if(scelta==1)
	maiuscolo(s);
if(scelta==2)
	minuscolo(s);
cout<<"La tua stinga è diventata:\n"<<s<<endl;
}