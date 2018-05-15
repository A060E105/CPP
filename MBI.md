# 物件導向實體範例

##### BMI.h
```CPP
#ifndef _BMI_H_
#define _BMI_H_
#define square(x) ((x/100)*(x/100))
#include <iostream>
using namespace std;

class BMI
{
public:
	BMI(const string newName,int newAge,double newWeight,double newHeight);
	BMI(const string newName,double newWeight,double newHeight);
	string getName() const;
	int getAge() const;
	double getWeight() const;
	double getHeight() const;
	double getBMI() const;
	string getStatus() const;

private:
	string name;
	int age;
	double weight;
	double height;
		
};

#endif
```
---

##### BMI.cpp
```cpp
#include <iostream>
#include "BMI.h"
using namespace std;

BMI::BMI(string newName,int newAge,double newWeight,double newHeight)
{
	name=newName;
	age=newAge;
	weight=newWeight;
	height=newHeight;
}

BMI::BMI(string newName,double newWeight,double newHeight)
{
	name=newName;
	age=20;
	weight=newWeight;
	height=newHeight;
}

string BMI::getName() const
{
	return name;
}

int BMI::getAge() const
{
	return age;
}

double BMI::getWeight() const
{
	return weight;
}

double BMI::getHeight() const
{
	return height;
}

double BMI::getBMI() const
{
	double bmi = weight/square(height);
	return bmi;
}

string BMI::getStatus() const
{
	double bmi = getBMI();
	string str1;
	if(bmi>24){
		str1="過度肥胖";
	}else if(bmi>18.5 && bmi<=24){
		str1="正常範圍";
	}else{
		str1="過瘦";
	}

	return str1;
}

```
---

##### main.cpp
```cpp
#include <iostream>
#include "BMI.h"
using namespace std;

int main(void)
{
	BMI bmi1 = BMI("jin",56,176);

	cout << "名字是: " << bmi1.getName() << endl;
	cout << "年齡: " << bmi1.getAge() << endl;
	cout << "身高: " << bmi1.getHeight() << endl;
	cout << "體重: " << bmi1.getWeight() << endl;
	cout << "BMI為: " << bmi1.getBMI() << endl;
	cout << "體態為: " << bmi1.getStatus() << endl;

	system("pause");
	return 0;
}
```
