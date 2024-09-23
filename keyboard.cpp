/*Молода інноваційна фірма розробила нову клавіатуру з ергономічним дизайном. У принципі,
вона могла б бути сумісна з ОС Windows, оскільки у неї є клавіші Ctrl, Win, Alt, ScrLk, NumLock,
CapsLock, Left Shift, Right Shift та інші. Ось лише інформацію про те, натиснута ця клавіша чи ні,
клавіатура передає у вигляді одного цілого числа у десятковій системі числення. Напишіть
програму, яка за заданим номером клавіші визначає, чи натиснена вона, якщо натиснена
клавіша кодується одиничним значенням біта з відповідним номером у двійковому поданні
числа, біти нумеруються справа наліво, починаючи з нульового.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int Position, code;
    cin >> code >> Position;
    code = code >> Position;
    if ((code & 1)==1) cout << "YES";
    else cout << "NO";
    return 0;
}