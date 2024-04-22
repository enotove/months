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
        std::cout << "������� ����� ������: ";
        std::cin >> numberIn;
        if (numberIn == 0)
        {
            return 0;
        }
        else if ((numberIn > 12) || (numberIn < 0))
        {
            std::cout << "�������� �����" << std::endl;
        }
        else
        {
            month = static_cast<months>(numberIn);
            switch (month)
            {
            case months::January:
                std::cout << "������" << std::endl;
                break;
            case months::February:
                std::cout << "�������" << std::endl;
                break;
            case months::March:
                std::cout << "����" << std::endl;
                break;
            case months::April:
                std::cout << "������" << std::endl;
                break;
            case months::May:
                std::cout << "���" << std::endl;
                break;
            case months::June:
                std::cout << "����" << std::endl;
                break;
            case months::July:
                std::cout << "����" << std::endl;
                break;
            case months::August:
                std::cout << "������" << std::endl;
                break;
            case months::September:
                std::cout << "��������" << std::endl;
                break;
            case months::October:
                std::cout << "�������" << std::endl;
                break;
            case months::November:
                std::cout << "������" << std::endl;
                break;
            case months::December:
                std::cout << "�������" << std::endl;
                break;

            }
        }
            


    };
    return 0;
}
