// Задача №346. Подсчет чисел
// Ввод и вывод данных производятся через стандартные потоки ввода-вывода. Для хранения целых чисел необходимо использовать 4-байтовые переменные
//(например, тип longint в Free Pascal).
// Подсчитайте, сколько среди данных N чисел нулей, положительных чисел, отрицательных чисел.

// Входные данные
// Вводится число N, а затем N целых чисел.

// Выходные данные
// Необходимо вывести сначала число нулей, затем число положительных и отрицательных чисел.

// Примеры
// входные данные
// 5
// 28
// 0
// 0
// 0
// 0
// выходные данные
// 4 1 0

#include <iostream>
using namespace std;

int main(){
    int a;
    int p;
    int d;
    int N;
    cout << " Введите число";
    cin >> N;
    int n;
    cout << " Введите числa";
    cin >> n;
    if (n==0){
        a++;
        cout << a;
    }
    a=0;
    
    if (n>0){
        p++;
        cout << p;
    }
    p=0;
   
    if (n <0){
        d++;
        cout << d;
    }
    d=0;
    
}

// Исполнитель “Раздвоитель” преобразует натуральные числа. У него есть две команды: “Вычесть 1” и “Разделить на 2”, 
//первая команда уменьшает число на 1, вторая команда уменьшает число в два раза, если оно чётное, иначе происходит ошибка.

// Входные данные
// Дано два натуральных числа A и B (A>B).

// Выходные данные
// Напишите алгоритм для Развоителя, который преобразует число A в число B и при этом содержит минимальное число команд. 
//Команды алгоритма нужно выводить по одной в строке, первая команда обозначается, как -1, вторая команда как :2.

// Примеры
// входные данные
// 179
// 20
// выходные данные
// -1
// :2
// -1
// :2
// :2
// -1
// -1

#include <iostream>
using namespace std;

int main(){
    int A;
    cout << " Введите число A";
    cin >> A;
    int B;
    cout << " Введите число B";
    cin >> B;
    
    if (A>B){
        while (A!=B){
            stro=[];
            if A%2==0 and A/2>=0{
                stro.append(":2");
                a/=2;
            else{
                stro.append("-1");
                a-=1
            }
                
            }
            
        }
        stro.reverse();
        cout << thread.join(stro);
    }
}