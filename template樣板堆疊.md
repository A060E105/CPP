#### Stack.h
```CPP
#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:           //公開成員
  Stack();        //建構子
  bool empty() const;
  T peek() const;
  void push(T value);
  T pop();
  int getSize() const;

private:        私有成員
  T elements[100];
  int size;
};

template<typename T>
Stack<T>::Stack()
{
  size = 0;
}

template<typename T>
bool Stack<T>::empty() const
{
  return (size == 0);
}

template<typename T>
T Stack<T>::peek() const
{
  return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
  elements[size++] = value;
}

template<typename T>
T Stack<T>::pop()
{
  return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
  return size;
}

#endif
```

#### main.cpp
```cpp
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
  Stack<int> intStack;
  for (int i = 0; i < 10; i++)
    intStack.push(i);

  while (!intStack.empty())
    cout << intStack.pop() << " ";
  cout << endl;

  Stack<string> stringStack;
  stringStack.push("CPP!");
  stringStack.push("to");
  stringStack.push("Welcome");

  while (!stringStack.empty())
    cout << stringStack.pop() << " ";
  cout << endl;

  return 0;
}

```
