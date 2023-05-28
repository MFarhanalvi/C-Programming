#include<iostream>
#include<string.h>
#include<conio.h>
#include<windows.h>
using namespace std;
class student{
    private:
    int rollno;
    int marks;
    char name[30];
    public:
        student(){
        rollno=0;
        marks=0;
        name[30]='\0';
        }
    void getinput(){

            cout<<"Enter Roll No:";
            fflush(stdin);
            cin>>rollno;
            cout<<"Enter name:";
           //flush(stdin);
            //gets(name);
            cin>>name;
            int f=0;
            for(int i=0;name[i]!='\0';i++){
                if((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z') ){
                    cout<<name[i];
                    f++;
            }
            else{
                f==0;
            }
            }
            if(f==0){

                   cout<<"Please Input valid name:"<<endl;
            }

            cout<<"Enter marks:";
            fflush(stdin);
            cin>>marks;
    }
        void output()
        {


                cout<<"Roll No:"<<rollno<<endl;
                fflush(stdin);
                cout<<"Name:"<<name<<endl;
                fflush(stdin);
                cout<<"Marks:"<<marks<<endl;
        }
        void startname(){
        if(name[0]=='s' || name[0]=='S')
            output();
        }
        void endname(){
        if(name[strlen(name)-1]=='a'|| name[strlen(name)-1]=='A')
        {
            output();
        }
        }
        void checkmarks(){
        if(marks>700 && marks<1000){
            output();
        }
        }
    };
    int main(){
        student obj1[11];
        while(1){
        system("cls");
        int choice;
        cout<<"1:Enter data of Ten students"<<endl;
        cout<<"2:Display data of Ten students"<<endl;
        cout<<"3:Student name starts with S:"<<endl;
        cout<<"4:Student name end with A:"<<endl;
        cout<<"5:Show student having marks greater than 700 and less than 1000:"<<endl;
        cout<<"6:Exit Programee:"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
     case 1:
         system("cls");
         cout<<"Enter data of Ten students:"<<endl;
          for(int i=1;i<=10;i++){
          obj1[i].getinput();
        }
        break;
     case 2:
         system("cls");
        cout<<"Display data of Ten students:"<<endl;
          for(int i=1;i<=10;i++){
        obj1[i].output();
        }
        break;
     case 3:
         system("cls");
        cout<<"Student having name starts with S:"<<endl;
        for(int i=0;i<=10;i++){
        obj1[i].startname();
        }
        break;
     case 4:
         system("cls");
        cout<<"Student having name end with A:"<<endl;
        for(int i=0;i<=10;i++){
        obj1[i].endname();
        }
        break;
     case 5:
         system("cls");
        cout<<"Show student having marks greater than 700 and less than 1000:"<<endl;
        for(int i=0;i<=10;i++){
        obj1[i].checkmarks();
        }
        break;
     case 6:
        exit(0);
     default:
        cout<<"Invalid choice!";
        }
        getch();
    }
        getch();
        return 0;
    }
