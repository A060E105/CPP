#include <iostream>
using namespace std;

int main()
{
  const int NUMBER_OF_ELEMENTS = 5;
  double numbers[NUMBER_OF_ELEMENTS];
  double sum = 0;

  for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
  {
    cout << "�п�J��" << i << "�Ӽ�: ";
    cin >> numbers[i];
    sum += numbers[i];
  }

  double average = sum / NUMBER_OF_ELEMENTS;

  int count = 0; 
  for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    if (numbers[i] > average)
      count++;

  cout << "����: " << average << endl;
  cout << "�W�L������ " << count << "�Ӽ�" << endl;

  return 0;
}