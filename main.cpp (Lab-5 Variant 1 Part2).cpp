//
//  main.cpp
//  Lab_5_2
//
#include <iostream>
#include <locale>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    
    string Naideno[100]; int j=0; int g=0;
    char Buffer = '\0'; char Slovo[2000];
    int Op=0; string s="", s1;
    long long N=-1, K=-1; int Op1=0;
    string zamena;
    
    for (int i=0; i<2000; i++)
    {
        if (i<100) Naideno[i] = "";
        Slovo[i] = '\0';
    }
    
    cout << "Введите букву: ";
    cin >> Buffer;
    
    ifstream file("/Users/graf/Desktop/Lab_5.2/Lab_5.2/input.txt");
    
    while (getline(file, s1)) s += s1;
    char *c = new char[s.length()];
            
    for (int i = 0; i <= s.length(); i++) c[i] = s[i];
    
    file.close();
    
    for (int i=0; i<s.length(); i++)
    {
        if (i==0) N=0; if (i==s.length()-1) K=s.length();
        else if (c[i-1]==' ') N=i;
        if ((c[i+1]==' ') && (i<s.length()-1)) K=i;
        
        if ((N!=-1)&&(K!=-1)) Op=1;
        
        if (Op==1)
        {
            if ((N==K)&&(Buffer==c[N]))
            {
                zamena=c[N];
                for (int t=0; t<g; t++)
                {
                    if (Naideno[t]==zamena) Op1=1;
                }
                if (Op1!=1)
                {
                    Naideno[g]=c[N];
                    g++;
                }
                Op1=0;
            }
            
            if (N!=K)
            {
                for (int i1=N; i1<K+1; i1++)
                    {
                        Slovo[j] = c[i1];
                        j++;
                    }
                for (int t=0; t<g; t++)
                {
                    if (Naideno[t]==Slovo) Op1=1;
                }
                
                if ((Buffer==Slovo[j-1])&&(Op1==0))
                {
                    Naideno[g]=Slovo;
                    g++;
                }
                Op1=0;
                for (int i2=0; i2<2000; i2++)
                {
                    Slovo[i2] = '\0';
                }
            }
            
            Op=0; N=-1; K=-1; j=0;
        }
    }
    
    ofstream F ("/Users/graf/Desktop/Lab_5.2/Lab_5.2/output.txt", ios::out);
    
    for (int i=0; i<g; i++)
    {
        F << Naideno[i];
        F << " ";
    }
    
    
    F.close();
    
    
        
    return 0;
}
