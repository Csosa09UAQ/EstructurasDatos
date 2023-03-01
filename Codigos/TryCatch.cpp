#include <iostream>
#include <exceptions>

try {
    // código con un error de excepciones estándar
} catch (std::exception &ex)
    std::cout << "Algo ha fallado: " << ex.what() << std::endl;
}

/*double division(double a, double b)
{
    if (b == 0)
        throw 0;
    return a / b;
}

main()
{
    try
    {
        division(10, 0); // Excepcion: 0
    }
    catch (int ex)
    {
        std::cout << "Excepcion: " << ex << std::endl;
    }
}*/


