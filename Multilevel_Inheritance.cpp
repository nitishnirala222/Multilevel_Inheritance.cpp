#include<iostream>
using namespace std;
class student
{
protected:
int roll;
public:
int setRoll(int );
int getRoll();
};
int student::setRoll(int x)
{
roll=x;
}
int student::getRoll()
{
cout<<"Roll No: "<<roll<<endl;
}
class Test:public student
{
protected:
float m,n;
public:
setMarks(float,float);
getMarks();
};
int Test::setMarks(float x,float y)
{
m=x;
n=y;
}
int Test::getMarks()
{
cout<<"Marks in sub1: "<<m<<endl;
cout<<"Marks in sub2: "<<n<<endl;
}
class Result:public Test
{
float total;
public:
int display();
};
int Result::display()
{
total=m+n;
getRoll();
getMarks();
cout<<"Total : "<<total<<endl;
}
int main()
{
Result r1;
r1.setRoll(101);
r1.setMarks(86.44,89.55);
r1.display();
}
