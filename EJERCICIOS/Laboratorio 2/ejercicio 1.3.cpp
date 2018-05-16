// arrays example
 #include<iostream> //libreria principal
 using namespace std;//libreria principal

 int foo [] = {16,2,77,40,12071};//define array y da valores
 int n, result=0; //define una variable llamada n entera; define variable llamada result inicializada en 0

int main ( )
{
	for (n=0; n<5 ; ++n)//condicion inicializa n en 0; hasta que n sea menor a 5, aumenta n en uno cada vez que inicia ciclo.
	{
	result += foo [n];// a result se le suma el valor de foo en la posicion n.
    }
    cout << result;//imprime result
    return 0;
}//programa que muestra la suma de los valores de cada posicion de un arreglo. 
