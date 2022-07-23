// cohen nichols
// final project

// for this project i will be comparing dynamic memory, parameter passing
// and recursion in c++ and python

// in C++ those topics would look like

//starting with recursion
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::nothrow;

// finonacci sequence recursive code
int fib(int x){
  if(x <= 2){
    return 1;
  }
  else return fib(x-1) + fib(x-2);
}

// pass by value function
void value(int a, int b){
   a += b;
   cout << "the sum of your numbers is : " << a << endl;
}

// pass by reference function
void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}


int main(){
  // demonstrating recurrsion
  cout << "showing recursion" << endl;
  // code for fibbonacci
  // set the bound for the loop
  int num = 0;
  // set start of fib to 0
  int start = 0;
  // get num from user
  cout << "enter a number to see the value of the fibonacci sequence until then: ";
  cin >> num;
  for(int i = 0; i < num; ++i){
    cout << fib(start) << endl;
    ++start;
  } // end of recurrsion


  cout << "\n";
  cout << "showing call by value & refernce" << endl;
  // demonstarting of parameter passing
  // using call by reference and call by value
  cout << "call by value" << endl;
  int first, second = 0;
  cout << "enter a number: ";
  cin >> first;
  cout << "enter a second number: ";
  cin >> second;

  value(first,second);


  cout << "\n";
  cout << "showing call by refernce" << endl;
  cout << "enter a number to swap: ";
  int num1, num2 = 0;
  cin >> num1;
  cout << "enter a second number to swap: ";
  cin >> num2;

  cout << "before swap first num is " << num1 << " and second num is " << num2 << endl;
  swap(&num1,&num2);
  cout << "after swap first num is " << num1 << " and second num is " << num2 << endl;
  // end of parameter passing



  // demonstrating dynamic memory
  cout << "\n";
  cout << "showing dynamic memory" << endl;
  int size, b;
  int *c;
  cout << "how many numbers would you like to put in the array? : ";
  cin >> size;

  c = new(nothrow) int[size];
  for(b = 0; b < size; ++b){
    cout << "enter a number: ";
    cin >> c[b];
  }
  for(b = 0; b < size; ++b){
    cout << c[b] << " ";
  }
  cout << "\n";
  delete[] c;
  return 0;

  // end of dynamic memory



} // end of main
