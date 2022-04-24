#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "SB_Functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    cout << "\n";
    bool winner=false;

    // открытие файлов с полями
    FILE* field_of_player, *field_of_computer;             
    field_of_player = fopen("field_human.txt", "a");
    field_of_computer = fopen("field_comp.txt", "a");

    // собственно игра
    while (!winner) {
        cout << "Чей сейчас ход (1 - человек, 0 - компьютер): "; // заглушка, потом ход будет чередоваться
        bool player;
        cin >> player;
        
        // печать игрового поля
        if (player) {
            cout << "Ваш ход на моём поле: введите координаты (букву и цифру): " << "\n\n";
            load_ships(field_of_player);
                }
        else
        {
            cout << "Мой ход на вашем поле: стреляю в ячейку... " << "\n";
            load_ships(field_of_computer);

        }
        
        cout << "Игра окончена? (1 - да, 0 - нет): ";
        cin >> winner;                  //заглушка, потом будет проверка на конец игры и на выход по желанию игрока
    }

    //закрытие файлов
    fclose(field_of_player);
    fclose(field_of_computer);

}

    