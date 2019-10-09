#include <iostream>
#include <vector>
using namespace std;

vector < int >lista;

void agregarNum ()
{
  int num = 0;
  cout << "Numero: ";
  cin >> num;

  bool continuar = true;
  do
    {
      int opcion = 0;
      cout << "\t1) Al principio\n\t2) Al final" << "\n\tOpcion elegida: ";
      cin >> opcion;
      switch (opcion)
{
case 1:
 lista.insert (lista.begin (), num);
 continuar = false;
 break;
case 2:
 lista.push_back (num);
 continuar = false;
 break;
default:
 cout << "esa opcion no es valida" << endl;
 break;
}
    }
  while (continuar);
}

void showList ()
{
  for (int i = 0; i < lista.size (); i++)
    cout << lista[i] << endl;
}


void Delete (int x)
{

  for (int i = 0; i < lista.size (); i++)

    if (x == lista[i]){
      lista.erase (lista.begin()+i);
    }
      
          

 }
 




 int main ()
{

 bool continuar = true;
 int numDelete = 0;

 cout << "Digite la lista a continuación: " << endl;

 do
   {
     int opcion = 0;
     cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver numeros"
<<
"\n\t3) Salir\n\t4) Eliminar numero de la lista \n\tOpcion elegida: ";
     cin >> opcion;
     switch (opcion)
{
case 1:
 cout << "Agregando..." << endl;
 agregarNum ();
 break;
case 2:
 cout << "Listando..." << endl;
 showList ();
 break;
case 3:
 continuar = false;
 break;

case 4:

 cout << "Dime que numero vamos a eliminar ¬¬: " << endl;
 cin >> numDelete;

 Delete (numDelete);
 break;
default:
 cout << "Esa opcion no es valida " << endl;
 break;

}
   }
 while (continuar);


 return 0;
}

