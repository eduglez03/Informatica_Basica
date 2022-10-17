// ENUNCIADO PROBLEMA: https://jutge.org/problems/P90615_en

#include<iostream>

int main()
{
    int n1, n2, n3, mayor;

    //cout << "Introduzca el primer numero (entero): ";
    std::cin >> n1;
    //cout << "Introduzca el segundo numero (entero): ";
    std::cin >> n2;
    //cout << "Introduzca el tercer numero (entero): ";
    std::cin >> n3;

    if ( n1 > n2 )

        if ( n1 > n3 )
            mayor = n1;
        else
            mayor = n3;

    else

        if ( n2 > n3 )
            mayor = n2;
        else
            mayor = n3;

    std::cout << mayor << std::endl;

    return 0;
}
