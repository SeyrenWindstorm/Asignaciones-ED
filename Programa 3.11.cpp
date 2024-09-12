#include<string.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>

main()

{

class volumen
{
   protected
     char *NomVolumen;

   public:
     Volumen();
     Volumen(char*);
     virtual void Imprimir (){}
     virtual -Volumen();
};

Volumen::Volumen()
{}

Volumen::Volumen(char*Nom)

{
  NomVolumen = new char [(strlen(nom)+1)];

     if (NomVolumen)
        strcpy(NomVolumen,Nom);
}

Volumen:: -Volumen()
{
    delete[] NomVolumen;
}

 class Libro: public Volumen
 {
    private
     int AnioEd;

    public
     Libro();
     Libro(char *Nom, int);
     void Imprimir();
 };

 Libro::Libro()
 {}

 Libro::Libro(char *Nom, int Anio): Volumen (Nom)
 {
     AnioEd= Anio;
 }

void Libro::Imprimir()
     {
       cout<< "nombre del Libro: " <<NomVolumen<< endl;
       cout<< "Año de Edicion del Libro: " <<AnioEd<< endl;
     }

class Revista: public Volumen
{
    private
     int Numero;
    public
    Revista();
    Revista(char *, int);
    void Imprimir();

};

Revista::Revista()
{}

Revista::Revista(char *Nom, int Num): Volumen(Nom)
{
    Numero= Num;
}

void Revista::Imprimir ()
{
    cout<<"Nombre de la Revista: " <<NomVolumen<< endl;
    cout<<"Numero de la Revista: " <<Numero<< endl;
}

class Biblioteca
{
  private:
    int MaxVolumen, NumVolumen;
    char Nombre[64]
    Volumen *Volumenes[];
  public:
    Biblioteca();
    Bioblioteca(int64_t , char[]);
    void IngresarVolumen(Volumen *);
    void Imprimir();
    -Biblioteca();
};

Biblioteca::Biblioteca()
{}

Biblioteca::Biblioteca(int MaxVol, char Nom[])
{
    int Indice;
    MaxVolumen= MaxVol;
    NumVolumen= 0;
    strcpy(nombre, Nom);
    *Volumenes= new Volumen[MaxVolumen]

    for (Indice= 0; Indice < MaxVolumen; Indice++;)
        Volumenes[Indice]= nullptr;
}

Biblioteca:-Biblioteca()
{
    delete[] *Volumenes;
}

void Biblioeteca::IngresarVolumen(Volumen *Vol)
{
    if (NumVolumen < MaxVolumen)
        Volumenes[NumVolumen++]= Vol;
}

void Biblioeteca::Imprimir()
{
    int Indice;
    cout<< " Acervo de la bioblioteca: " <<Nombre<<endl
    if(NumVolumen>0)
       (Indice= 0; Indice < NomVolumen; Indice++;)
       Volumenes[Indice]->Imprimir();
}

void UsaPoliformismo()
{
Biblioteca ObjBiblioteca(10."Refugio del Conocimiento");

Libro ObjLibro1 ("Estructura de Datos", 2006)
      ObjLibro2 ("Aprenda C++", 2005)
      ObjLibro3 ("Estudie Ingieneria", 2000)

Revista ObjRevista1("Ciencia",12)
        ObjRevista2("Computadoras y Accesorios",110)
        ObjRevista3("Avances de la Tecnologia",205)

//Obj Libros
ObjBiblioteca.IngresarVolumen(&ObjLibro1)
ObjBiblioteca.IngresarVolumen(&ObjLibro2)
ObjBiblioteca.IngresarVolumen(&ObjLibro3)
//Obj Revistas
ObjBiblioteca.IngresarVolumen(&ObjRevista1)
ObjBiblioteca.IngresarVolumen(&ObjRevista2)
ObjBiblioteca.IngresarVolumen(&ObjRevista3)

ObjBiblioteca.Imprimir();
}





}


