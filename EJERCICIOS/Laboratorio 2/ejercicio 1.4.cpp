// programa para calcular el promedio de notas para una asignatura y que determina si el estudiante aprobò
 #include<iostream> //libreria principal
 using namespace std;//libreria principal
double  suma, prom, nota,a ;
int  k, n;

 int main ()
 {
 	cout<< "Digite el numero de notas del curso"<< endl ;//mensaje en pantalla para pedir cantidad de notas
 	cin>>k;// Guarda el Numero de Notas
 	int asi [k]; //declara el arreglo NOtas
 	for ( n=0; n<k ; ++n )//ciclo para llenar el arreglo de Notas
 	{
 		cout<<"digite nota"<< endl;//pide nota
 		cin>>nota;//ingresa nota por teclado
 		asi[n]=nota;//asigna un valor ingresado por teclado a una posicion en el arreglo
 	    suma+= nota;//es una variable que permite sumar las notas que se van ingresando
 	    
	 }
	 a=k;
    prom=suma/a;// Calcula promedio de notas
	 cout<<"Su promedio es:"<<prom<<endl;//mensaje en pantalla  promedio calculado
	 if(prom>=3){//condiciòn aprobar
	 	cout<<"Usted aprobo"<<endl;// mensaje en pantalla de aprobacion
	 }
	 else {//condicion reprobar
	 	cout<< "Usted reprobo"<<endl;//mensaje en pantalla de reprobacion
	 }
 }
