#include <iostream>
using namespace std;
#define MAX 10

int stack[MAX]; // This is our stack
int top = -1;  // Initializing the stack pointer outside of the stack to state that the stack is empty

bool is_Empty(){
  if(top == -1){
    return 1;
  }
  else{
    return 0;
  }
}

bool is_Full(){
  if(top == MAX - 1){
    return 1;
  }
  else{
    return 0;
  }
}


void push(){
  int element;
  cout << "Enter the element you want to enter: ";
  cin >> element;

  if(is_Full()){
    cout << "Stack is full !! ";
  }

  else{
    top++;
    stack[top] = element;
  }

}

void pop(){
  if(is_Empty()){
    cout << "Stack is empty";
  }
  else{
    cout << stack[top] << endl;
    top--;
  }
}


void peek(){
  if(is_Empty()){
    cout << "The stack is empty";
  }
  cout << stack[top] << endl;
}

void display_stack(){
  for(int i = 0 ; i <= top ; i++){
    cout << stack[i] << endl;
  }
}

int main()
{
  char opt;
    do
    {
      int choice;
        cout << "Press 1 for push operation " << endl;
        cout << "Press 2 for pop operation " << endl;
        cout << "Press 3 for peek operation " << endl;
        cout << "Press 4 for display items in stack " << endl;

        cin >> choice;

        switch (choice) {
          case 1:
                push();
                break;

          case 2:
                pop();
                break;

          case 3:
                peek();
                break;

          case 4:
                display_stack();
                break;

          default:
                cout << "No command found\n";

        }

        cout << "Do you wish to continue: ";
        cin >> opt;

      }while(opt == 'y');

}
