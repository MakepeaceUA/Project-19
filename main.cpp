#include <iostream>
#include <cmath>
using namespace std;



//Задание 1
//template <typename T> void Func(T list[], int S) 
//{
//  T sum = 0;
//  for (int i = 0; i <= S; i++) 
//    {
//     cout << list[i] << " ";
//     sum += list[i];
//    }
//   cout << "\n";
//   cout << sum / S;
//}

//int main()
//{
//  setlocale(0, "RUS");
//  const int size = 4;
	
//  int arr[] = {1,2,3,4,5};
  
//  Func(arr,size);
//}




// Задание 2
//template <typename T> void Func(T a,  T b) 
//{
//    if (a == 0) 
//    {
//        if (b == 0) 
//        {
//           cout << "Уравнение имеет бесконечное количество корней\n";
//        } 
//        else 
//        {
//           cout << "Уравнение не имеет корней\n";
//        }
//    }
//    else 
//    {
//        T x = -b / a;
//        cout << "Корень линейного уравнения: " << x;
//        cout << "\n";
//    }
//}

//template <typename T> void Func(T a,  T b , T c) 
//{
//    T Dis = b * b - 4 * a * c;
//    cout << "Дискриминант: " << Dis << "\n";

//    if (Dis > 0) 
//    {
//      T x1 = (-b + sqrt(Dis)) / (2 * a);
//      T x2 = (-b - sqrt(Dis)) / (2 * a);
      
//      cout << "x1 = " << x1 << "\nx2 = " << x2;
//      cout << "\n";
//    } 
//   else if (Dis == 0) 
//   {
//      T x = -b / (2 * a);
//      cout << "x = " << x;
//      cout << "\n";
//   } 
//   else 
//   {
//      cout << "Уравнение не имеет действительных корней\n";
//   }
//}

//int main() 
//{
//  setlocale(0, "RUS");
//  Func(4, 20, -56);      
//}