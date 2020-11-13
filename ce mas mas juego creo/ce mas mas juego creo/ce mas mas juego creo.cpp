// ce mas mas juego creo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>


#include "test.h"


constexpr auto tamañodeox = 10;
using namespace std;
int main()
{
  
    /*
   cout << "escribe tu nombre wey\n";
   string st;
   cin >> st;
   string sts[] = { "marco" , "david" , "dave" , "lisa" , "carol"};
*/
  
    
   
   
    cout << "Bienvenido" << endl;
 
    char ox[tamañodeox];
    
    int salto = 5;

int prueba = size(ox);
for (int i = 0; i < prueba; i++) 
{

    ox[i] = 'o';
    
}

   random_device rd;
   mt19937 generador(rd());
   uniform_int_distribution<> eligeme(0, prueba);

   int randomS = eligeme(generador);
   
   ox[randomS] = 'x';
  //int sw = copy(8, 8, 8);
   
   
   char usuario = 'd';


   int numero = 0;
   bool activo = true;
  
   int laX = 0;

  while (activo) {
      for (int i = 0; i < prueba; i++) {
          if (ox[i] == 'x') {
              laX = i;
         }
      }
 
      if (laX < numero) 
      {
          cout << "efe" << endl;
         
          int us = laX + 1;
          if (us < prueba) 
          {
          cout << laX << " " << us << endl;
          try {
              ox[us] = 'x';
              ox[laX] = 'o';
          }
          catch (errc) {
              cout << "error :C";
          }
          }
          else {
            //  ox[randomS] = 'o';
            //  ox[us] = 'x';
              cout << "uh" << endl;
          }
      }
      else 
      {
          int us = laX - 1;
         // cout << us << endl;
          if (us < 0) {
              cout << "wey ay un muro no puedo pasar (??" << endl;
             
          }
          else {
             try {
                  ox[us] = 'x';
                  ox[laX] = 'o';
              }
              catch (errc) {
                  cout << "error :CC" << endl;
              }
          }
      }
          cout  << randomS << " " << laX <<  endl;
      cin >> usuario;
      switch (usuario) {
      case('w'): {
          if (numero > prueba) {

          }
          else {
          
          }
          break;
      }
      case('s'): {
          if (numero > prueba) {

          }
          else {

          }
          break;
      }
      case('d'):
      {
          if (numero > prueba) {

          }
          else {
              numero++;
          }

          break;
      }
      case('a'):
      {
          if (numero < 1)
          {
          }
          else {
              numero--;
          }
          break;
      }
      case('p'): 
      {
          
          for (int i = 0; i < prueba; i++) {
              cout << ox[i];
          }
          cout << endl;
          break;
      }
      case('h'): {
          cout << "a,d izquierda a derecha. , w,s arriba y abajo. p para imprimir el matriz o grafico, h de ayuda. e para salir." << endl;
          break;
      } case('e'): 
      {
          activo = false;
          break;
      }
               
      default: 
      {
          cout << "Usa w,s,d,a no Tus comandos raros, mas info al poner h" << endl;
          break;
      }
      }
          
      
      
      try
      {
      if (ox[numero] == 'x') {
          cout << "booooooo" << endl;
      }
      else {
          cout << "nada" << endl;
      }
      } catch(errc)
      {
          cout << "ono bugete creo?";
      } 
      
  }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
