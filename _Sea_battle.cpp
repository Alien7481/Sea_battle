#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    int size = 10; 

    for (int i = 0; i < size+2; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0)
                cout << "___";
            if (i == size +2)
                    cout << "---";
            if (i >0 || i< size + 2)
                cout << setw(3) << "|";
          
            
        }
        cout << "\n";
        

    }
        

        cout << "\n";
}

    