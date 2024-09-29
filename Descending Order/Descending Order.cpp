// Descending Order.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cinttypes>

#include <vector>
uint64_t MY_descendingOrder(uint64_t a)
{
    uint64_t Num = 0;
   
    std::vector<int> Number;
    do {
        Number.push_back(a % 10);
        a = a / 10;
    } while (a != 0);
    
    for (uint64_t j = 0; j < Number.size()-1; j++)
    {
        uint64_t completion = 0;
        for (uint64_t i = 0; i < Number.size()-1; i++)
        {
            if (Number[i] < Number[i + 1])
            {
                uint64_t temp = Number[i];
                Number[i] = Number[i + 1];
                Number[i + 1] = temp;
            }
            else { completion++; }
        }
        if (completion == Number.size())
        {
            break;
        }
    }
    for (uint64_t j = 0; j < Number.size(); j++)
    {
        Num = Num * 10 + Number[j];
    }
    return Num;
}	

#include <string>
#include <algorithm>
uint64_t SHORTEST_descendingOrder(uint64_t a)
{
    std::string s = std::to_string(a);
    std::sort(s.rbegin(), s.rend());
    return std::stoull(s);
}

uint64_t BEST_descendingOrder(uint64_t a)
{
    std::vector<int> c;

    for (uint64_t b = a; b > 0; b /= 10)
        c.push_back(b % 10);

    for (int i = 0; i < c.size(); i++)
        for (int j = i; j < c.size(); j++)
            if (c[i] < c[j])
                std::swap(c[i], c[j]);

    a = 0;

    for (int i = 0; i < c.size(); i++)
        a = a * 10 + c[i];

    return a;
}
int main()
{
    std::cout << "Hello World!\n";
    uint64_t a = 997643331;
    uint64_t Number = MY_descendingOrder(a);
    std::cout << Number;
}

