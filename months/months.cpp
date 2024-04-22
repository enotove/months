#include <iostream>
#include <string>

enum class months
{
    January = 1, February, March, April, May, June, July, August, September, October, November, December
};


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RUSSIAN");
    int numberIn = 0;
    months month;
    while (true)
    {
        std::cout << "Введите число месяца: ";
        std::cin >> numberIn;
        if (numberIn == 0)
        {
            return 0;
        }
        else if ((numberIn > 12) || (numberIn < 0))
        {
            std::cout << "Неверный месяц" << std::endl;
        }
        else
        {
            month = static_cast<months>(numberIn);
            switch (month)
            {
            case months::January:
                std::cout << "Январь" << std::endl;
                break;
            case months::February:
                std::cout << "Февраль" << std::endl;
                break;
            case months::March:
                std::cout << "Март" << std::endl;
                break;
            case months::April:
                std::cout << "Апрель" << std::endl;
                break;
            case months::May:
                std::cout << "Май" << std::endl;
                break;
            case months::June:
                std::cout << "Июнь" << std::endl;
                break;
            case months::July:
                std::cout << "Июль" << std::endl;
                break;
            case months::August:
                std::cout << "Август" << std::endl;
                break;
            case months::September:
                std::cout << "Сентябрь" << std::endl;
                break;
            case months::October:
                std::cout << "Октябрь" << std::endl;
                break;
            case months::November:
                std::cout << "Ноябрь" << std::endl;
                break;
            case months::December:
                std::cout << "Декабрь" << std::endl;
                break;

            }
        }
            


    };
    return 0;
}
