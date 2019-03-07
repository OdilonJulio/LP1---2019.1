#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include <random>

using namespace std;

class Sapo{

public:
	static int distanciaTotal; // Atributo público estático.
	static int getDistanciaTotal;
	int getIdentificador();
	int getDistanciaPercorrida();
	int getQuantidadePulos();
	void setIdentificador(int id);
	void setDistanciaPercorrida(int dp);
	void setQuantidadePulos(int qp);
	void setPulo(int pl);
	int getPulo();
	int pular();
	Sapo(); // Método Construtor
	~Sapo(); // Método Destrutor

private:
	int identificador; //Atributo privado para identificar o sapo.
	int distanciaPercorrida; // Atributo privado para armazenar a distância percorrida por um sapo.
	int quantidadePulos; // Atributo privado para armazenar o número de pulos efetuados por um sapo.
	int pulo;
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<>dis;
};

// MÉTODO CONSTRUTOR // ====================
Sapo::Sapo():rd(), gen(rd()), dis(1, 11){
	setDistanciaPercorrida(0);
	setQuantidadePulos(0);
}
// MÉTODO DESTRUTOR // =====================
Sapo::~Sapo(){
	//Destrutor do método construtor Sapo.
}
// MÉTODO QUE FAZ O SAPO PULAR // ==========
int Sapo::pular(){
	setPulo(round(dis(gen)));
	setQuantidadePulos(+1);
}
// MÉTODOS GETTERS // ======================
int Sapo::getPulo(){
	return pulo;
}
int Sapo::getDistanciaPercorrida(){
	return distanciaPercorrida;
}
int Sapo::getQuantidadePulos(){
	return quantidadePulos;
}
int Sapo::getIdentificador(){
	return identificador;
}
void Sapo::getPulo(int pl){
	pulo = pl;
}
//MÉTODOS SETTERS//=========================
void Sapo::setIdentificador(int id){
	identificador = id;
}
void Sapo::setDistanciaPercorrida(int dp){
	distanciaPercorrida = dp;
}
void Sapo::setQuantidadePulos(int qp){
	quantidadePulos = qp;
}
#endif // CLASSE_H_INCLUDED