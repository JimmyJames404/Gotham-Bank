#include <iostream>
#include <stdlib.h>
using namespace std ;
char r;// en esta variable se guardar s,S ó n,N para poner que si o no.
int usuario;//solo podran ingresar con 2227 y con
int contrasena;//la contraseña 1234 
int intento = 3;// en caso de intentar mas de 3 veces se cierra la pagina
int ingreso;//aqui podran ingresar la cantidad para despues sumar al saldo total
int retiro;//esta cantidad se la restare al historial y al saldo total
int historial = 5000;// el historial es para que las personas no puedan retirar mas de 5000 diarios
	int n2 = 50;
	int b50  = 0;// billetes de 50
    int b100 = 0; //billetes de 100
    int b200 = 0;//billetes de 200
    int b500 = 0;//billetes de 500
    int b1000 = 0;//billetes de 
    
    int temp = 0;// servira para realizar el algoritmo voraz o goloso ya que sigue el minimo numero de monedas para 
  
    int valor ;
int condicion();
int menu();
float saldo = 92500;// Saldo total por cliente que puede retirar



int main(){	 //este seria mi inicio de todo el programa (mini cajero)

cout<<"   ||||||||||||||||||||||||Banco Gotham City||||||||||||||||||||||||"<<endl;
cout<<"   |||||||||||||||||||||||Le da la bienvenida|||||||||||||||||||||||"<<endl;

	cout<<"\nInserte su tarjeta o ingrese su numero de usuario"<<endl;// Para no estar comentando todo lo obvio el COUT sirve para imprimir texto
	cin>> usuario;//y el CIN es para guardar en mi variable
	cout<<"Inserte su PIN"<<endl;
	cin>> contrasena;
	
	// el siguiente bloque inicio-intento de linea _- a _-  pone la condicion que si mi usuario pluso el usuario y contraseña corecta podra continuar y sino tendre 3 intentos para continuar, y en el ultimo ya se sale del prgrama
			if (usuario==2227 && contrasena == 1234) {
			system("cls");// este linea permite limpiar mi pagina
				cout<<"\nBienvenido usuario \n"<<endl;
				menu();// es mi "hipevinculo"
			}
			else
			system("cls");
				cout<<"\n<----------PIN o USUARIO incorrecto---------->"<<endl;
				
					if(intento>0){
					
					cout<<"Por seguridad tiene "<<intento<<" intentos para ingresar a la cuenta"<<endl;
					cout<<"Desea intentar de nuevo(s/n)"<<endl;
					cin>>r;
					if ((r=='s')||(r=='S')){
							intento--;
							system("cls");
							main();
						}
						if ((r=='n')||(r=='N')){
							cout<<"<-----------gracias por su visita, vuelva pronto---------->"<<endl;
							 exit(0);
						}
					}
					if(intento=-1){
						cout<< "Su cuenta a sido bloqueada, porfavor acuda a ATENCION AL CLIENTE\n o marque al siguiente numero"<<endl;
						cout<< "XXX-XXX-XXXX"<<endl;}
						exit(0);
				}

