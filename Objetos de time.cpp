#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main ()
{
  time_t timer;               //guarda el tiempo del computador en la variable llamada timer
  struct tm y2k = {0};        //crea una estructura de tiempo y la guarda en una variable llamada y2k
  double seconds;             //almacena la estrucutra de y2k

  y2k.tm_hour = 0;            //crea una variable constante igualada a 0
  y2k.tm_min = 0;             //crea una variable constante igualada a 0
  y2k.tm_sec = 0;             //crea una variable constante igualada a 0
  int ano;                    // crea una variable int llamada ano aun no definida
  cout<<"digite el año:"; cin>> ano;//imprime el mensaje "digite el año:" en el terminal y define el valor de la varible int anterior
  int mes;                       // crea una variable int llamada mes aun no definida
  cout<<"digite el mes:"; cin>> mes;        //imprime el mensaje "digite el mes:"en el terminal y define el valor de la varible int anterior
  int dias;                       // crea una variable int llamada dias aun no definida
  cout<<"digite el dia:"; cin>> dias; //imprime el mensaje "digite el dia:"en el terminal y define el valor de la varible int anterior
  y2k.tm_year=ano-1900;        // variable que depende de una operacion con otra variable

  y2k.tm_mon=mes-1;           // variable que depende de una operacion con otra variable

  y2k.tm_mday=dias;           // variable que depende de una operacion con otra variable


  time(&timer);                  // convierte en tiempo unix lo de la varible timer

  seconds = difftime(timer,mktime(&y2k)); //es una operacion de diferencial de tiempo entre la estructura y2k y el timer en tiempo unix) 
  float dia=seconds/86400;        // operacion que convierte el tiempo unix (seg) en dias
  printf ("has vivido %.f :smile: ",dia);   // imprime el valor de la variable dia con una frase
  return 0;
}