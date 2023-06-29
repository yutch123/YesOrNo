// Программа YesOrNo

#include <iostream>
#include <string>
using namespace std;

char askYesNo1(); // объявляем первую функцию
char askYesNo2(string question); // объявляем 2 функцию (с вопросом)

int main()
{
    char answer1 = askYesNo1(); // переменная answer получает, то значение< которое введет пользователь в фунцкии askYesNo1
    cout << "Thank for answering: " << answer1 << "\n\n"; 
    char answer2 = askYesNo2("Do you wish to save your game?"); // фунцкия принимает значение в виде параметра
    cout << "Thanks for answering: " << answer2 << "\n";
    return 0;
}
char askYesNo1() // функция предлагает вести символ y/n пользователю
// если пользователь ничего не вводит, то фунцкия возвращает занчение и просит ввести символ заново
{
    char response1; 
    do
    {
        cout << "Please enter 'y' or 'n': ";
        cin >> response1;
    } while (response1 != 'y' && response1 != 'n');
    return response1; // возвращение типа
}
char askYesNo2(string question) // принимает в качетсве параметра объект string имя параметра question
{
    char response2;
    do 
    {
        cout << question << " (y/n): ";
        cin >> response2;
    } while (response2 != 'y' && response2 != 'n');
    return response2;
}