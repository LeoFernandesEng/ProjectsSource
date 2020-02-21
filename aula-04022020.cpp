// aula-04022020.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale>

using namespace std;

class String { // Classe String com os metodos e atributos criados nela.
private:
    char varChar;
    const char* varString;
    //String* varString1;
public:
    int sizeChar();
    int sizeChar(char* var);
    int indiceChar(char var);
    void lengthChar(const char* var);
    char* upperChar(int a, int b);
    char* lowerChar(int var1, int var2);
    char* toggleChar(char var1, char var2);
    String();
    String(char);
    String(const char*);

}; //Fim da classe String
    
String::String() {
    cout << "Chamada de contrutor nulo String()" << endl;
}// (Item a - i ) 

String::String(char var) { // (Item a - ii )
        //cout << "Chamada de contrutor com paramentro char String(char var)" << endl; 
        varChar = var; 
}//Construtor com paramentro char

String::String(const char* var) { // (Item a - iii )
        //cout << "Chamada de contrutor com paramentro string String(char* var)" << endl;
        varString = var;
        //varString1 = new String(var);
}//Construtor com paramentro string


char* String::upperChar(int a, int b) {

    String* varString1 = new String(varString);
    char* var = new char[varString1->sizeChar()];

    int i,j;

    for (j = 0; varString[j] != '\0'; j++);
        var[j] = varString[j];

    for (i = 0 ; var[i] != '\0'; i++)
    {
        if (i > a && i < b) {
            if (var[i] >= 'a' && var[i] <= 'z')
                var[i] -= 32;
        }
    }
    return var;
}

char* String::lowerChar(int a, int b) {

    String* varString1 = new String(varString);
    char* var = new char[varString1->sizeChar()];

    int i,j;

    for (j = 0; varString[j] != '\0'; j++); {
        var[j] = varString[j];
    }
    for (i = 0; var[i] != '\0'; i++)
    {
        if (i > a && i < b) {
            if (var[i] >= 65 && var[i] <= 92)
            {
                //var[i] = var[i] + 32;
                var[i] += 32;
            }
        }
    }
    return var;
}

int String::sizeChar() { // (Item e )
    int i;
    //cout << varString;
    for ( i = 0; varString[i] != '\0'; i++ ) {
        //cout << "Letter: " << varString[i] << endl;
     }
    return i;
 }

int String::sizeChar(char* var) { // (Item e )
    int i;
    //cout << varString;
    for (i = 0; varString[i] != '\0'; i++) {
        //cout << "Letter: " << varString[i] << endl;
    }
    return i;
}

int String::indiceChar(char var) { // (Item f )
    int i;
    bool verifica = false;
    for (i = 0; varString[i] != '\0'; i++) {
        if (varString[i] == var) {
            cout << "indice " << i + 1 << " - caractere: '"<< varString[i] << "'" << endl;
            verifica = true;
            return i;
        }
        else {
            verifica = false;
        }
    }
    if (verifica == false) {
        cout << "caractere '" << var << "' nao pertence a String '" << varString << "'" << endl;
    }
}

void begin(String* var) {
    int sizeString, indiceString, resposta;
    char r;

    
        system("cls");
        cout << "String: " << var << endl;
        cout << " ---------------------------------------------------------------------------" << endl;
        cout << "| 1 - Tamanho da String                                                     |" << endl;
        cout << "| 2 - indice de um caractere especifico                                     |" << endl;
        cout << "| 3 - Exit                                                                  |" << endl;
        cout << " ---------------------------------------------------------------------------" << endl;
        cout << "\nQual operacao deseja fazer com a string selecionada ?: ";
        cin >> resposta;

        while (resposta != 3) {
        switch (resposta)
        {
        case 1:
            cout << "\nSelecionado: "<< resposta << endl;
            sizeString = var->sizeChar();
            cout << "O tamanho da string e : " << sizeString << endl;
        case 2:
            cout << "\nSelecionado: "<< resposta << endl;
            cout << "Qual o caractere voce deseja retornar o indice? ";
            cin >> r;
            indiceString = var->indiceChar(r);
            cout << "\nO indice retonardo e : " << indiceString << endl;
        case 3:
            break;
        default:
            break;
        }
    }
}

int main()
{
    String* varA = new String("Eduardo");

    cout << varA->sizeChar();
    cout << varA->lowerChar(0, 2);
    // String a = b + "qualquer coisa"
    
    //setlocale(LC_ALL, "pt-br");

    /*const char* nomeA = "Leonardo"; 
    const char* nomeB = "Eduardo"; 
    const char* nomeC = "Eriko";

    String* varA; 
    String* varB; 
    String* varC; 
    
    int resposta,sizeString, indiceString;
    
    cout << "1 - String: " << nomeA << "\n2 - String: " << nomeB << "\n3 - String: " << nomeC << endl;
    cout << "\nQual String deseja selecionar(1, 2 ou 3) ? ";
    cin >> resposta;

    switch (resposta)
    {
    case 1:
        //varA = new String(nomeA);
        begin(new String(nomeA));
    case 2:
        //varB = new String(nomeB);
        begin(new String(nomeB));
        break;
    case 3:
        //varC = new String(nomeC);
        begin(new String(nomeC));
    default:
        break;
    }*/
    
    _getch();
}