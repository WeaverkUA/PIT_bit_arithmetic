/*Алгоритм отримання додаткового коду такий:
• двійковий еквівалент числа перетворюється на обернений
код шляхом інвертування усіх його розрядів;
• до оберненого коду додається одиниця*/

/*
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

long long bit_representetion(int N, bool neg)
{
    int cnt=0;
    long long res=0;
    if (neg)
    {
       N=~N;
       N=N+1; 
    }

    while (N!=0)
    {
        res = res + (N & 1)*pow(10, cnt);
        cnt++;
        N = N >> 1;
    }
    return res;
}



int main()
{
    int N, charge;
    bool neg=false;
    cin >> N >> charge;
    if (N<0) neg=true;
    N=abs(N);
    for(int i=0; i<charge-cnt_all(N); i++) cout << '0';
    cout << bit_representetion(N, neg) << '\n';
    //cout << cnt_all(N) << '\n';
    
    return 0;
}*/

/*Алгоритм отримання додаткового коду такий:
• двійковий еквівалент числа перетворюється на обернений
код шляхом інвертування усіх його розрядів;
• до оберненого коду додається одиниця*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_binary(int N, int p) {
    if (N < 0) 
    {
        N = (1 << p) + N; // Додатковий код для від'ємного числа
    }
    
    //////bitset<32> b(N); // Представляємо число в двійковій системі
    //////string bin_str = b.to_string();
    
    // Виводимо лише останні p бітів
    cout << bin_str.substr(32 - p) << '\n';
}

int main() {
    int N, p;
    cin >> N >> p;
    print_binary(N, p);
    
    return 0;
}
