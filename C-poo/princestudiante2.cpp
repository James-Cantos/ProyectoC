#include <iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include "Estudiante.h"
using namespace std;

 using namespace std;
 using std::string;



int main ()
{

  
  Estudiante e2;
  
  e2.setnombre("Melanie ");
  e2.setmateria("Programacion ");
  e2.setmatricula(2018);
  cout<<e2.getnombre()<<endl;
  cout<<e2.getmateria()<<endl;
  cout<<e2.getmatricula()<<endl;
 
  e2.sumatoria();
  e2.promedio();
  
  
	 
	 
	 
	

	}