//aqui termina mi bloque de inicio-prueba
//las siguientes lineas de codigo crea mi menu
	int menu(){
		system("cls");
		int opcion;// para mi switch que utilizo para estar entrando a mi menu
		system("cls");		
		cout <<"<--------Menu-------->\n"<<endl;
		cout<<"1 -> Consultar Saldo"<<endl;
		cout<<"2 -> Ingresar efectivo"<<endl;
		cout<<"3 -> Retirar Saldo"<<endl;
		cout<<"4 -> Personalizar"<<endl;
		cout<<"5 -> Salir\n"<<endl;
	
		cout<<"Ingrese la opcion que desee realizar:"<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1://Solo realizar a la consulta de la variable saldo que inicia con 93500
				system("cls");
				cout<<"Su saldo actual es de :"<<saldo<<" pesos"<<endl;
				cout<<"Desea realizar algun otro tramite s/n"<<endl;
				cin>> r;
				if ((r=='s')||(r=='S')){
					system("cls");
					menu();
				}
				if ((r=='n')||(r=='N')){
					cout<<"<-----------gracias por su visita, vuelva pronto---------->"<<endl;
					 exit(0);
				}
				
			case 2:// toma la variabale ingreso y la suma con saldo 
				system("cls");
				cout<<"Ingrese la cantidad a depositar:"<<endl;
				cin>>ingreso;
				saldo=saldo +ingreso;
				cout<<"Su saldo total es de "<<saldo<<" pesos"<<endl;
				condicion();
				
				case 3:
					system("cls");
					cout<<"Ingrese la cantidad que desee retirar"<<endl;
					cin>>retiro;
				    if(retiro<=saldo){
				    	if(retiro>=n2){
				    		if(retiro % n2 == 0){
				    			if(retiro<= historial){
				    				historial=historial - retiro;
									saldo=saldo-retiro;
									cout<<"Se esta calculando su retiro, Porfavor espere :D"<<endl;
				    				cout<<"Sus "<<retiro<<" pesos han sido retirados con exitos"<<endl;
				    				cout<<"Su saldo actual es de "<<saldo<<" pesos"<<endl;
				    				//aqui incia
				    				
				    	
										b1000=(retiro/1000);(retiro=retiro%1000);
										b500=(retiro/500);(retiro=retiro%500);
										b200=(retiro/200);(retiro=retiro%200);
										b100=(retiro/100);(retiro=retiro%100);
										b50=(retiro/50); (retiro=retiro%50);
										
										cout<<"billetes de 1000 pesos:  "<<b1000<<endl;
										cout<<"billetes de 500 pesos:  "<<b500<<endl;
										cout<<"billetes de  200 pesos:  "<<b200<<endl;
										cout<<"billetes de  100 pesos:  "<<b100<<endl;
										cout<<"billetes de  50 pesos:  "<<b50<<endl;		
									
									
				    			
				    				condicion();
								}else{
									cout<<"Por normas del banco solo se puede retirar las cantidad de 5000 pesos diarios"<<endl;
									cout<<"Por su comprension y preferencia, gracias"<<endl;
									condicion();
									}
							}else{
							cout<<"Solo puedes retirar multiplos de 50"<<endl;
							condicion();
						}
						}	else{
						cout<<"El billete de menor denominacion es de 50 pesos"<<endl;
						condicion();
					}
					}else{
			cout<<"No cuenta con el monto suficiente para realizar el retiro"<<endl;
			condicion();
		}
			case 4:// este solo es para personalizar no es obligatorio
				int x;
				int z;
				cout<<"Elige que desea personalizar:"<<endl;
				cout<<"1->Interfaz\n2->Texto\n3->Regresar"<<endl;
				cin>>x;
				if(x==1){
					system("cls");
					cout<<"Eliga el color que desea que su interfaz tenga:"<<endl;
				cout<<"0 = Negro\n1 = Azul\n2 = Verde\n3 = Aguamarina\n4 = Rojo\n5 = Purpura\n6 = Amarillo\n8 = Gris\n9 = Azul claro" <<endl;
				cin>>x;
					switch(x){
						case 0:system ("color 0F" );condicion();
						case 1:system ("color 1F" );condicion();
						case 2:system ("color 2F" );condicion();
						case 3:system ("color 3F" );condicion();
						case 4:system ("color 4F" );condicion();
						case 5:system ("color 5F" );condicion();
						case 6:system ("color 6F" );condicion();
						case 7:system ("color 7F" );condicion();
						case 8:system ("color 8F" );condicion();
						case 9:system ("color 9F" );condicion();}
				}
				if(x==2){
					cout<<"Eliga el color que desea que su texto tenga:"<<endl;
				cout<<"0 = Verde claro\n1 = Aguamarina claro\n2 = Rojo claro\n3 = Purpura claro\n4 = Amarillo claro\n5 = Blanco brillante"<<endl;
				cin>>z;
				switch(z){
						case 0:system ("color  A" );condicion();
						case 1:system ("color  B" );condicion();
						case 2:system ("color  C" );condicion();
						case 3:system ("color  D" );condicion();
						case 4:system ("color  E" );condicion();
						case 5:system ("color  F" );condicion();
					}	
				}
				if(x==3){
					menu();
				}
				case 5:// es el goodbye de de todo, con este finalizo desde el menu.
					system("cls");
				cout<<"Esta seguro que se desea retirar(s/n)"<<endl;//pero me parecio muy cortante entonces le puse una condicion para que este seguro que si quiera salir
					cin>>r;
			if ((r=='n')||(r=='N')){
					menu();
				}
				if ((r=='s')||(r=='S')){
					system("cls");
					cout<<"<-----------gracias por su visita, vuelva pronto---------->"<<endl;
					 exit(0);
				}
					
				}
				}
					int condicion(){//este metodo lo hice ´para no estar repitiendo el mismo comando en todas las demas opciones...
			
			cout<<"Desea realizar alguna otra funcion(s/n)"<<endl;
					cin>>r;//con 
			if ((r=='s')||(r=='S')){
					menu();//vamos al menu
				}
				if ((r=='n')||(r=='N')){
					cout<<"<-----------gracias por su visita, vuelva pronto---------->"<<endl;
					 exit(0);// no saca del programa
				}
	}
				
				

					
				
		
		
