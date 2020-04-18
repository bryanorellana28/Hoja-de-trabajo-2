
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#define NOM_ARCHIVO "colegio.txt"
using namespace std;
int main()
{
int x=1,opcion,regresar;
int codigo,nota;

string proveedor,nombre;
while (x==1)
{cout<<"Bienvenido, eliga una de las siguientes opciones \n 1.Agregar datos alumno.\n 2.Ver estadistidas de notas  \n ";cin>>opcion;
if (opcion==1)
{
cout<<"Ingrese el codigo del alumno \n ";cin>>codigo;
cout<<"Ingrese el nombre del alumno \n ";cin>>nombre;
cout<<"Ingrese la nota del alumno \n  ";cin>>nota;
ofstream ingresonotas;
ingresonotas.open("colegio.txt",ios::app);
ingresonotas<<codigo<<"\n"<<nombre<<"\n"<<nota<<"\n";
ingresonotas.close();
}




else if (opcion==2)
{    FILE *entrada;
   int ch, num_lineas;
   if ((entrada = fopen(NOM_ARCHIVO, "r")) == NULL){
      perror(NOM_ARCHIVO);
      return 1;
   }
   num_lineas = 0;
   while ((ch = fgetc(entrada)) != EOF)
      if (ch == '\n')
         num_lineas++;
   fclose(entrada);
   cout<<num_lineas;
     ifstream archivo;
string dato;
int numerolineas;
string datos1[num_lineas];
archivo.open("colegio.txt",ios::in);

  numerolineas=num_lineas-1;
   for(int i=0;i<=numerolineas;i++){
  fflush(stdin);
getline(archivo,dato);
datos1[i]=dato;
   }
   string codigo1[numerolineas],nombre1[numerolineas],nota1[numerolineas];
   int aumento=0;
      int aumento1=0;
         int aumento2=0;
   for(int indicador1=0;indicador1<numerolineas;)
{codigo1[aumento]=datos1[indicador1];
aumento++;
indicador1=indicador1+3;
}
 for(int indicador2=1;indicador2<numerolineas;)
{nombre1[aumento1]=datos1[indicador2];
aumento1++;
indicador2=indicador2+3;
}
float promedio=0; int notamayor=0,indicemayor, total=0;
;
 for(int indicador3=2;indicador3<=numerolineas;)
{nota1[aumento2]=datos1[indicador3];

if (atoi(nota1[aumento2].c_str())>=notamayor)
{
	notamayor=atoi(nota1[aumento2].c_str());
	indicemayor=aumento2;
}
indicador3=indicador3+3;
promedio=promedio+atoi(nota1[aumento2].c_str());
aumento2++;


}

cout<<"La nota mayor es igual a  "<<notamayor<<" con el identificador "<<codigo1[indicemayor]<<endl;

numerolineas=(numerolineas+1)/3;
total=promedio/numerolineas;

cout<<"El promedio de todos los alumnos es de "<<total<<endl;

cout<<"\n Desea regresar al menu principal, escriba 1 para regresar, 2 para salir del programa.";cin>>regresar;
if (regresar==1)
{
x=1;
}
else
{x=2;
}}
}

}
