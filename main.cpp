#include <iostream>
#include <iomanip>
using namespace std;
class complex
{
    int real,img;
public:
    void read_data();
    void Add(complex s1,complex s2);
    void Add(int realnum,complex s2);
    void show();
};
void complex::read_data()
{
    cout<<"Enter the real part and imaginary part:";
    cin>>real>>img;
}
void complex::Add(complex s1,complex s2)
{
    real=s1.real+s2.real;
    img=s1.img+s2.img;
}
void complex::Add(int realnum,complex s2)
{
    real=realnum+s2.real;
    img=s2.img;
}
void complex::show()
{
    cout<<real<<"+i"<<img<<endl;
}
int main()
{
    complex s1,s2,s3,s4;
    cout<<"Addition of the complex numbers "<<endl<<endl;
    s1.read_data();
    s2.read_data();
    s3.Add(s1,s2);
    cout << "The resultant complex number: ";
     s3.show();
     cout<<endl;
    cout<<"Addition of real number "<<endl;
    cout<<"Enter the real part:";
    int realnum;
    cin>>realnum;
    s4.Add(realnum,s3);
    cout<<"THe resultant complex number : ";
    s4.show();
    return 0;
}
