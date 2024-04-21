//3. Напишите программу, которая определяет, является ли заданное число простым.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Введите число: ";
    cin >> n;
    if (n>1){
        for (int i=2; i<n; i++ ){
            cout << " Непростое число" ;           
        }
    }
    else{
        cout << " Простое число" ;
    } 
           
    
}

//4. Напишите программу, которая находит наименьший общий делитель двух чисел, введенных пользователем.

#include <iostream>
using namespace std;

int main()
{
    int a1;
    cin >> a1;
    int a2;
    cin>> a2;
    for (int i=2; 10000;i++){
        if (a1%i==0 && a2 % i ==0){
            cout<< i;
        break;
        }
        else{
            cout << 0;
        }
    }
}

//5. Напишите программу, которая выводит таблицу умножения на заданное пользователем число.

#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int b;
    cout << " Введите число:";
    cin >> b;
    while (a<=10){
        cout << a*b<< " ";
        a++;
    }
}

//1. Напишите программу, которая считает сумму чисел от 1 до 1000, которые делятся на 3 или 5 без остатка.

#include <iostream>
using namespace std;

int main(){
 int b;
 for (int a=1; a<=100; a++){
     if (a%3==0 || a%5==0){
     b=b+a;
         
     }
}
cout << b;
}

//2.( плохой вывод) Напишите программу, которая находит все простые числа от 1 до 100 и выводит их на экран.

#include <iostream>
using namespace std;

int main()
{
    int n;
    for (int n=1; n<=100;n++){
        if (n>1){
        for (int i=2; i<n; i++ ){
            cout << n << " Непростое число" ;           
        }
    }
    else{
        cout << " Простое число" ;
    }  
    }
   
           
    
}

//3. Напишите программу, которая вычисляет факториал числа, введенного пользователем с клавиатуры.

#include <iostream>
using namespace std;
int main(){
    
 int a;
 cin >> a;
 int b=1;
 while (a > 1){
     b=b*a;
     a=a-1;
 }
 cout << b;
}
