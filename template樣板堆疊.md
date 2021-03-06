#### Stack.h
```CPP
#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:                 //公開成員::可被存取
  Stack();              //建構子函式
  bool empty() const;   //檢查是否為空的函式
  T peek() const;       //取出最上層的元素的函式
  void push(T value);   //把資料丟入陣列的函式
  T pop();              //把資料取出的函式
  int getSize() const;  //取得陣列大小的函式

private:                //私有成員::不可被存取，只能透過函式存取
  T elements[100];
  int size;
};

template<typename T>
Stack<T>::Stack()             //建構子函式的實作
{
  size = 0;             //初始值設定
}

template<typename T>
bool Stack<T>::empty() const      //檢查是否為空的函式實作
{
  return (size == 0);       //判斷 size == 0 ? 回傳true : 回傳 false
}

template<typename T>
T Stack<T>::peek() const        //取出最上層的元素的函式實作
{
  return elements[size - 1];    //將size減一，並回傳最上層的元素
}

template<typename T>
void Stack<T>::push(T value)    //把資料丟入陣列的函式實作
{
  elements[size++] = value;     //將value放入陣列中，並把size加一
}

template<typename T>
T Stack<T>::pop()               //把資料取出的函式
{
  return elements[--size];      //先將size減一，再回傳取出的值
}

template<typename T>
int Stack<T>::getSize() const    //取得陣列大小的函式實作
{
  return size;              //回傳大小
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

![](/PIC/堆疊實作結果.PNG)
