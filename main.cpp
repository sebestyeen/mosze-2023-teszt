#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //alulvonas hianyzik
    int *b = new int[NELEMENTS];
    //sor nincs lezarva, "
    std::cout << '1-100 ertekek duplazasa'
    //for ciklus nincs meghatarozva meddig menjen
    for (int i = 0)
    {
        //(i+1)
        b[i] = i * 2;
    }
    //fura for ciklus
    for (int i = 0; i; i++)
    {
        //cout fele hianyzik
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //kezdoertek
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //sor vege
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
