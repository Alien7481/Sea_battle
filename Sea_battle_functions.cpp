#include <stdio.h>
#include <iostream>
using namespace std;

// загрузка игрового поля из файла
void load_ships(FILE *field) {

	int c;
	while (!feof(field)) {
		
		c = fgetc(field);
		system("pause");
		if (((char)c) == (char)("\n"))
			cout << "\n";
		else
			cout <<(char)c;
	}
}