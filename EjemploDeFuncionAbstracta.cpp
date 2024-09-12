#include<iostream>
#include<math.h>
using namespace std;

class Figura
{
public:
Figura();
virtual float CalculaArea()= 0;
};
Figura::Figura()
{}

class Triangulo: public Figura
{
private:
float Base, Altura;
public:
Triangulo(float, float);
virtual float CalculaArea();
};
Triangulo::Triangulo(float Ba, float Alt)
{
Base= Ba;
Altura= Alt;
}
float Triangulo::CalculaArea()
{
return (Base * Altura / 2);
}
class TrianguloEquilatero: public Triangulo
{
public:
TrianguloEquilatero(float, float);
float CalculaArea();
};
TrianguloEquilatero::TrianguloEquilatero(float Ba, float Alt): Triangulo
(Ba, Alt)
{}
float TrianguloEquilatero::CalculaArea()
{
return Triangulo::CalculaArea();
}
class TrianguloRectangulo: public Triangulo
{
private:
float Cateto1, Cateto2, Hipotenusa;
public:
TrianguloRectangulo (float, float);
float CalculaArea();
};
TrianguloRectangulo::TrianguloRectangulo(float Cat1, float Cat2):
Triangulo(Cat1, Cat2)
{
Cateto1= Cat1;
Cateto2= Cat2;
Hipotenusa= sqrt(Cat1*Cat1 + Cat2*Cat2);
}
float TrianguloRectangulo::CalculaArea()
{
return (Cateto1*Cateto2);
}
class Rectangulo: public Figura
{
private:
float Largo, Alto;
public:
Rectangulo(float, float);
float CalculaArea();
};
Rectangulo::Rectangulo(float Lar, float Al)
{
Largo= Lar;
Alto= Al;
}
float Rectangulo::CalculaArea()
{
return (Largo*Alto);
}
class Cuadrado: public Rectangulo
{
public:
Cuadrado(float);
float CalculaArea();
};

Cuadrado::Cuadrado(float Lado): Rectangulo(Lado, Lado)
{}

float Cuadrado::CalculaArea()
{
return Rectangulo::CalculaArea();
}

void UsaFiguras()
{
TrianguloEquilatero TriaEq(5,7);
TrianguloRectangulo TriaRec(3, 4);
Rectangulo Rectan(2, 3);
Cuadrado Cuadro(5);
cout<< "\nArea del triangulo equilatero: " << TriaEq.CalculaArea();
cout<< "\nArea del triangulo rectangulo: " << TriaRec.CalculaArea();
cout<< "\nArea del rectangulo: " << Rectan.CalculaArea();
cout<< "\nArea del cuadrado: " << Cuadro.CalculaArea();
}

main()
{
    UsaFiguras();
}
