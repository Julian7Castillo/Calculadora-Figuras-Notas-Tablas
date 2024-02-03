#include<iostream>
using namespace std;
char A=160, e=130, i=161, o=162, u=163, U= 233;

int main(){
	system("color 1F");
	
	float r, l, b, a, dm, d, bm, l1, l2, l3, n1, n2, num1, n=0, nf=0;
	double area, perimetro;
	int  mul=0, x=0;
	char figura, opcion, op2;
	
	do{
		cout<<" __________________________"<<endl;
		cout<<"|                          |";
		cout<<"\n| \t MEN"<<U<<"              |";
		cout<<"\n|__________________________|";
		cout<<"\n|                          |";
		cout<<"\n| a) "<<A<<"rea                  |";
		cout<<"\n| b) per"<<i<<"metro             |";
		cout<<"\n| c) calcular notas        |";
		cout<<"\n| d) tablas de multiplicar |";
		cout<<"\n| e) salir                 |"<<endl;
		cout<<"|__________________________|"<<endl;
		
		cout<<"\n- qu"<<e<<" quieres hacer? ";
		cin>>opcion;
		
		if(opcion == 'a'){
			cout<<" _____________________";
			cout<<"\n|a) cuadrado          |";
			cout<<"\n|b) tri"<<A<<"ngulo         |";
			cout<<"\n|c) rect"<<A<<"ngulo        |";
			cout<<"\n|d) c"<<i<<"rculo           |";
			cout<<"\n|e) rombo             |";
			cout<<"\n|f) trapecio          |";
			cout<<"\n|g) pent"<<A<<"gono         |";
			cout<<"\n|_____________________|"<<endl;
			cout<<"\nseleccione la opci"<<o<<"n de la figura geom"<<e<<"trica: ";
			cin>>figura;
			
			switch(figura){
				case 'a': 
						cout<<"\ningresa la longitud del lado del cuadrado: ";
					    cin>>l;
					    //if(l){
					    //	cout<<"ese no es un valor entero ";
						//}
						area = (l*l);
						cout<<"\nel "<<A<<"rea del cuadrado es: "<<area<<endl;
						cout<<"                     _____________";
						cout<<"\n                    |             |";
						cout<<"\nformula utilizada : | lado x lado |";
						cout<<"\n                    |_____________|"<<endl;
						break;
				case 'b':
						cout<<"\ningresa la base del tri"<<A<<"nglo: ";
						cin>>b;
						cout<<"\ningresa la altura del tri"<<A<<"nglo: ";
						cin>>a;
						area = (b*a)/2;
						cout<<"\nel "<<A<<"rea del tri"<<A<<"ngulo es es: "<<area<<endl;
						cout<<"                     ___________________";
						cout<<"\nformula utilizada : | (base x altura)/ 2 | ";
							cout<<"\n                    |___________________|"<<endl;
						break;						
				case 'c':
						cout<<"\ningresa la base del rect"<<A<<"ngulo: ";
						cin>>b;
						cout<<"\ningresa la altura del rect"<<A<<"ngulo: ";
						cin>>a;
						area = (b*a);
						cout<<"\nel "<<A<<"rea del rect"<<A<<"ngulo es es: "<<area<<endl;
						cout<<"\nformula utilizada : base x altura "<<endl;
						break;						
				case 'd':
						cout<<"\ningresa el radio del c"<<i<<"rculo: ";
						cin>>r;
						area = (3.1416*(r*r));
						cout<<"\nel "<<A<<"rea del c"<<i<<"rculo es: "<<area<<endl;
						cout<<"\nformula utilizada : 3.1416 x (r x r)"<<endl;
						break;						
				case 'e':
						cout<<"\ningrese el primer diametro: ";
						cin>>dm;
						cout<<"\ningrese el segundo diametro: ";
						cin>>d;
						area = (d*dm);
						cout<<"\nel "<<A<<"rea del rombo es es: "<<area<<endl;
						cout<<"\nformula utilizada : primer diameto x segundo diametro "<<endl;
						break;						
				case 'f':
						cout<<"ingrese la base menor: ";
						cin>>b;
						cout<<"ingresa la base myor: ";
						cin>>bm;
						cout<<"ingresa la altura: ";
						cin>>a;
						area = ((bm*b)*a)/2;
						cout<<"\nel "<<A<<"rea del trapecio es es: "<<area<<endl;
						cout<<"\nformula utilizada : altura x (base mayor x base menor) / 2"<<endl;
						break;						
				case 'g':
						cout<<"\ningrese el lado del pent"<<A<<"gono: ";
						cin>>l;
						cout<<"\ningrese el apotema del pent"<<A<<"gono: ";
						cin>>a;
						area = (l*a)/2;
						cout<<"\nel "<<A<<"rea del pent"<<A<<"gono es es: "<<area<<endl;
						cout<<"\nformula utilizada : (lado x apotema) / 2"<<endl;
						break;						
				default: cout<<"\n*** esa opci"<<o<<"n no es valida ***\n";
				}		
		}if(opcion == 'b'){
			cout<<" _____________________";
			cout<<"\n|a) cuadrado          |";
			cout<<"\n|b) tri"<<A<<"ngulo         |";
			cout<<"\n|c) rect"<<A<<"ngulo        |";
			cout<<"\n|d) c"<<i<<"rculo           |";
			cout<<"\n|e) rombo             |";
			cout<<"\n|f) trapecio          |";
			cout<<"\n|g) pent"<<A<<"gono         |";
			cout<<"\n|_____________________|"<<endl;
			cout<<"\nselecciona la opci"<<o<<"n de la figura geom"<<e<<"trica: ";
			cin>>figura;
			
			switch(figura){
				case 'a': 
						cout<<"\ningresa la longitud del lado del cuadrado: ";
					    cin>>l;
						perimetro = (l+l+l+l);
						cout<<"\nel per"<<i<<"metro del cuadrado es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : lado x 4"<<endl;
						break;						
				case 'b': 
						cout<<"\ningresa la medida de un lado del tri"<<A<<"ngulo: ";
						cin>>l1;
						cout<<"\ningresa la medida de un lado del tri"<<A<<"ngulo: ";
						cin>>l2;
						cout<<"\ningresa la medida de un lado del tri"<<A<<"ngulo: ";
						cin>>l3;
						perimetro = (l1+l2+l3);
						cout<<"\nel  per"<<i<<"metro del tri"<<A<<"ngulo es es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : lado + lado + lado "<<endl;
						break;					
				case 'c':
						cout<<"\ningresa la base del rect"<<A<<"ngulo: ";
						cin>>b;
						cout<<"\ningresa la altura del rect"<<A<<"ngulo: ";
						cin>>a;
						perimetro = (b+a+b+a);
						cout<<"\nel  per"<<i<<"metro del rect"<<A<<"ngulo es es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : base x 2 + altura x 2"<<endl;
						break;						
				case 'd':
						cout<<"\ningresa el diametro del c"<<i<<"rculo: ";
						cin>>r;
						perimetro = (3.1416*r);
						cout<<"\nel  per"<<i<<"metro del c"<<i<<"rculo es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : 3.1416 x diametro"<<endl;
						break;						
				case 'e':
						cout<<"\ningrese un lado del rombo: ";
						cin>>l;
						perimetro = (l*4);
						cout<<"\nel  per"<<i<<"metro del rombo es es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : lado x 4 "<<endl;
						break;						
				case 'f':
						cout<<"ingrese la base menor: ";
						cin>>b;
						cout<<"ingresa la base myor: ";
						cin>>bm;
						cout<<"ingresa el lado";
						cin>>a;
						perimetro = (a*2)+bm+b;
						cout<<"\nel  per"<<i<<"metro del trapecio es es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : (lado x 2) + base mayor + base menor "<<endl;
						break;						
				case 'g':
						cout<<"\ningrese el lado del pent"<<A<<"gono: ";
						cin>>l;
						perimetro = (l*5);
						cout<<"\nel  per"<<i<<"metro del  pent"<<A<<"gono: es es: "<<perimetro<<endl;
						cout<<"\nformula utilizada : lado * 5"<<endl;
						break;						
				default: cout<<"\n*** esa opci"<<o<<"n no es valida ***\n";	
				}
				
		}if(opcion == 'c'){
				cout<<" _____________________________________";
				cout<<"\n|                                     |";
				cout<<"\n|\t calculador de notas          |";
				cout<<"\n|_____________________________________|"<<endl;
				cout<<" _____________________________________";
				cout<<"\n|                                     |";
				cout<<"\n| a) de  0.0 a 5.0                    |";
				cout<<"\n| b) de 1.0 a 10.0                    |";
				cout<<"\n|_____________________________________|"<<endl;
				cout<<"\n en que rango de notas?: ";
				cin>>op2;
				switch(op2){
					case 'a':
						cout<<"\ncuantas notas vas a ingresar?: ";
						cin>>num1;
						
						if(num1 < 0){
							cout<<"\n¡¡¡ dato no prosesable :(!!!"<<endl;
						}
						if(num1 > 0){ 
							while (n < num1){
								cout<<"ingrese una nota: ";
								cin>>n1;
								
						    	if(n1 > -0.9 && n1 < 5.1){
									n1 = n2 + n1; 
									n2 = n1;
									n = n + 1;
							    }
								else{
									cout<<"\n*** ese numero no esta entre el rango establecido, escribe otra ****"<<endl;
								}
				           	}
							nf= n2 / num1;
							cout<<"\nsu nota final es: "<<nf<<endl;
							if(nf < 3.0){
								cout<<"\nintenta mejorar la proxima ves, tu puedes :D"<<endl;
							}
							if(nf > 3.0 && nf < 4.0){
								cout<<"\n que bien, pero puedes mejorar "<<endl;
							}
							if(nf > 4.0 && nf < 5.1){
								cout<<"\n exelente, sigue as¡ "<<endl;
							}
				       	}
				       	n=0;
				       	n1=0;
				       	n2=0;
				       	num1=1;
						break;
					case 'b':
						cout<<"\ncuantas notas vas a ingresar?: ";
						cin>>num1;
						
						if(num1 < 0){
							cout<<"\n¡¡¡ dato no prosesable :(!!!"<<endl;
						}
						if(num1 > 0){ 
							while (n < num1){
								cout<<"ingrese una nota: ";
								cin>>n1;
								
						    	if(n1 > 0.9 && n1 < 10.1){
									n1 = n2 + n1; 
									n2 = n1;
									n = n + 1;
							    }
								else{
									cout<<"\n*** ese numero no esta entre el rango establecido, escribe otra ****"<<endl;
								}
				           	}
							nf= n2 / num1;
							cout<<"su nota final es: "<<nf<<endl;
								if(nf < 6.0){
								cout<<"\nintenta mejorar la proxima ves, tu puedes :D"<<endl;
							}
							if(nf > 6.0 && nf < 8.0){
								cout<<"\n que bien, pero puedes mejorar "<<endl;
							}
							if(nf > 8.0 && nf < 10.1){
								cout<<"\n exelente, sigue as¡ "<<endl;
							}
				       	}
				       	n=0;
				       	n1=0;
				       	n2=0;
				       	num1=1;
						break;
					default:
						cout<<"\n***no es lo que se te esta pidiendo***"<<endl;
						break;
				}
		}if(opcion == 'd'){
				cout<<" _____________________________________";
				cout<<"\n|                                     |";
				cout<<"\n|\t tablas de multiplicar        |";
				cout<<"\n|_____________________________________|"<<endl;
				cout<<"\ningresa hasta que n"<<u<<"mero va la tabla de multiplicar: ";
				cin>>mul;
				cout<<"\nescribe de que n"<<u<<"mero va a ser la tabla: ";
				cin>>x;
				
				for(int i=0; i<=mul; i++){
					cout<<i<<"x"<<x<<"="<<(i * x)<<endl;
				}
		}if(opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd' && opcion != 'e'){
			cout<<"\n***** opcion no valida *****\n";
		}
		
	}while(opcion != 'e');
	cout<<"\n\t adios "<<endl;
	
	return 0;
}// JC-21

/*
- mostrar formulas = Y
- rangos de calificaciones = Y
- menú más llamativo = N
- mensages de ayuda  = Y
á: 160 é: 130 í: 161 ó: 162 ú: 163 Á: 181 É: 144 Í: 214 Ó: 224 Ú: 23 ñ: 164 Ñ: 165
*/

