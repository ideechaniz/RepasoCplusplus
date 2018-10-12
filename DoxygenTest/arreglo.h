/**
  * @file arreglo.h
  * @version 1.0
  * @date 08/10/2018
  * @author Iker Echaniz & DuarteCorporation
  * @title Clase plantilla Arreglo
  * @brief Clase para el manejo estadistico de datos
  * @code
    int main()
    {
        const double valores[] = {1 ,2, 3, 4, 5, 6, 7, 8, 8 };
        Arreglo<double> A(valores, sizeof(valores)/sizeof(double));

        cout << "Valores: " << A           << endl;
        cout << "Media : "  << A.media()   << endl;
        cout << "Mediana: " << A.mediana() << endl;
        cout << "Moda: "    << A.moda()    << endl;
        return 0;
    }
    @endcode
  */

#ifndef ARREGLO_H
#define ARREGLO_H

#include "funciones.h"
#include <vector>
#include <algorithm>
#include <iostream>

/**
 * @brief Estructura auxiliar de la estructura Moda
 */
template<typename Tipo> struct Mayor {
         //Estructura plantilla mayor
         Tipo valor;
         int ocurrencias;
};
/**
 * @brief Estructura auxiliar de la clase Arreglo
 */
template <typename Tipo> struct Moda {
    // Estructura plantilla Moda
    Tipo valor;
    bool hay_moda;

    Moda(const Mayor<Tipo> &ma): valor(ma.valor), hay_moda(true) {
        if (ma.ocurrencias == 1) {
            hay_moda = false;
        }
    }
};
/**
 *@brief Operador de insercion de la estructura Moda
 *@param o ostream de salida
 *@param mo Moda de entrada
 *@return ostream&
 */
template< typename Tipo> std::ostream &operator <<(std::ostream &o,
      const Moda<Tipo> &mo)
{
    // hay moda para mostrar
    if (mo.hay_moda){
        return o << mo.valor;
    }
    return o;
}
/**
 * @brief Enumeracion para elegir la forma de ordenar el Arreglo
 */
enum Ordenamiento {
    // Enumeracion de ordenamiento
    ASCENDENTE = 0,
    DESCENDENTE = 1
};
/**
 * @brief Clase para almacenar datos y hacer operaciones estadisticas
 */
template<typename Tipo> class Arreglo {
    // Clase plantilla Arreglo
public:
    /**
     * @brief Constructor por defecto de Arreglo
     */
    Arreglo() : _valores (NULL), _tam(0) {}
    /**
     * @brief Constructor de Arreglo
     * @param valores Representa el arreglo de valores
     * @param tam Tamaño del arreglo
     */
    Arreglo(const Tipo *valores, int tam);
    /**
     * @brief Constructor por defecto de Arreglo
     * @param otro Otro arreglo
     */
    Arreglo(const Arreglo &otro);
    /**
     * @brief Destructor de la clase Arreglo
     */
    ~Arreglo() { delete[] _valores; }
    /**
     * @brief media Obtiene el valor de la media aritmetica
     * @return Valor calculado
     */
    double media() const;
    /**
     * @brief mediana Obtiene el valor intermedio de la serie de valores
     * @return El valor intermedio
     */
    Tipo mediana() const;
    /**
     * @brief moda Obtiene el valor con mayor numero de ocurrencias
     * @return Moda
     */
    Moda<Tipo> moda() const;
    /**
     * @brief ordena Ordena el contenido del Arreglo
     * @param ord Forma de ordenamiento
     */
    void ordena(Ordenamiento ord= ASCENDENTE);
    /**
     * @brief Operador de insercion de la clase Arreglo
     * @param o ostream&
     * @param A Referencia constante a un Arreglo
     * @return ostream&
     */
    template<typename Type> friend std::ostream &operator<<(std::ostream &o,
                                                    const Arreglo<Type> &A);
private: // lo privado no se documenta, lo protected si.
    Tipo *_valores;
    int _tam;

    void copia(std::vector<Tipo> &v) const;
    void asigna(const std::vector<Tipo> &v);
};

// Se han documentado en la definicion asi que no hay que volver a documentar.
template <typename Tipo> Arreglo<Tipo>::Arreglo(const Tipo *valores, int tam)
    :_valores(new Tipo[tam])
    , _tam(tam)
{
    // Copia valores
    for(int i=0; i<tam; i++) {
        _valores[i] = valores[i];
    }
}

template<typename Tipo> Arreglo<Tipo>::Arreglo(const Arreglo &otro)
    : _valores(new Tipo[otro._tam])
    , _tam(otro._tam)
{
    // Copia valores
    for(int i=0; i<_tam; ++i){
        _valores[i] = otro._valores[i];
    }
}

template<typename Tipo> double Arreglo<Tipo>::media() const {
    // Obtiene la media de los valores (promedio)
    double S=0; // Suma
    for(int i=0; i<_tam; i++){
       S+= _valores[i] ;
    }
    return S / _tam; // Resultado
}

template<typename Tipo> Tipo Arreglo<Tipo>::mediana() const {
    // Obtiene la mediana de los valores (valor intermedio)
    Arreglo A(*this); // Copia
    A.ordena();
    // Si el tamaño es par:
    if (es_par(A._tam)){
        const int pos1= A._tam /2;
        const int pos2 = pos1 -1 ;
        const float S= A._valores[pos1] + A._valores[pos2];
        return S/2; // Resultado
    }
    // Si el tamaño es impar:
    return A._valores[A._tam/2]; // Resultado
}

template<typename Tipo> Moda<Tipo> Arreglo<Tipo>::moda() const{
    // Obtiene el valor mas frecuente
    using namespace std;
    vector <Tipo> valores, clases;
    copia(valores);
    // Llena clases
    for(int i=0; i< _tam; i++){
        const int cnd= count(clases.begin(), clases.end(), _valores[i]);
        if (cnd==0){
            clases.push_back(_valores[i]);
        }
    }
    // Busca la mayor ocurrencia
    const int tamcss = clases.size();
    Mayor<Tipo> ma;
    ma.valor= clases[0];
    ma.ocurrencias = count(valores.begin(), valores.end(), clases[0]);
    for( int i = 1; i< tamcss; i++){
        const int cnt= count(valores.begin(), valores.end(), clases[i]);
        if ( ma.ocurrencias < cnt){
            ma.ocurrencias = cnt;
            ma.valor = clases[i];
        }
    }
    return Moda<Tipo>(ma);
}

template<typename Tipo> void Arreglo<Tipo>::ordena(Ordenamiento ord){
    // Ordena arreglo
    using namespace std;
    vector<Tipo> valores;
    copia(valores);
    sort(valores.begin(), valores.end(), ord==ASCENDENTE ? menor: mayor );
    asigna(valores);
}


template<typename Tipo> void Arreglo<Tipo>::copia(std::vector<Tipo> &v) const
{
    // Operacion contraria de asigna
    const int tam= v.size();
    if( tam < _tam) {
        v.resize(_tam);
    }
    for(int i=0; i< _tam; i++){
        v[i]= _valores[i];
    }
}

template<typename Tipo> void Arreglo<Tipo>::asigna(const std::vector<Tipo> &v)
{
    // Operacion contraria de copia
    for( int i=0; i<_tam; i++){
        _valores[i] = v[i];
    }
}

template<typename Type> std::ostream &operator<<(std::ostream &o,
     const Arreglo<Type> &A)
{
    // Muestra arreglos
    o << A._valores[0];
    for (int i=1; i< A._tam; i++){
        o << ", " << A._valores[i];
    }
    return o;
}

#endif // ARREGLO_H
