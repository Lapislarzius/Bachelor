#include <iostream>

using namespace std;

void strcpy1(const char* s, char* t)
{
	int i = 0;
	while (t[i] = s[i])
		i++;
}

void strcpy2(const char* s, char* t)
{
	while (*t++ = *s++)
	{
		//s++;
		//t++;
	}
}

int main(void)
{
	char quelle[40] = "Das ist unser Text!";
	char ziel1[40];
	char ziel2[40];

	strcpy1(quelle, ziel1);
	cout << "Ergebnis 1: \"" << ziel1 << "\"\n";

	strcpy2(quelle, ziel2);
	cout << "Ergebnis 2: \"" << ziel2 << "\"\n";

	return 0;
}


//Im ersten Fall soll das i - te Element von s dem i - ten Element von t zugewiesen werden.Dann wird geprüft, ob der Inhalt dieses Elements gleich 0 ist.Solange diese Bedingung nicht erfüllt ist, wird i inkrementiert.
//void strcpy1(char* s, char* t)
//{
//	int i = 0;
//	while (____________________)
//		i++;
//}
//
//Im zweiten Fall wird in der Bedingung der Inhalt der Speicherstelle, auf die die Zeiger s bzw.t zeigen, verwendet.Übergeben wird ein Zeiger auf das 0 - te Element.Dieses wird beim ersten Durchlauf an das 0 - te Element von t zugewiesen und es wird geprüft, ob der Inhalt dieses Elements gleich 0 ist.Solange diese Bedingung nicht erfüllt ist, werden s und t jeweils um 1 erhöht.
//void strcpy2(char* s, char* t)
//{
//	while (____________________)
//	{
//		s++;
//		t++;
//	}
//}

