#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#define E 5

typedef int entero;
using namespace std ;

void ingresar(entero v[10]){
    cout<<"INGRESO"<<endl;
	for(entero i=0;i<10;i++){
		cout<<"Valor "<<i+1<< ": "<<endl;
		cin>>v[i];
	}
}

void encerar(entero v[10]){
    cout<<"ENCERAR"<<endl;
	for(entero i=0;i<10;i++) v[i]=0;
}

void ordenar(int p[10]){
    cout<<"ORDENAR"<<endl;
    int aux;
    for (int i=0;i<10;i++)
		for(int j=i+1;j<10;j++)
			if(p[i]>p[j]){
	            aux=p[i];
	            p[i]=p[j];
	            p[j]=aux;
			}
}

void imprimir(entero v[10]){
	for(entero i=0;i<10;i++)
	cout<<v[i]<<", ";
}


entero mcd(entero v[10]){
    cout<<"OPERAR"<<endl;
	entero r, mcd;

	for(entero i=0;i<10;i++){
		if (i == 0) mcd = v[i];

		do {
			r = mcd % v[i];
			mcd = v[i];
			v[i] = r;
		} while (r != 0);
	}

	return mcd;
}

entero main(){
	int v[10], res;
	
	encerar(v);
	imprimir(v);
	system("pause");
	
	ingresar(v);
	imprimir(v);
	system("pause");
	
	ordenar(v);
	imprimir(v);
	system("pause");
	
	res = mcd(v);
	printf("El maximo comun divisor es: %d", res);
	system("pause");
	
	return 0;
}
