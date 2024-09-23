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

bool magic_num(int N, int in_row)
{
    int cnt=1, dig, prev_dig;
    prev_dig = N & 1;
    N = N >> 1;
    while (N!=0)
    {
        dig = N & 1;
        if (dig==prev_dig) cnt++;
        else cnt=1;
        if (cnt==in_row) return true;
        prev_dig=dig;
        N = N >> 1;
    }
    return cnt >= in_row;
}


int main()
{
    int N, num, in_row;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num >> in_row;
        if (magic_num(num, in_row)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
    }
    return 0;
}
