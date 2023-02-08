#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//clases
using namespace std;

class Neurona
{		
	private:
        int id;
        float voltaje;
        int posicion_x;
		int posicion_y;
		int red;
		int green;
		int blue;

    public:
        neurona();
        neurona(int id, float voltaje,int posicion_x, int posicion_y, int red, int green, int blue);
       ~Neurona();

        int getId(void);
        void setId(int);

        float getVoltaje(void);
        void setVoltaje(float);

        int getPosicion_x(void);
        void setPosicion_x(int);

        int getPosicion_y(void);
        void setPosicion_y(int);

        int getRed(void);
        void setRed(int);

        int getGreen(void);
        void setGreen(int);

        int getBlue(void);
        void setBlue(int);
};

class nodo
{
	public:
		nodo();
		~nodo();
		Neurona dato;
		nodo *sig;
		nodo *ant;
		void eliminar_todo();
	protected:
};


class lista
{
	public:
		lista();
		~lista();
		
		nodo *h;
		nodo *t;
		
		//lista de operaciones
		
		void inicializa(void);
		void insertaInicio(Neurona);
		void insertaFinal(Neurona);
		void print();
		bool vacia();
		nodo* anterior(Neurona);
		nodo* siguiente(Neurona);
		void vaciar();
		int size();
};



