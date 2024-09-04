#include <iostream>
using namespace std;

int main(){
  cout<<"CALCULATOR"<< endl;

  int num1;
  cout<<"enter your first number"<< endl;
  cin>> num1;

  int num2;
  cout<<"enter your second number "<< endl;
  cin>>num2;

  char op;
  cout<<"enter your operator"<< endl;
  cin>> op;

   switch(op){
    case '+': 
      cout<< num1 + num2 << endl;
      break;
    case '-':
      cout<< num1 - num2 << endl;
      break;

    case '*':
      cout<< num1 * num2 << endl;
      break;

    case '/':
      cout<< num1 / num2 << endl;
      break;
    default:
      cout<<"Invalid operator";
      break;
  }
  return 0;
}
