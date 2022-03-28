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
    int Vyb;
    
    int Mes=-1;
    
    cout << "Выберите подзадачу из варианта. (1-2)" << endl;
    cin >> Vyb;
    
    if (Vyb==1)
    {
        cout << "Введите числа A, B, C"<<endl;
        cin >> A >> B >> C;
        
        if (A%B==0)
        {
            if (B>C) cout << A/B+C;
            if (B<C) cout << A/B-C;
            if (B==C) cout << (A+B)*C;
        }
        else cout << (A+B)*C;
    }
    
    if (Vyb==2)
    {
        if (Mes != 0)
        {
            cout << "Введите номер месяца. Для выхода из цикла введите 0."<<endl;
            cin >> Mes;
            if ((Mes!=0) && (Mes>0) && (Mes<13))
            {
                switch (Mes) {
                    case 1:
                        cout << "Январь" << endl;
                        break;
                    case 2:
                        cout << "Февраль" << endl;
                        break;
                    case 3:
                        cout << "Март" << endl;
                        break;
                    case 4:
                        cout << "Апрель" << endl;
                        break;
                    case 5:
                        cout << "Май" << endl;
                        break;
                    case 6:
                        cout << "Июнь" << endl;
                        break;
                    case 7:
                        cout << "Июль" << endl;
                        break;
                    case 8:
                        cout << "Август" << endl;
                        break;
                    case 9:
                        cout << "Сентябрь" << endl;
                        break;
                    case 10:
                        cout << "Октябрь" << endl;
                        break;
                    case 11:
                        cout << "Ноябрь" << endl;
                        break;
                    case 12:
                        cout << "Декабрь" << endl;
                        break;
                        
                    default:
                        break;
                }
            }
            else cout << "Не верный ввод."<<endl;
        }
    }
    
    return 0;
}
