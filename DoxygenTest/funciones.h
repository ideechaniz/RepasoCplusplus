/**
  * @file funciones.h
  * @version 1.0
  * @date 08/10/2018
  * @author Iker Echaniz & DuarteCorporation
  * @title Funciones independientes
  * @brief Funciones de utileria
  * @code
   // ejemplo
   int main(){

       cout << boolalpha;
       cout << es_par(7) << endl;
       cout << menor(1,2) << endl;
       cout << mayor(1,2) << endl;
       return 0;
   }
  * @endcode
  *
  */

#ifndef FUNCIONES_H
#define FUNCIONES_H

// Funciones idependientes

/**
 * @brief es_par Indica si un numero es par
 * @param numero Numero para evaluar
 * @return Resultado de la evaluacion
 */
bool es_par(int numero);
/**
 * @brief menor Indica el numero menor
 * @param a Indica el primer numero
 * @param b Indica el segundo numero
 * @return El numero menor
 */
float menor(double a, double b);
/**
 * @brief menor Indica el numero mayor
 * @param a Indica el primer numero
 * @param b Indica el segundo numero
 * @return El numero mayor
 */
float mayor(double a, double b);

#endif // FUNCIONES_H
