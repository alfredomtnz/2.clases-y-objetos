#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "neurona.h"

//alfredo amezcua martinez

using namespace std;



int main() 
	

lista::lista()
{
	inicializa();
}

lista::~lista()
{
}

bool lista::vacia()
{
	if(h==NULL and t== NULL)
	return true;
	else
	return false;
}

void lista::inicializa(void)
{
	h=NULL;
	t=NULL;
}

void lista::insertaInicio(Neurona x)
{
	nodo *tmp=new nodo();
	tmp->dato=x;
	
	if(vacia())
	{
		h=tmp;
		t=tmp;
	}
	else
	{
		tmp->sig=h;
		h->ant=tmp;
		h=tmp;
	}
}
void lista::insertaFinal(Neurona x)
{
	nodo *tmp=new nodo();
	tmp->dato=x;
	nodo *aux=h;
	
	if(aux==NULL)
	{
		h=tmp;
	}
	else
	{
		while(aux->sig) //null=false
		{
			aux=aux->sig;
		}
		aux->sig=tmp;
	}
}

void lista::print()
{
	nodo *aux=h;
	
	if(aux)
	{
		while(aux)
		{
		cout << " ================================ " << endl;
        cout << " |Id:     #" << aux->dato.getId() << endl;
        cout << " |Voltaje: " << aux->dato.getVoltaje() << endl;
        cout << " |posicion_x: " << aux->dato.getVPosicion_x() << endl;
        cout << " |posicion_y: " << aux->dato.getPosicion_y() << endl;
        cout << " |Red: " << aux->dato.getRed() << endl;
        cout << " |Green: " << aux->dato.getGreen() << endl;
        cout << " |Blue: " << aux->dato.getBlue() << endl;

        cout << " ================================ " << endl;
			aux=aux->sig;
		}
	}
	else
		cout<<"Lista vacia"<<endl;
}


void lista::vaciar()
{
	h=NULL;
	t=NULL;
}
 


int lista::size()
{
    int i = 0;
    nodo* p = h;
	
    while(p)
	{
        i++;
        p = p->sig;
    }
    return i;
}
nodo::nodo()
{
	sig=NULL;
	ant=NULL;
}

nodo::~nodo()
{
}

void nodo::eliminar_todo()
{
	if(sig and ant)
	sig->eliminar_todo();
	delete this;
}

Neurona::neurona()
{
}

Neurona::neurona(int id, float voltaje,int posicion_x, int posicion_y, int red, int green, int blue)
{
	this->id = id;
	this->voltaje = voltaje;
	this->posicion_x= posicion_x;
	this->posicion_y= posicion_y  ;
	this->red = red;
	this->green= green;
	this->blue = blue;
	
}

Neurona::~Neurona()
{
}

int Neurona::getId(void){return id;}
void Neurona::setId(int id){this->id = id;}

float Neurona::getVoltaje(void){return voltaje;}
void Neurona::setVoltaje(float voltaje){this->voltaje = voltaje;}

int Neurona::getPosicion_x(void){return posicion_x;}
void Neurona::setPosicion_x(int posicion_x){this->posicion_x = posicion_x;}

int Neurona::getPosicion_y(void){return posicion_y;}
void Neurona::setPosicion_y(int posicion_y){this->posicion_y = posicion_y;}

int Neurona::getRed(void){return red;}
void Neurona::setRed(int red){this->red = red;}


int Neurona::getGreen(void){return green;}
void Neurona::setGreen(int green){this->green = green;}

int Neurona::getBlue(void){return blue;}
void Neurona::setBlue(int  blue){this-> blue = blue;}






