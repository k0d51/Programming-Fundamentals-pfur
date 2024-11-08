//lab3-2.cpp
#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;
    switch (i) {
        case 331:
            cout << "Воздух при температуре 0C";
            break;
        case 350:
            cout << "Воздух при температуре 30C";
            break;
        case 1450:
            cout << "Вода";
            break;
        case 3800:
            cout << "Медь";
            break;
        case 4800:
            cout << "Дерево";
            break;
        case 4900:
            cout << "Железо";
            break;
        case 5600:
            cout << "Сталь";
            break;
        case 11400:
            cout << "Сапфир";
            break;
        default:
            cout << "Неизвестно";
            break;
    }

    return 0;
