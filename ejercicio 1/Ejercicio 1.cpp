#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#define NOM_ARCHIVO "venta.txt"
using namespace std;
int main()
{
int x=1,opcion,regresar;
int codigo;
string upproducto;
int stockproducto;
float promedio;

string archivo;
while (x==1)
{cout<<"Bienvenido, ingrese alguna de las siguientes opciones \n 1.Agregar venta. \n 2.Ver  stock de productos."<<endl;cin>>opcion;
if (opcion==1)
{
cout<<"Ingrese el codigo de producto \n "<<endl;cin>>codigo;
cout<<"Ingrese el nivel minimo que desea en el producto \n "<<endl;cin>>upproducto;
cout<<"Ingrese la cantidad de producto a ingresar \n  "<<endl;cin>>stockproducto;
ofstream ingresonota;
ingresonota.open("venta.txt",ios::app);
ingresonota<<codigo<<"\n"<<upproducto<<"\n"<<stockproducto<<"\n";
ingresonota.close();
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
     ifstream archivo;
string texto;
int numerolineas;
string datos1[num_lineas];
archivo.open("venta.txt",ios::in);
  numerolineas=num_lineas-1;
   for(int i=0;i<=numerolineas;i++){
  fflush(stdin);
getline(archivo,texto);
datos1[i]=texto;
   }
   string codigo1[numerolineas],producto[numerolineas],stock[numerolineas];
   int aumento=0;
      int aumento1=0;
         int aumento2=0;
   for(int indicador1=0;indicador1<=numerolineas;)
{codigo1[aumento]=datos1[indicador1];
aumento++;
indicador1=indicador1+3;
}
 for(int indicador2=1;indicador2<=numerolineas;)
{producto[aumento1]=datos1[indicador2];
aumento1++;
indicador2=indicador2+3;
}
 for(int indicador3=2;indicador3<=numerolineas;)
{stock[aumento2]=datos1[indicador3];
aumento2++;
indicador3=indicador3+3;
}
int pedido=0;
for(int indicador4=0;indicador4<=numerolineas;)
{
       if (stock[indicador4]<producto[indicador4])
       {
       	pedido =atoi(producto[indicador4].c_str())- atoi(stock[indicador4].c_str());
       	  cout<<"Es necesario mas producto del codigo "<<codigo1[indicador4]<<" faltando la cantidad de "<<pedido<<endl;
pedido=0;
	   }
        x==1;
   
        indicador4=indicador4+1;
           
}
cout<<"\n Desea regresar al menu principal, escriba 1 para regresar, 2 para salir del programa.";cin>>regresar;
if (regresar==1)
{
x=1;
}
else
{x=2;
}

}
}

}
