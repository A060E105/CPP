```CPP
#ifndef _BMI_H_
#define _BMI_H_

class BMI
{
  public:
    BMI(const string newName,int newAge,double newWeight,double newHeight);
    BMI(const string newName,double newWeight,double newHeight);
    string getName();
    int getAge();
    double getWeight();
    double getHeight();
    double getBMi();
    double getStutas();
    
	private:
		string name;
		int age;
		double weight;
		double height;
};

#endif
```
