#include<string.h>
#include<stdio.h>


class CadenaCar {
   private:
       char Cadena[15];
   public:
       CadenaCar(char texto[15]);
       int operator==(CadenaCar Cad);
       int operator!=(CadenaCar Cad);
       int operator<(CadenaCar Cad);
       int operator>(CadenaCar Cad);
       CadenaCar operator+(CadenaCar Cad);

       void Imprime();
};

CadenaCar::CadenaCar(char texto[15]){
    strcpy(Cadena, texto);
}

void CadenaCar::Imprime() {
     printf("\nCadena: %s", Cadena);
}

int CadenaCar::operator== (CadenaCar CadenaAux) {
    return strcmp(Cadena,CadenaAux.Cadena);
}
int CadenaCar::operator!= (CadenaCar CadenaAux) {
    return strcmp(Cadena,CadenaAux.Cadena);
}
int CadenaCar::operator< (CadenaCar CadenaAux) {
    return strcmp(Cadena,CadenaAux.Cadena);
}
int CadenaCar::operator> (CadenaCar CadenaAux) {
    return strcmp(Cadena,CadenaAux.Cadena);
}
CadenaCar CadenaCar::operator+ (CadenaCar CadenaAux) {
    return strcpy(Cadena,CadenaAux.Cadena);
}

void UsaSobrecarga(void) {
    CadenaCar ObjCadena1(" "), ObjCadena2 (" ");
    char cadena1[15], cadena2[15];
    int R;

    printf("Introduzca la cadena de caracteres: ");
    scanf("%s",& ObjCadena1);

    printf("Introduzca la cadena de caracteres: ");
    scanf("%s",& ObjCadena2);


    ObjCadena1.Imprime();
    ObjCadena2.Imprime();

    R = ObjCadena1 == ObjCadena2;

    printf("\nTipo: %d", R);

}

main() {
    UsaSobrecarga();
}
