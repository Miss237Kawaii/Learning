#include<iostream>
#include <ctime>
#include <string>
#include <random>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
	// mise en place des param�tres qui constituent un mot de passe
	int longueur = 8;
bool utiliserMajuscules = true;
bool utiliserMinuscules = true;
bool utiliserChiffres = true;
bool utiliserSpeciaux = true;
	string password ;
	
	// caract�res
	string minuscules = "abcdefghijklmnopqrstuvwxyz";
string majuscules = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string chiffres = "0123456789";
string speciaux = "!@#$%^&*()-_=+";

string caracteres = "";

if (utiliserMinuscules)
    caracteres += minuscules;

if (utiliserMajuscules)
    caracteres += majuscules;

if (utiliserChiffres)
    caracteres += chiffres;

if (utiliserSpeciaux)
    caracteres += speciaux;
 //Production d'un nombre al�atoire
random_device rd;
  //G�n�rateur de nombres al�atoires avec l'algode Mersenne Twister
mt19937 gen(rd());
    // Disstribution uniforme
uniform_int_distribution<> dist(0, caracteres.size() - 1);

     // it�ration
     for (int i = 0; i < longueur; i++){
     	password +=caracteres[dist(gen)];
	 }

	 cout <<"votre mot de passe est : "<<password <<endl;
	return 0;
}
