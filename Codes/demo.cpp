#include<iostream>
using namespace std;

int main ()
{
   int a;
   cout<<"size of int"<<sizeof(a)<<endl;

   float b;
   cout<<"size of float "<<sizeof(b)<<endl;

   char c;
   cout<<"size of char "<<sizeof(c)<<endl;

   bool d;
   cout<<"size of bool "<<sizeof(d)<<endl;

   short int e;
   long int f;
   cout<<"size of shortint "<<sizeof(e)<<endl;
   cout<<"size of longint "<<sizeof(f)<<endl;

   int amount1;
   int amount2;
   cin>> amount1;
   cin>> amount2;

   int sum = amount1 + amount2;
   cout<< "Total amount is "<< sum<<endl;
   return 0;
   
}