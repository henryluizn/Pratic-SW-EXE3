#ifndef RETANGULO_HPP
#define RETANGULO_HPP
#include <string>

using namespace std;
class Retangulo
{
    private:
    // ATRIBUTOS
        float base;
        float altura;
        float area;
        float perimetro;
        string nomeRetangulo; 
    // METODOS
        // FUNCOES MEMBROS PARA CALCULOS
        float calculaArea();
        float calculaPerimetro();
    
    // METODOS
    public:
        // GETTERS AND SETTERS
        void setAltura(string novaAltura);
        void setBase(string novaBase);
        void setNomeRetangulo(string novoNome);
        void setArea(Retangulo ret);
        void setPerimetro(Retangulo ret);
        
        float getAltura();
        float getBase();
        string getNomeRetangulo();
        float getArea();
        float getPerimetro();

};
#endif