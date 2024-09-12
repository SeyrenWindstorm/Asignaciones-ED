#include<iostream>
#include<string.h>
using namespace std;

class Insecto
{
protected:
char Nombre[30];
int NumPatas;
float TamCabeza, TamTorax, TamAbdomen;
public:
Insecto(char *, int, float, float, float);
virtual void Imprime();
virtual ~Insecto() { }
};

Insecto::Insecto(char *Nom, int NumP, float TamC, float TamT, float TamA)
{
strcpy(Nombre, Nom);
NumPatas = NumP;
TamCabeza = TamC;
TamTorax = TamT;
TamAbdomen = TamA;
}

void Insecto::Imprime()
{
cout<< "Nombre: " << Nombre << endl ;
cout<< "Numero de Patas: " << NumPatas << endl;
cout<< "Tamano de Cabeza: " << TamCabeza << endl;
cout<< "Tamano de Torax: " << TamTorax << endl;
cout<< "Tamano de Abdomen: " << TamAbdomen << endl;
}

class Mosca: public Insecto
{
private:
int NumAlas;
public:
Mosca(char *, int, float, float, float, int);
virtual void Imprime();
~Mosca() { }
};

Mosca::Mosca(char *Nom, int Pat, float Cab, float Tor, float Abd, int Alas):
Insecto(Nom, Pat, Cab, Tor, Abd)
{
NumAlas= Alas;
}

void Mosca::Imprime()
{
Insecto::Imprime();
cout<< "Numero de Alas: " << NumAlas << endl;
}

class Cucaracha: public Insecto
{
private:
char CaractCuerpo[30];
public:
Cucaracha(char *, int, float, float, float, char *);
virtual void Imprime();
~Cucaracha() { }
};

Cucaracha::Cucaracha(char *Nom, int Pat, float Cab, float Tor, float
Abd, char *Cuer): Insecto(Nom, Pat, Cab, Tor, Abd)
{
strcpy(CaractCuerpo, Cuer);
}

void Cucaracha::Imprime()
{
Insecto::Imprime();
cout<< "Caracteristicas del cuerpo: " << CaractCuerpo << endl;
}

void UsaFuncionVirtual()
{

Insecto *ObjInsecto1, *ObjInsecto2;
Mosca ObjMosca("Mosca", 6, 3, 1, 2, 4);
Cucaracha ObjCucaracha("Cucaracha", 6, 2, 8, 4, "Cuerpo Aplanado");

ObjInsecto1= &ObjMosca;
ObjInsecto2= &ObjCucaracha;

ObjMosca.Imprime();

ObjCucaracha.Imprime();
}
main()
{
  UsaFuncionVirtual();
}
