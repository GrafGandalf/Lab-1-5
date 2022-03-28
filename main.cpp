//
//  main.cpp
//  Lab_2
//
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int A, B, C;
    
    cout << "Введите числа A, B, C"<<endl;
    cin >> A >> B >> C;
    
    if (A%B==0)
    {
        if (B>C) cout << A/B+C;
        if (B<C) cout << A/B-C;
        if (B==C) cout << (A+B)*C;
    }
    else cout << (A+B)*C;
    
    return 0;
}
