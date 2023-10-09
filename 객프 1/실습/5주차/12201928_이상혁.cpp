
#include<iostream>
using namespace std;

int square(int n) {
   return (n * n);

}


int get_max(int x, int y) {
   if (x > y) return x;
   else return y;

}

int absolute(int x) {
   if (x > 0)return x;
   else return -x;
}


void draw_rect(int side) {
   int x, y;
   for (y = 0; y < side; y++) {
      for (x = 0; x < side; x++)
         cout << "*";
      cout << endl;
   }
}
int get_integer() {
   int n;
   cout << "integer value ; ";
   cin >> n;
   return n;
}

int power(int x, int y) {
   long result = 1;
   for (int i = 0; i < y; i++)
      result *= x;
   return result;
}

int factorial(int n) {
   long result = 1;
   for (int i = 1; 1 < n; i++)
      result *= i;
   return result;
}

void main() {
   
   int x;
   cout << "input number :";
   cin >> x;
   draw_rect(x);
   cout << "Result: " << x << endl;

   int x = 5, z;
   z = square(x);
   cout << "square value = " << z << endl;

   int x = 1000, z;
   z = square(x);
   cout << "square value = " << z << endl;

   int y = 3, h = 6, z;
   z = get_max(y, h);
   cout << "get_max value = " << z << endl;

   int x = -3;
   int y = 3;
   int result1;
   int result2;
   result1 = absolute(x);
   result1 = absolute(y);
   cout << "result1 value = " << result1 << endl;
   cout << "result2 value = " << result2 << endl;

   int a = 3; int b = 5;
   int k;
   k = power(a, b);
   cout << "power_value = " << k << endl;

   int n = 10;
   int k;
   k = factorial(n);
   cout << "factorial value = " << k << endl;

   int x = 10;
   int result;
   result = draw_rect(x);


}
