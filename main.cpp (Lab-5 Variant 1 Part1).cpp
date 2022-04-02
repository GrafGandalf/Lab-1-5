//
//  main.cpp
//  Lab_4
//
#include <iostream>
#include <locale>
#include <fstream>
#include <sstream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    
    char Mass[100]; int j=0;
    
    for (int i=0; i<100; i++)
    {
        Mass[i] = '\0';
    }
    
    ifstream file("D:\input.txt");
    
    while (!file.eof())
    {
        file >> Mass[j];
        j++;
    }
    
    
    for (int i=0; i<j; i++)
    {
        if (((int(Mass[i])>96)&&(int(Mass[i])<123)))
        {
            Mass[i]=int(Mass[i])-32;
        }
     
        
        
    }
    
    for (int i=0; i<j; i++)
    {
        cout << Mass[i];
    }
    
    file.close();
    
    
        
    return 0;
}
