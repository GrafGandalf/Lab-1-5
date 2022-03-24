//
//  main.cpp
//  Lab_1
//

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int i;
    
    cout << "Выберите вариант (1-10). Для выхода введите 0." << endl;
    
    
    while (i!=0)
    {
        cin >> i;
    
        if (i==1)
        {
            int S; int p; int a, b, c;
            cin >> a >> b >> c;
            p = (a+b+c)/2;
            S = sqrt (p * (p-a) * (p-b) * (p-c));
            cout << "S = " << S << endl << endl;
        }
    
        if (i==2)
        {
            int h = 0;
            int a = 0;
            cin >> h >> a;
            if ((a < pow(10,8)) && (a > 0)&&(h < pow(10,8)) && (h > 0)) cout << a * h / 2 << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==3)
        {
            unsigned short a, b;
            cin >> a >> b;
            if ((0<a)&&(a<20)&&(0<b)&&(b<20)) cout << a+a+b+b << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==4)
        {
            float R; const double PI = 3.141592653589793;
            cin >> R;
            cout.precision(8);
            cout << fixed;
            if ((0<R)&&(R<100)) cout << (R*R * PI) << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==5)
        {
            unsigned short a, b, c;
            cin >> a >> b >> c;
            if ((0<a)&&(a<10000)&&(0<b)&&(b<10000)&&(0<c)&&(c<10000)) cout << a*b*c << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==6)
        {
            float S, h;
            cin >> S >> h;
            if ((0<S)&&(S<100)&&(0<h)&&(h<100)) cout << S*h/3 << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==7)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if ((0<a)&&(a<30000)&&(0<b)&&(b<30000)&&(0<c)&&(c<30000)) cout << sqrt (a*a+b*b+c*c) << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==8)
        {
            unsigned short a;
            cin >> a;
            if ((0<a)&&(a<40)) cout << a*a*a << endl;
            else cout << "Ошибка" << endl;
        }
        
        if (i==9)
        {
            int a, A, B;
            cin >> a >> A >> B;
            cout << A*B*sin(a);
        }
        
        if (i==10)
        {
            float N, X;
            cin >> N >> X;
            cout << pow(X, 1/N);
        }
    }
    
    return 0;
}
