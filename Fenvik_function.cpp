/*Значенням функції Фенвіка для числа N називається максимальна степінь двійки, на яку націло
ділиться число N. За заданим числом N визначіть для нього значення функції Фенвіка.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fenvik(int N)
{
    int res;
    res=~(N-1) & N;
    return res;
}

int main()
{
    int N;
    cin >> N;
    
    cout << fenvik(N);
    return 0;
}