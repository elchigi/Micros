#include <iostream>//DECLARACION DE LIBRERIAS NECESARIAS
#include <string.h>//LIBRERIA PARA EL USO DEL STRING

using namespace std;//USO DEL NAMESPACE STANDAR

int main()//FUNCION PRINCIPAL
{string frase;//DECLARACION DE VARIABLE STRING PARA GUARDAR LA FRASE
    cout << "CONTADOR DE VOCALES Y CONSONANTES" << endl;//EXPLICACION DE L PROGRAMA
    cout << "INTRODUZCA LA FRASE A ANALIZAR" << endl;
   getline(cin,frase);//LECTURA DE LA FRASE
    int NV=0;//DECLARACION DE VARIABLES NECESARIAS
    int NC=0;
    int ml=frase.length();//SE GUARDA EL LARGOI DE LA FRASE
    for(int i=0;i<ml;i++){//SE CUENTAN LOS CONSONANTES Y LAS VOCALES CON UN CICLO 'PARA'

    if((frase[i]=='a')or (frase[i]=='e')or (frase[i]=='i')or (frase[i]=='o')or(frase[i]=='u')or (frase[i]=='A')or (frase[i]=='E')or(frase[i]=='I')or (frase[i]=='O')or(frase[i]=='U')){

       NV++;
     }else     if((frase[i]=='B') or (frase[i]=='C') or (frase[i]=='D') or (frase[i]=='F')or(frase[i]=='G')or(frase[i]=='H') or(frase[i]=='J') or (frase[i]=='K')or (frase[i]=='L')or (frase[i]=='M')or (frase[i]=='N')or(frase[i]=='Ñ') or (frase[i]=='P')or (frase[i]=='Q')or(frase[i]=='R') or (frase[i]=='S')or (frase[i]=='T')or (frase[i]=='V')or (frase[i]=='W')or (frase[i]=='X')or (frase[i]=='Y')or(frase[i]=='Z') or (frase[i]=='b') or (frase[i]=='c') or (frase[i]=='d') or (frase[i]=='f')or(frase[i]=='g')or(frase[i]=='h') or(frase[i]=='j') or (frase[i]=='k')or (frase[i]=='l')or (frase[i]=='m')or (frase[i]=='n')or(frase[i]=='ñ') or (frase[i]=='p')or (frase[i]=='q')or(frase[i]=='r') or (frase[i]=='s')or (frase[i]=='t')or (frase[i]=='v')or (frase[i]=='w')or (frase[i]=='x')or (frase[i]=='y')or(frase[i]=='z'))
      {
       NC++;}
   }
    cout << "NO. DE VOCALES= "<<NV<< endl; //IMPRESION DE DATOS
    cout << "NO. DE CONSONANTES= " << NC<< endl;
    return 0;
}
