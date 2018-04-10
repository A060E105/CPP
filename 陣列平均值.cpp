#include <iostream>
using namespace std;

int main()
{
  const int NUMBER_OF_ELEMENTS = 5;
  double numbers[NUMBER_OF_ELEMENTS];
  double sum = 0;

  for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
  {
    cout << "請輸入第" << i << "個數: ";
    cin >> numbers[i];
    sum += numbers[i];
  }

  double average = sum / NUMBER_OF_ELEMENTS;

  int count = 0; 
  for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    if (numbers[i] > average)
      count++;

  cout << "平均: " << average << endl;
  cout << "超過平均有 " << count << "個數" << endl;

  return 0;
}