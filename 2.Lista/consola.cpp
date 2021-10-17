#include <iostream>
#include <string>
#include "UListaP.h"
#include "UListaS.h"
#include "UListaV.h"

using namespace std;

int main() {
	CSMemoria* mem = new CSMemoria();
	mem->new_espacio("dia,mes,a�o");
	ListaS* l = new ListaS(mem);
	l->inserta_primero(13);
	l->inserta_ultimo(43);
	mem->new_espacio("a,b,c");
	l->inserta_primero(89);
	l->inserta_ultimo(14);
	l->inserta(l->fin(), 103);
	cout << l->to_str() << endl;
	mem->new_espacio("1,2,3,4,5");
	mem->mostrar();
	system("pause");
	return 0;
}
