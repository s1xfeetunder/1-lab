#include <Windows.h>
#include <iostream>

using namespace std;

int main()

{
    
    cout << "HELLO!!!\n";
    char ch1 = 196;
    char ch2 = 218;
    char ch3 = 191;
    char ch4 = 179;
    char ch5 = 192;
    char ch6 = 217;



    cout << ch2 << ch1 << ch1 << ch1 << ch1 << ch3 << '\n' << ch4 << '\t\t' << ch4 << '\n' << ch5 << ch1 << ch1 << ch1 << ch1 << ch6 << endl;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Прiзвище: Чумак" << '\n' <<
        "Iм'я: Богдан" << '\n' <<
        "По батьковi: Олегович" << '\n' <<
        "Стать : чоловіча" << '\n' <<
        "Дата народження : 2004-03-03" << '\n' <<
        "Адреса : One Microsoft Way, 77, NY, USA" << '\n' <<
        "Номер телефону : +380 93 0735806" << '\n' <<
        "Місце навчання : ММФ, ДНУ ім. Олеся Гончара " << '\n' <<
        "Група : МС-21-1 " << '\n' <<
        "Хоббі : програмування" << '\n' << endl;

}
