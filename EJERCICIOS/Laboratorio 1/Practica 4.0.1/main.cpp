#include <iostream>//incluir librerias que necesitemos
#include <cstdlib>//libreria para la utilización de system()
#include <math.h>//libreria para utilizar pow()
using namespace std;// uso del namespace standar

int factorial(int a){//funcion para determinar un factorial
   int fact=1;

   if(a<0) fact =0;
   else if(a==0) fact=1;
   else{
      for (int i = 1; i <= a; i++){
         fact = fact*i;
      }
   }
   return fact;
}
int main()//funcion principal del programa
{
	int n1=0;//declaracion de la variable en la que se va a guardar el primer  número
	int n2=0;//declaracion dela variableen la que se va a guardar el segundo número
    cout<<"PROGRAMA PARA DETERMINAR LA COMBINATORIA Y PERMUTACION"<<endl;//explicacion del programa
    cout<<"TENIENDO DOS NUMEROS DADOS POR EL USUARIO"<<endl;
    cout<<"EL PRIMER NUMERO (N) ES EL NUMERO TOTAL DE ELEMENTOS"<<endl;
    cout<<"EL SEGUNDO NUMERO(K) ES EL NUMERO DE ELEMENTOS A ELEGIR"<<endl;
	cout<<"ESCRIBA EL PRIMER NUMERO(N) :"<<endl;//se pide el primer numero
	cin>>n1;//Lectura del primer numero
while(n1<1){//ciclo mientras para verificar que el numero no sea cero
    cout<<"ERROR! EL NUMERO DEBE SER MAYOR A 0, ESCRIBA EL PRIMER NUMERO(N) :"<<endl;//se pide el primer numero
	cin>>n1;//Lectura del primer numero
}
	cout<<"ESCRIBA EL SEGUNDO NUMERO(K) :"<<endl;//Se pide el segundo numero
	cin>>n2;//Lectura del segundo numero
while(n2<1||n2>n1){//ciclo mientras para verificar que el numero no msea cero ni mayor al numero 1
    cout<<"ERROR! EL NUMERO DEBE SER MAYOR A 0 O MENOR AL NUMERO 12, ESCRIBA EL PRIMER NUMERO(N) :"<<endl;//se pide el primer numero
	cin>>n1;//Lectura del primer numero
}
// OPERACIONES PARA DETERMINAR LA PERMUTACION Y COMBINACION
double permutacion_r=0;//declatacion de variables
double permutacion=0;
double combinacion_r=0;
double combinacion=0;
permutacion=factorial(n1);//operaciones para cada tipo de combinacion/permutacion
permutacion=permutacion/factorial((n1-n2));
permutacion_r=pow(n1,n2);
combinacion=permutacion/factorial(n2);
int a=n1+n2-1;
int b=n1-1;
combinacion_r=factorial(a);
combinacion_r=combinacion_r/((factorial(n2)*factorial(b)));


cout<<"NUMERO 1( NUMERO DE ELEMENTOS TOTALES)= "<<n1<<endl;//impresion de resultados
cout<<"NUMERO 2(NUMEROS DE ELEMENTOS A ESCOGER)= "<<n2<<endl;
cout<<"PERMUTACION SIN REPETICION: "<<permutacion<<" PERMUTACIONES"<<endl;
cout<<"PERMUTACION CON REPETICION: "<<permutacion_r<<" PERMUTACIONES"<<endl;
cout<<"COMBINACION SIN REPETICION: "<<combinacion<<" COMBINACIONES"<<endl;
cout<<"COMBINACION CON REPETICION: " <<combinacion_r<<" COMBINACIONES"<<endl;
	system ("pause");//indica al programa que pause, para poder visualizar los datos
	return 0;//devuelve un 0 si el programa finalizo corectamente
}



