#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



using namespace std;

void menu();

 void menu(){
    cout<<"\n\t MENU\n";
    cout<<"1. Ingreso de datos del Trabajador.\n";
    cout<<"2. Porcentajes de sueldos.\n";
    cout<<"3. Sueldo Total.\n";
    cout<<"0. Salir.\n";

    }

int main() {
	char nombre[10];
	int sueldo,i,j,k, total,n,opc;
	menu();
	cout<<"\n\nIngrese opcion:";
	cin>>opc;
	system("cls");
    while(opc!=0){
        switch(opc){
        case 1:
            cout<<"Digite el numero de Trabajadores.";
            cin>>n;
            total=0;i=0;j=0;k=0;
            for(i>0;i<n;i++){
                cout<<"Digite el nombre del trabajador ("<<i+1<<"): \n";
                cin>>nombre;
                cout<<"Digite su sueldo: \n";
                cin>>sueldo;
                total=total+sueldo;
                if(sueldo>=0 && sueldo<=1500){
                j++;
                }
                else{
                    k++;
                }
            }
            system("cls");

        break;
        case 2:
            system("cls");
            cout<<"\n Porcentaje 0 a 1500: "<<(j*100)/i<<"%";
            cout<<"\n Porcentaje 1500 a mas : "<<(k*100)/i<<"%";


        break;
        case 3:
            system("cls");
            cout<<"\n Sueldo total: $."<<total;


        break;
        }

        menu();
        cout<<"\n\nIngrese opcion:";
        cin>>opc;

        }


	system("pause");
    return(0);
}
