#include <iostream>
#include <cmath>// you need this for square root
using namespace std;

enum class operation {Addition,Subtraction,Division,Multiplication,SquareRoot};

struct Calculator {
  operation temp ;
  Calculator(operation Operation) { temp = Operation;}
  //this is the formula that is use to respond to the operation you choose after stating your operation. It will return how you would want to interact with the numbers
  float perform(float x , float y) {
    switch(temp) {
      case operation::Addition: {
      return x + y;
      }break;
      case operation::Subtraction: {
      return x - y;
      }break;
      case operation::Division: {
      return x/y;
      }break;
      case operation::Multiplication: {
      return x * y;
      }break;
      case operation::SquareRoot: {//it doesn't matter what y is. You can put whatever you desire. It will only focus on x
      return sqrt(x);
      }
      default: {
      cout<<" Invalid operation ";
      return 0;
      }
    }
  }
};
int main() {
  //this part of the code will ask the user for numbers and operators
  double p,q ;
  string Operation;
  cout<<"Enter First Number:  ";
  cin>>p;
  cout<<"Enter Second Number: ";
  cin>>q;
  cout<<"Type in one of the following operators: \nAddition,Subtraction,Division,Multiplication,SquareRoot \n";
  cout<<"Operation to be performed : ";
  cin>>Operation;
  
  operation temp{ };
  //here will register what you put for the operations that you asked for in words.
  if (Operation == "Addition") {
    temp = operation::Addition;
  }
  else if (Operation == "Subtraction") {
    temp = operation::Subtraction;
  }
  else if(Operation == "Division") {
    temp = operation::Division;
  }
  else if(Operation == "Multiplication") {
    temp = operation::Multiplication;
  }
  else if(Operation == "SquareRoot") {
    temp = operation::SquareRoot;
  }
  
  Calculator bc(temp);
  auto result= bc.perform(p,q);//this will register the result
  cout<< "The answer is : "<<result;//this prints the results
}
