#include<stdio.h>

// Funktions-Prototypen
int ggt(int Zahl1, int Zahl2);
int eingabeZahl;
int ausgabeErgebnis (int z1, int z2);

//Hauptprogramm
int main () {

	/*
	* Der ggT wird über einen rekursiven Aufruf ermittelt
	*/

	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Funktionsaufruf
  ausgabeErgebnis(eingabeZahl(),eingabeZahl());  

	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
int ggt(int Zahl1, int Zahl2) {
  if (Zahl1 == Zahl2)
      return Zahl1;
  else if (Zahl1 < Zahl2)
      return ggt(Zahl1-Zahl2, Zahl2);
  else 
      return ggt(Zahl1, Zahl2-Zahl1);
}

int eingabeZahl() {
  //Variablendeklaration
  int z;
  
  //Eingabe(aufforderung)
  printf("\n\nEingabe: ");
  scanf("%d", &z);
  
  //Ausgabe
  return z;
}

float ausgabeErgebnis(int z1, int z2) {
  //Ergebnisausgabe
  printf("\nDer ggT der Zahlen %d und %d lautet: %d\n\n",z1,z2,ggt(z1,z2));
}
