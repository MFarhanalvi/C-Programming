#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class student{
    private:
    int rollno;
    char name[20];
    int marks;
    public:
    void getinput(){
        for (int i = 0; i < 9; i++)
        {
            cout<<"Enter roll no:"<<endl;
            cin>>rollno;
            cout<<"Enter name:"<<endl;
            cin>>name[i];
            cout<<"Enter Marks:"<<endl;
            cin>>marks;
        }
    }
        void output()
        {
            for (int i = 0; i < 9; i++)
            {
                cout<<"Roll No:"<<rollno<<endl;
                cout<<"Name:"<<name[i]<<endl;
                cout<<"Marks:"<<marks;
            }
            
        }
    };
    int main(){
        student obj1;
        obj1.getinput();
        obj1.output();
        getch();
        return 0;
    }