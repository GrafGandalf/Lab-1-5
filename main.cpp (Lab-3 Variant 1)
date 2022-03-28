//
//  main.cpp
//  Lab_3
//
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, Arg; int Pro, Num, Men;
    Pro = 1; Num = 0; Men = -1;
    cout << "Введите N чисел последовательности." << endl;
    cin >> n;
    
    if (n>0)
    {
        for (int i=0; i<n; i++)
        {
            cin >> Arg;
            
            if ((Arg%10==2)||(Arg%10==4))
            {
                if (Men==-1)
                {
                    Men = Arg;
                    Num = i+1;
                }
                
                Pro = Pro * Arg;
                
                if (Men>Arg)
                {
                    Men = Arg;
                    Num = i+1;
                }
            }
        }
    }
    else
    {
        cout << "Неверное количество чисел в последовательности." << endl;
    }
    
    if (Pro==1) cout << "Не найдены нужные числа." << endl;
    else cout << "Произведение = " << Pro << ". Наименьшее равно = " << Men << ", с порядковым номером - " << Num << "." << endl;
    
    return 0;
}
