#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Estudiante

{
	private: //declarando atributos
	  long matricula;
	  string nombre;
	  string materia;
	  int nota1, nota2, nota3;
	  float notaf,prom;
	 
	public: //declarando metodos
	estudiante();//contructor1
	estudiante(long , string , string , int , int , int );//constructor2
	void setmatricula(long pMatricula);
	void setmateria(string pMateria);
	void setnombre(string pNombre);
	void datos();
	void setnota1(int pNota1);
	void setnota2(int pNota2);
	void setnota3(int pNota3);
	long getmatricula();
	string getnombre();
	string getmateria();
	int getnota1();
	int getnota2();
	int getnota3();
	int sumatoria();
	int promedio();

};
	 //estudiante::estudiante(long Matricula , string Nombre , string Materia , int Nota1 , int Nota2 , int Nota3 ){
    Estudiante::estudiante(long _Matricula , string _Nombre , string _Materia , int _Nota1 , int _Nota2 , int _Nota3){
	
		matricula=_Matricula;
		nombre=_Nombre;
		materia=_Materia;
		nota1=_Nota1;
		nota2=_Nota2;
		nota2=_Nota3;
	}
	
	  void Estudiante::setmatricula(long pMatricula)
	 {
			matricula = pMatricula;
     }
     void Estudiante:: setnombre (string pNombre)
     {
			nombre = pNombre;
	 }
	 void  Estudiante:: setmateria (string pMateria )
	{
			materia = pMateria;
	}
	void Estudiante:: setnota1(int pNota1){
		    nota1= pNota1;
	}
		void Estudiante:: setnota2(int pNota2){
		    nota2= pNota2;
	}
		void Estudiante:: setnota3(int pNota3){
		    nota3= pNota3;
	}
	long Estudiante::getmatricula(){
		return matricula;
	}	
	string Estudiante::getnombre(){
		return nombre;
	}
	string Estudiante::getmateria(){
		return materia;
	}
	int Estudiante::getnota1(){
		return nota1;
	}
	int Estudiante::getnota2(){
		return nota2;
	}
	int Estudiante::getnota3(){
		return nota3;
	}
	void Estudiante::datos(){
		
	}
	int Estudiante::sumatoria(){
		cout<< "Ingrese La nota 1 "<<endl;
		cin>> nota1;
		cout<< "Ingrese La nota 2 "<<endl;
		cin>> nota2;
		cout<< "Ingrese La nota 3 "<<endl;
		cin>> nota3;
	
		notaf=nota1+nota2+nota3;
		cout<< "La suma es  "<< notaf<<endl;
		return notaf;
	}
	int Estudiante::promedio(){
		prom= (notaf/3);
		cout<< "El promedio es "<<prom<<endl;
		return prom;
		
	}

		
	
	
	
	
	
