#include <iostream>
#include <algorithm>
#include <random>
using namespace std;
int main(){
	//nombre d'essai du joueur
	int essai = 7;
	int value;
	int true_number;
	int chiffres[] = {0,1,2,3,4,5,6,7,8,9};
	//nombre que la machine doit choisir 
	
	random_device rd;
	mt19937 gen(rd());
	int indice;
	uniform_int_distribution<int>distrib(0,9);
	 indice = distrib(gen);
	true_number += chiffres[indice];
	
	//entrée du joueur
	cout<<"Entrer le nombre: "<<endl;
	std::cin>>value;
	//Comparaison
	for (int i = 0;i < essai; i++){
	
	if (value<true_number){
		
		cout<<"Essayer un nombre plus grand"<<endl;
		cout<<"Entrer le nombre: "<<endl;
	std::cin>>value;
	
	}else if(value>true_number){
		
		cout<<"Essayer un nombre plus petit"<<endl;
		cout<<"Entrer le nombre: "<<endl;
	std::cin>>value;
	
	}else{
		
		cout<<"Congrats ! You found the number !"<<endl;
		break;
	}
		if(i == essai - 1 )
		
		cout<<"Nombres de tentatives épuisées ! Vous avez perdu !"<<endl;
	}

	return 0;
}
