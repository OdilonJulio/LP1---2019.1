#include <iostream>
#include "classe.h"

using namespace std;


/* Atributo público estático "distância total"
da corrida inicializado com o valor 500.*/
int Sapo::distanciaTotal = 500;


int main(){
	Sapo *sapoCururu = new Sapo(1);
	Sapo *sapoBoi = new Sapo(2);
	Sapo *sapoBrejeiro = new Sapo(3);

	do{
		sapoCururu->pular();
		sapoBoi->pular();
		sapoBrejeiro->pular();
	/*	
	} while(sapoCururu->getDistanciaPercorrida() >= distanciaTotal||
			sapoBoi->getDistanciaPercorrida() >= distanciaTotal||
			sapoBrejeiro->getDistanciaPercorrida() >= distanciaTotal);
	*/
		
	return 0;
}
