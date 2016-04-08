

#ifndef RACIONAIS_H
#define RACIONAIS_H
#include <iostream>
#include <fstream>
//------------------ Definindo classe Racionais -------------------
class Racionais {
   friend std :: ostream& operator << (std :: ostream&, const Racionais &); //não usar CONST
   friend std :: istream& operator >> (std :: istream&, Racionais &);
   
   
	public:
            int nume, deno;
            Racionais () : nume (0), deno (1) {};                                    // método 1 -> construtora default r1;
            Racionais (const int &_val): nume(_val), deno(1){};                      // método 2 -> r2(1);                                          
            Racionais (const int &, const int &);                                    // método 3 -> r3(2,3);
            Racionais (const Racionais &_rac): nume(_rac.nume), deno (_rac.deno) {}; // método 4 -> construtora de cópia;

};

#endif /* RACIONAIS_H */

