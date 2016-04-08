//Criar um programa que envolva as técnicas de manipulação de arquivos externos
//Autor: Cairo Martins, 04.04.2016
// Status: incompleto



//***************************************************************************
// C++ INCLUDES
//***************************************************************************
#include <cstdlib>
#include <Racionais.h>
#include <fstream>
#include <iostream>


//***************************************************************************
// MAIN FUNCTION
//***************************************************************************
int main() {
    Racionais R1, R2 (-3), R3(2,-3), R4 (R2), R5, R6, R7, R8, val;
//    int valor;
 const int n(4);
//---------------------------------------------------------------------------
// Escrevendo em arquivo externo
//---------------------------------------------------------------------------
    std :: ofstream output ("Teste.txt");
//    std::ofstream output;
//    output.open ("Teste.txt");
    
    output << R1 << "\n";
    output << R2 << "\n";
    output << R3 << "\n";
    output << R4 << "\n";
    
//        for (int i=0; i< n; i++) {   //escrevendo inteiro 
//        output << i << "\n";
//    }
//    
    
//Obs.: quando "x=" é escrito no arquivo, as variáveis a, b, c assimilam valores
//referentes a estes caracteres, que não são inteiros. Portanto, aleatórios.
        
    output.close ();
    
//---------------------------------------------------------------------------
// Importanto dados de um arquivo externo
//---------------------------------------------------------------------------
//        std :: ofstream output ("Teste.txt");
    std:: ifstream input;
    input.open ("Teste.txt"); //PRECISA EXISTIR
    
//_________________________ TESTE EXISTÊNCIA __________________________________
    
    if (!input){
        std :: cerr << "Arquivo inexistente" << std :: endl;
        abort ();
    }
    
    input >> R5, R6, R7, R8; //copiando dados do arquivo externo
    
//_________________________ COPIANDO VALORES SEQUENCIALMENTE ___________________
//    for (int i=0; i<n; i++){
//        input >> valor;
//        std :: cout << "valor = " << valor << std :: endl;
//    }
 
//______________COPIANDO COM EXTENSAO DESCONHECIDA O ARQUIVO ___________________
//    do {   
//    input >> val;
//        std :: cout << "valor = " << val << std :: endl;
//    }
//    while (!(input.eof()));    
   
//___________________ASSIMILANDO VALORES PARA RACIONAIS ________________________
           for (int i=0; i<n; i++){
        input >> val;
        std :: cout << "valor = " << val << std :: endl;
    }
//    std :: cout << "x= " << R5 << std :: endl; 
//    std :: cout << "x= " << R6 << std :: endl; 
//    std :: cout << "x= " << R7 << std :: endl; 
//    std :: cout << "x= " << R8 << std :: endl; 

    
input.close (); 
    
    return 0;
}

