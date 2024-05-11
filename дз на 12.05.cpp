// 1. Создайте массив из 10 целых чисел и найдите сумму всех элементов.

#include <iostream>
using namespace std; 

int main()
{   
    int numbers[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum {};
    for (int i {}; i < 10; sum += numbers[i++]);
    std::cout << "Sum: " << sum << std::endl;   
}
// ? 2. Создайте массив из 5 строк и выведите на экран самую длинную строку.

#include <iostream>
using namespace std; 

int main()
{   
    
    char numbers[5] {"11, 12, 13, 14" , " 1", " 3, 45,78", " 13, 14" , " 1, 2, 3, 4, 5," };
    for(int i=0; i < 5; i++)
    {
        int count = std::size(numbers)
        cout << "Length: " << count << endl;
    }
}

// 3. Создайте массив из 8 вещественных чисел и найдите их среднее арифметическое.
#include <iostream>
using namespace std;

int main(){
    int numbers[8] {1,2,3,4,5,6,7,8};
    int linght;
    int sum {};
    for (int i {}; i < 8; sum += numbers[i++]);
    linght = sizeof(numbers) / sizeof(numbers[0]) ; 
    
    cout << sum / linght<< endl;
}

// ? 4. Создайте массив из 12 целых чисел и найдите наименьшее значение в массиве.

#include <iostream>
using namespace std;

int main(){
    int numbers[12] {10,22,43,46,58,69,70,8,1123,34,56,122};
    for(int i=0; i < 12; i++)
    {
        cout << numbers[i] << endl;
        
    }
}

//? 5. Создайте массив из 6 целых чисел и найдите количество положительных элементов в массиве.

#include <iostream>
using namespace std;

int main(){
    int numbers[6] {-10,22,43,-46,58,69};
    int k;
    for(int i=0; i < 6; i++)
    {
        if (numbers[i] > 0){
            k++;
            
        }
    
     k=0;    
        
    }
    cout << k << endl;
}
// ? 6. Создайте массив из 7 целых чисел и найдите сумму всех элементов на четных позициях.
#include <iostream>
using namespace std;

int main(){
    int numbers[7] {1,2,3,4,5,6,7};
    int sum=0;
    for(int i=0; i < 7; i++)
    {
        if (numbers[i] % 2== 0){
            sum += numbers[i];
            
        }
       
    }
    cout << sum << endl;
}
// 7. Создайте массив из 9 целых чисел и найдите произведение всех нечетных элементов.

#include <iostream>
using namespace std;

int main(){
    int numbers[9] {1,2,3,4,5,6,7,8,9};
    int sum=1;
    for(int i=0; i < 9; i++)
    {
        if (numbers[i] % 2!= 0){
            sum *= numbers[i];
            
        }
       
    }
    cout << sum << endl;
}


// ? 8. Создайте два массива из 4 целых чисел каждый и найдите их скалярное произведение.

#include <iostream>
using namespace std;

int main(){
    int num1[4] {1,2,3,4};
    int num2[4] {5,6,7,8};
    int s=0;
    for(int i=0; i < 9; i++)
    {
        
            
        }
       
    }
    cout << << endl;
}

// ? 9. Создайте массив из 10 целых чисел и отсортируйте его в порядке убывания.

#include <iostream>
using namespace std;
#include <algorithm>// для сортировки

int main(){
    int numbers[10] {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i < 9; i++)
    {
        
            
        }
       
    }
    cout << << endl;
}

// 10. Создайте массив из 15 целых чисел и выведите на экран только те элементы, которые делятся на 3 без остатка.

#include <iostream>
using namespace std;

int main(){
    int numbers[15] {1,2,3,4,5,6,7,8,9,10,33,12,30,21,66};
    for(int i=0; i < 15; i++)
    {
        if (numbers[i] % 3 == 0){
            cout << numbers[i] << endl;
        }
        
    }
    
}
