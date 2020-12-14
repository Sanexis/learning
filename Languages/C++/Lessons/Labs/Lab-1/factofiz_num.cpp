#include <iostream>

/*
Факторизацию числа (разложение на простые множители).
Множители должны быть упорядочены по неубыванию. 
Подаваемое на вход программе число - натуральное и строго большее 1
*/

int main()
{
    int n;
    std::cout << "Enter number\n>>> ";
    std::cin >> n;
    
    for (int i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            std::cout << i << std::endl;
            n /= i;
        }
    }

    return 0;
}