#include <iostream>
#include "dispositivo.hpp"
#include "celular.hpp"
#include "notebook.hpp"

int main()
{
    Dispositivo jbl_flip4("JBL", "Flip4", 123);
    std::cout << jbl_flip4.get_marca() << std::endl;
    return 0;
}
