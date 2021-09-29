#include "Retangulo.hpp"
#include <iostream>
#include <sstream>

using namespace std;


void maiorArea(Retangulo ret_1, Retangulo ret_2)
{
    if ( (ret_1.getArea() > 0) && (ret_2.getArea() > 0))
    {
        if (ret_1.getArea() > ret_2.getArea())
        {
            cout << "\n\nA maior area eh do retangulo " << ret_1.getNomeRetangulo() << " : " << ret_1.getArea();
        }else if (ret_1.getArea() == ret_2.getArea())
        {
            cout << "\n\nAs duas areas sao iguais!";
            throw 1;
        }else if (ret_1.getArea() < ret_2.getArea())
        {
            cout << "\n\nA maior area eh do retangulo " << ret_2.getNomeRetangulo() << " : " << ret_2.getArea();
        }
    }
}


void maiorPerimetro(Retangulo ret_1, Retangulo ret_2)
{
    if ((ret_1.getPerimetro() > 0) && (ret_2.getPerimetro() > 0))
    {    
        if (ret_1.getPerimetro() > ret_2.getPerimetro())
        {
            cout << "\n\nO maior perimetro eh o do retangulo " << ret_1.getNomeRetangulo() << " : " << ret_1.getPerimetro();
        }else if (ret_1.getPerimetro() == ret_2.getPerimetro())
        {
            cout << "\n\nOs dois retangulos possuem perimetros iguais!";
            throw 1;
        }else if (ret_1.getPerimetro() < ret_2.getPerimetro())
        {
            cout << "\n\nO maior perimetro eh o do retangulo " << ret_2.getNomeRetangulo() << ": " << ret_2.getPerimetro();
        }
    }
}


Retangulo getDados(Retangulo ret, int i)
{
    cout << "\nLendo dados do " << i << " retangulo:";
    try
    {
        string altura, base, nome;
        cout << "\nAltura: " ;
        getline(cin, altura);
        
        cout << "\nBase: ";
        getline(cin, base);

        cout << "\nNome Retangulo: ";
        getline(cin, nome);

        ret.setNomeRetangulo(nome);
        ret.setAltura(altura);
        ret.setBase(base);
        return ret;
    }
    catch(int e)
    {
        cout << "\nErro ao ler os dados do retangulo. Insira um dado valido.\n";
        return getDados(ret, i);
    }
    
}

int main(int argc, char const *argv[])
{
    Retangulo ret_1;
    Retangulo ret_2;
    cout << "\nEste programa realiza o calculo da area e do perimetro de dois retangulos" 
         << "\nNo final da execucao sera retornado qual o retangulo de maior area e de maior perimetro\n";


    ret_1 = getDados(ret_1, 1);
    ret_2 = getDados(ret_2, 2);

    try
    {
        cout << "\nArea e perimetro do retangulo " << ret_1.getNomeRetangulo() << " : ";
        ret_1.setArea(ret_1);
        ret_1.setPerimetro(ret_1);

        cout << "\nArea e perimetro do retangulo " << ret_2.getNomeRetangulo() << " : ";
        ret_2.setArea(ret_2);
        ret_2.setPerimetro(ret_2);
        
        maiorArea(ret_1, ret_2);
        maiorPerimetro(ret_1, ret_2);    
    }
    catch(int i)
    {
        cout << "\nAbortando execucao.\n";
    }    

    return 0;
}