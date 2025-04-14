#include <iostream>

using namespace std;

/*
Este codigo eh referente ao trabalho 1 da disciplina de Algoritmos e Estruturas de Dados 2.
Professor: Marcelo Cohen
Turma: 11

como executar:
make t1alest2
./t1alest2
apos isto, voce soh precisa inserir o tamanho, pressionar enter e digitar os valores do 
vetor separados por um espaco, assim:
7
5 6 0 4 2 3 1
*/

int main()
{
    int tamanho;   // tamanho do vetor
    int op = 0; // numero de operacoes
    bool repetindo = false; // flag que identifica repeticoes no vetor
   
    cin >> tamanho;   
    
    int receita[tamanho];  // receita para a danca
    int ordemAtual[tamanho];     // vetor que sera alterado
    int ordemAntiga[tamanho]; // vetor que recebe a ultima configuracao

    for (int i = 0; i < tamanho; i++)
    { // preencher receita e ordem antiga (primeira versao)
        cin >> receita[i];
        ordemAntiga[i] = receita[i];
    }

    for (int i = 0; i < tamanho; i++)
    { // primeira mudanca baseada na receita
        ordemAtual[i] = ordemAntiga[receita[i]];
    }
    
    while (!repetindo)
    { //enquanto nao estiver repetindo
        bool diferente = false;
        // verifica se o vetor foi repetido
        for (int i = 0; i < tamanho; i++)
        {
            if (ordemAtual[i] != receita[i])
            {
                diferente = true;
                break;
            }
        }
        if (!diferente)
        { // verifica se a flag diferente eh true ou false
            repetindo = true;
            break;
        }

        for (int i = 0; i < tamanho; i++)
        { //mudanca do vetor atual
            ordemAtual[i] = ordemAntiga[receita[i]];
        }
        op++; // aumenta o numero de operacoes necessarias
        
        for (int i = 0; i < tamanho; i++)
        { //guarda a modificacao no vetor ordemAntiga
            ordemAntiga[i] = ordemAtual[i];
        }
    }

    cout << "op: " << op << endl;
    return 0;
}
