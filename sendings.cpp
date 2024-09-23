/*Ось і настав останній день Літньої школи програмування та
інформаційних технологій. Усім стало дуже сумно і на згадку Ірина
Вільївна запропонувала всім подарувати один одному число. Але
дарувати можна тільки «магічні» числа. Магічним називається число, в
якого у бінарному записі (записі двійковою системою числення) є не
менше ніж К однакових цифр підряд. Вам треба визначити, чи годиться
дарувати таке число другові.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bit_mas(long long bits[], long long num)
{
    for (int i=0; i<64; ++i)
    {
        bits[i]+=num & 1;
        num = num >> 1;
    }
    
}

long long bits[64] = {0};
int main() 
{
    long long num, res=0;
    int N, number_of_tasks;

    cin >> N >> number_of_tasks;
    for (int i = 0; i < N; i++) 
    {
        cin >> num;
        bit_mas(bits, num);
    }

    for (int i = 0; i < 64; i++) 
    {
        bits[i] %= number_of_tasks;
        res += bits[i] << i;
    }
    cout << "superproger_" << res << "\n";
    return 0;
}
