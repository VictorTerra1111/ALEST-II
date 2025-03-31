#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "../HPPS/File_manage.hpp"

using namespace std;

// funcao que le as informacoes do arquivo e as coloca em uma list STL

list<string> ReadInfo()
{
    string palavra; // variaveis para armazenar os valores do arquivo
    list<string> lista; // lista para retornar os objetos lidos

    ifstream infile;
    infile.open("DomCasmurro_utf8.txt"); // abre o arquivo 

    if (!infile)
    {
        cerr << "ERROR IN FILE" << endl; // codigo de erro
    }
  
    while (infile >> palavra)
    {
        lista.push_back(palavra);
    } // le todas as informacoes de cada objeto e adiciona a lista

    infile.close(); // fecha o arquivo

    return lista; // retorna a lista
}
