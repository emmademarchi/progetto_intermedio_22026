//file con le dichiarazioni delle funzioni f1 f2 f3 ...
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Func
{
    double (*f)(double, double); //puntatore alla funzione
    double (*dx)(double, double); //derivata parziale in x
    double (*dy)(double, double); //derivata parziale in y
    double min; //minimo della funzione
    double dominio; //dominio della funzione
};
//funzioni del testo
double f1(double x, double y);
double f2(double x, double y);
double f3(double x, double y);
double f4(double x, double y);
double f5(double x, double y);
double f6(double x, double y);
double f7(double x, double y);
double f8(double x, double y);

//derivate parziali in x
double f1_dx(double x, double y);
double f2_dx(double x, double y);
double f3_dx(double x, double y);
double f4_dx(double x, double y);
double f5_dx(double x, double y);
double f6_dx(double x, double y);
double f7_dx(double x, double y);
double f8_dx(double x, double y);

//derivate parziali in y
double f1_dy(double x, double y);
double f2_dy(double x, double y);
double f3_dy(double x, double y);
double f4_dy(double x, double y);
double f5_dy(double x, double y);
double f6_dy(double x, double y);
double f7_dy(double x, double y);
double f8_dy(double x, double y);

//funzione che restituisce la funzione i con le sue derivate , il minimo e il dominio
Func getFunc(int i); //con i che va da 1 a 8; throw index_out_of_bound

#endif
