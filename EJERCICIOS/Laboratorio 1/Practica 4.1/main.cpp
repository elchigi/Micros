#include <iostream>//uso de librerias necesarias
#include <math.h>//habilita el uso de pow() y sqrt()
#include <cstdlib>//libreria para la utilización de system()
using namespace std;//uso de el namespace estandar

int main()//funcion principapl
{
    double a;//declaracion de variablen en las que se guardaran cada coeficiente
    double b;
    double c;
    cout << "PROGRAMA QUE SOLUCIONA UNA ECUACION DE SEGUNDO GRADO" << endl;//explicacion del programa
    cout << "CONOCIENDO LOS COEFICIENTES A,B Y C" << endl;
    cout << "SIGUENDO LA ESTRUCTURA AX^2+BX+C" << endl;
    cout << "INGRESA EL VALOR DE A"<<endl;//pedido de los datos
    cin  >> a;
    while(a==0){//verifica que a sea mayor a 0
    cout << "ERROR! 'A' DEBE SER DIFERENTE A 0!INGRESA EL VALOR DE A"<<endl;
    cin  >> a;
    }
    cout << "INGRESA EL VALOR DE B"<<endl;
    cin  >> b;
    cout << "INGRESA EL VALOR DE C"<<endl;
    cin  >> c;
    //operaciones necesarias para obtener las soluciones
    double s1=0;
    double s2=0;

    double im=0;
    double ir=pow(b,2)-4*a*c;
    if(ir<0){
    ir=ir*-1;
    ir=sqrt(ir);
    b=b*-1;
    a=2*a;
    //impresion de soluciones
    cout<<"SOLUCION 1: "<<"("<<b<<"+"<<"("<<ir<<"i)"<<")"<<"/"<<a<<endl;
    cout<<"SOLUCION 2: "<<"("<<b<<"-"<<"("<<ir<<"i)"<<")"<<"/"<<a<<endl;
    }else if(ir>-1){
    s1=((b*-1)+sqrt(ir))/(2*a);

    s2=((b*-1)-sqrt(ir))/(2*a);
   cout<<"SOLUCION 1: "<<s1<<endl;
   cout<<"SOLUCION 2: "<<s2<<endl;
    }
system ("pause");//indica al programa que pause, para poder visualizar los datos
            return 0;
}
