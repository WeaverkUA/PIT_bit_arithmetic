/*Запишемо ціле десяткове число N у двійковій системі і утворимо всі ліві циклічні зсуви цього
числа, при яких перша цифра числа переноситься в кінець числа. Наприклад, якщо N = 11, в
двійковій системі буде 1011, його циклічні зсуви: 0111, 1110, 1101, 1011. Максимальне значення
Max з усіх отриманих у такий спосіб чисел буде мати число 1110 = 14. Напишіть програму,
яка для заданого числа N визначить максимальне значення Max.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cnt_all(long long N)
{
    int cnt=0;
    while (N!=0)
    {
        ++cnt;
        N = N >> 1;
    }
    return cnt;
}

int main()
{
    long long N, etalon;
    int cnt, bit;
    cin >> N;
    etalon=N;
    cnt=cnt_all(N);
    for (int i = 0; i < cnt; i++)
    {
        bit = N & 1;  
        N >>= 1;  
        N |= bit << (cnt - 1); 

        if (N > etalon) etalon = N;
    }
    cout << etalon << '\n';
    return 0;
}
