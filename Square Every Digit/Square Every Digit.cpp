#include <iostream>
#include <list>
#include <cmath>

int MY_square_digits(int num)
{
    std::list <int> Number;

    int Out_Num = 0;
    for (int Num_Temp = num; Num_Temp; Num_Temp /= 10)
    {
        Number.push_front((Num_Temp % 10) * (Num_Temp % 10));
    }
    int Stepeni = 0;
    while (!Number.empty())
    {
        int This_Num_Size = 0;

        Out_Num = Out_Num + Number.back() * pow(10, Stepeni);

        while (Number.back() / pow(10, This_Num_Size) > 9) { Stepeni++; This_Num_Size++; }

        std::cout << Number.back() <<"\t"<< Out_Num<< "\t" << Stepeni << "\n";
        Number.pop_back();
        Stepeni++;
    }
    return Out_Num;
}

int BEST_square_digits(int n) {
    int a = 1;
    int m = 0;
    while (n > 0) {
        int d = n % 10;
        m += a * d * d;
        a *= d <= 3 ? 10 : 100;
        n /= 10;
    }
    return m;
}

#include <string>
int ALSO_BEST_square_digits(int num) {

    std::string s = std::to_string(num);
    std::string ans;
    for (char c : s) {
        int i = c - '0';
        ans += std::to_string(i * i);
    }
    return std::stoi(ans);
}

int main()
{
    std::cout<<"\n"<< MY_square_digits(4567);
}
