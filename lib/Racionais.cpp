

#include <Racionais.h>
#include <iostream>



Racionais:: Racionais (const int &_a, const int &_b) : nume (_a), deno (_b){
     if (deno ==0) {
        std :: cout << "------ Denominador nulo ------" << std :: endl;
        nume=0, deno=1;
     }
}
 std :: ostream& operator << (std :: ostream& _os, const Racionais & _rac){
    _os << _rac.nume << "/" << _rac.deno;
    return _os;
}
 
 std :: istream &operator >> (std :: istream&_os,  Racionais &rac){
	_os >> rac.nume >> rac.deno;
	return _os;
}
 