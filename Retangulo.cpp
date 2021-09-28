#include "Retangulo.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include "string.h"
#include <regex>

using namespace std;


bool isNumber(const string altura){
    return altura.find_first_not_of("0123456789.") == string::npos;
}


void Retangulo::setAltura(string novaAltura)
{
        // verifica se o dado inserido possui algum caracter que não se encaixa no padrão [0-9 + .]
    if (isNumber(novaAltura))
    {
        if (stof(novaAltura))
        {
            altura = stof(novaAltura);
        }else{
            throw 1;
        }
    }else{
        throw 1;
    }    
}


void Retangulo::setBase(string novaBase)
{
    if (isNumber(novaBase))
    {
        if (stof(novaBase))
        {
            base = stof(novaBase);
        }else{
            throw 1;
        }
    }else{
        throw 1;
    }
}


void Retangulo::setNomeRetangulo(string novoNome)
{
    if (strlen(novoNome.c_str()) > 0)
    {
        nomeRetangulo = novoNome;
    }else
    {
        throw 1;
    }
}


void Retangulo::setArea(Retangulo ret)
{
    try{
        area = ret.calculaArea();
    }
    catch(int e){
        cout << "\n";
    }
}


void Retangulo::setPerimetro(Retangulo ret)
{
    try
    {
        perimetro = ret.calculaPerimetro();
    }
    catch(int e)
    {
        cout << "\n";
    }
    
}


float Retangulo::getAltura()
{
    return altura;
}


float Retangulo::getBase()
{
    return base;
}


string Retangulo::getNomeRetangulo()
{
    return nomeRetangulo;
}


float Retangulo::getArea()
{
    return area;
}


float Retangulo::getPerimetro()
{
    return perimetro;
}


float Retangulo::calculaArea()
{
    try
    {
        float area =  base * altura;

        if (area < 0)
        {
            cout << "\n\tNao eh possivel calcular a area com pelo menos um dos lados negativo. Tente novamente\n";
            throw -1;     
        } else if (area == 0)
        {
            cout << "\n\tNao eh possivel calcular a area com pelo menos um dos lados igual a zero. Tente novamente\n";
            throw -1;
        } else if ((base < 0) || (altura < 0))
        {
            cout << "\n\tNao eh possivel calcular a area com pelo menos um dos lados negativo. Tente novamente\n";
            throw -1;
        }else if (base == altura)
        {
            cout << "\n\tNao existe um retangulo com lados iguais. Tente novamente.\n";
            throw -1;
        }
        
        
        cout << "\n\tA area eh: " << area;
        return area;
    }
    catch(const std::exception& e)
    {
        cout << "\nErro ao calcular a area do retangulo. Tente novamente.\n";
        throw -1;
    }
}


float Retangulo::calculaPerimetro(){
    
    try
    {
        float perimetro = 2 * (base + altura);

        if (perimetro < 0) 
        {
            cout << "\n\tNao eh possivel o calcular o perimetro com lados negativos. Tente novamente.\n";
            throw 1;
        }else if (perimetro == 0)
        {
            cout << "\n\tNao eh possivel calcular o perimetro com pelo menos um lado igual a zero. Tente novamente.\n";
            throw 1;
        }else if ( (base < 0) || (altura < 0))
        {
            cout << "\n\tNao eh possivel calcular o perimetro com pelo menos um lado igual a zero. Tente novamente.\n";
            throw 1;
        }else if (base == altura)
        {
            cout << "\n\tNao eh possivel calcular o perimetro para lados iguais. Tente novamente.\n";
            throw 1;
        }
        
        cout << "\n\tO perimetro eh: " << perimetro;
        return perimetro;
    }
    catch(const std::exception& e)
    {
        cout << "\nErro ao calcular o perimetro do retangulo. Tente novamente.\n";
        throw 1;
    }
}