#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<windows.h>
#define bkspace 8
using namespace std;
class Student{
  private:
    char name[30];
    char rollno[20];
    char Class[30];
  public:
      Student(){
      name[0]='\0';
      rollno[0]='\0';
      Class[0]='\0';
      }
      void getStudentdata()
	{
		cout<<"Please Enter the following information:";
		cout << "\n\nENTER Student Roll No:";
		fflush(stdin);
		gets(rollno);
		cout << "\nENTER Student NAME:";
		fflush(stdin);
		gets(name);
		cout << "\nENTER Student Calss:";
		fflush(stdin);
		gets(Class);
	}
	void showStudentdata()
	{
		fflush(stdin);
		cout << "\n\nRoll No:" << rollno << endl;
		fflush(stdin);
		cout << "NAME:" << name << endl;
		fflush(stdin);
		cout << "Class:" << Class << endl;
	}
    void storeStudent();
	void viewAllStudent();
	void searchStudent();
	void deleteStudent();
	void updateStudent();
	void studmenu();

};
void Student::storeStudent()
{
	if (rollno == 0)
	{
		cout << "\nStudent DATA NOT INITILAZED!!!";
	}
	else
	{
		ofstream fout;
		fout.open("data.txt", ios::app | ios::binary);
		fout.write((char *)this, sizeof(*this));
		fout.close();
	}
}
void Student::viewAllStudent()
{
    int f=0;
	ifstream fin;
	fin.open("data.txt", ios::in | ios::binary);
	if (!fin)
		cout << "\nFILE NOT FOUND!!!";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
		    f++;
			showStudentdata(); //showStudentdata is member function:
			fin.read((char *)this, sizeof(*this));
		}
		if(f==0)
        {cout<<"File is Empty!";}
		fin.close();
	}
}
void Student::searchStudent()
{
	char roll[15];
	cout << "ENTER Student Roll No FOR SEARCHING:";
	cin.ignore();
	cin.getline(roll, 15);
	int f = 0;
	ifstream fin;
	fin.open("data.txt", ios::in | ios::binary);
	if (!fin)
		cout << "\nFILE NOT FOUND!!!";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			if (!strcmp(roll,rollno))
			{ //also write as this->title:
				f++;
				showStudentdata();
			}
			fin.read((char *)this, sizeof(*this));
		}
		if (f == 0)
			cout << "\nRECORD NOT FOUND!!!";
		fin.close();
	}
}
void Student::deleteStudent()
{
	int f = 0;
	char roll[15];
	cout << "ENTER Student Roll YOU WANT TO DELETE:";
	cin.ignore();
	cin.getline(roll, 15);
	ifstream fin;
	ofstream fout;
	fin.open("data.txt", ios::in | ios::binary);

	if (!fin)
		cout << "\n FILE NOT FOUND!!!";
	else
	{
		fout.open("temp.txt", ios::out | ios::binary);
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			if (strcmp(roll,rollno)) //if don't compare than write in temp:
            fout.write((char *)this, sizeof(*this));
            else{
                cout<<"\nDeleted:";
            }
			fin.read((char *)this, sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("data.txt");
		rename("temp.txt", "data.txt");
	}
}
void Student::updateStudent()
{
	int f = 0;
	char roll[15];
	cout << "ENTE Student Roll No YOU WNAT TO UPDATE:";
	cin.ignore();
	cin.getline(roll, 15);
	fstream file;
	file.open("data.txt", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char *)this, sizeof(*this));
	while (!file.eof())
	{
		if (!strcmp(roll, rollno))
		{
			f = 1;
			cout << "\nENTER NEW DATA FOR Student:\n";
			getStudentdata();
			file.seekp(sizeof(*this) - file.tellp());
			file.write((char *)this, sizeof(*this));
		}
		file.read((char *)this, sizeof(*this));
	}
	if (f == 0)
		cout << "RECORD NOT FOUND!!!";
	file.close();
}
class Book{
  private:
    char id[30];
    char title[30];
    SYSTEMTIME time;
  public:
      Book(){
      id[0]='\0';
      title[0]='\0';
      }
      void getBookdata()
      	{
		cout<<"Please Enter the following information:";
		cout << "\n\nENTER Book ID:";
		fflush(stdin);
		gets(id);
		cout << "\nENTER Book Title:";
		fflush(stdin);
		gets(title);
		fflush(stdin);
        GetSystemTime(&time);
	    cout<<"\nPurchase Date:"<<time.wDay<<"/"<<time.wMonth<<"/"<<time.wYear<<endl;
	    fflush(stdin);
	    cout<<"Current Time:"<<time.wHour<<":"<<time.wMinute<<":"<<time.wSecond<<endl;


	}
	void showBookdata()
	{
		fflush(stdin);
		cout << "\n\nBook ID:" << id << endl;
		fflush(stdin);
		cout << "Book Title:" << title << endl;
		fflush(stdin);
		cout<<"Purchase Date:"<<time.wDay<<"/"<<time.wMonth<<"/"<<time.wYear;
		fflush(stdin);
		cout<<"\nCurrent Time:"<<time.wHour<<":"<<time.wMinute<<":"<<time.wSecond;
	}
    void storeBook();
	void viewAllBook();
	void searchBook();
	void deleteBook();
	void updateBook();

};
void Book::storeBook()
{
	if (id==0)
	{
		cout << "\nBook DATA NOT INITILAZED!!!";
	}
	else
	{
		ofstream fout;
		fout.open("data2.txt", ios::app | ios::binary);
		fout.write((char *)this, sizeof(*this));
		fout.close();
	}
}
void Book::viewAllBook()
{
    int f=0;
	ifstream fin;
	fin.open("data2.txt", ios::in | ios::binary);
	if (!fin)
		cout << "\nFILE NOT FOUND!!!";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
		    f++;
			showBookdata(); //showBookdata is member function:
			fin.read((char *)this, sizeof(*this));
		}
		if(f==0){cout<<"File is Empty!";}
		fin.close();
	}
}
void Book::searchBook()
{
	char d[15];
	cout << "ENTER Book ID FOR SEARCHING:";
	cin.ignore();
	cin.getline(d, 15);
	int f = 0;
	ifstream fin;
	fin.open("data2.txt", ios::in | ios::binary);
	if (!fin)
		cout << "\nFILE NOT FOUND!!!";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			if (!strcmp(d,id))
			{ //also write as this->title:
				f++;
				showBookdata();
			}
			fin.read((char *)this, sizeof(*this));
		}
		if (f == 0)
			cout << "\nRECORD NOT FOUND!!!";
		fin.close();
	}
}
void Book::deleteBook()
{
	int f = 0;
	char d[15];
	cout << "ENTER Book ID YOU WANT TO DELETE:";
	cin.ignore();
	cin.getline(d, 15);
	ifstream fin;
	ofstream fout;
	fin.open("data2.txt", ios::in | ios::binary);

	if (!fin)
		cout << "\n FILE NOT FOUND!!!";

	else
	{
		fout.open("temp2.txt", ios::out | ios::binary);
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			if (strcmp(d,id)) //if don't compare than write in temp:
				fout.write((char *)this, sizeof(*this));
				else
                {
                    cout<<"\nDeleted:";
                }
			fin.read((char *)this, sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("data2.txt");
		rename("temp2.txt","data2.txt");
	}
}
void Book::updateBook()
{
	int f = 0;
	char d[15];
	cout << "ENTE Book ID YOU WNAT TO UPDATE:";
	cin.ignore();
	cin.getline(d,15);
	fstream file;
	file.open("data2.txt", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char *)this, sizeof(*this));
	while (!file.eof())
	{
		if (!strcmp(d,id))
		{
			f++;
			cout << "\nENTER NEW DATA FOR Book:\n";
			getBookdata();
			file.seekp(sizeof(*this) - file.tellp());
			file.write((char *)this, sizeof(*this));
		}
		file.read((char *)this, sizeof(*this));
	}
	if (f == 0)
		cout << "RECORD NOT FOUND!!!";
	file.close();
}
class Book_Student:public Student ,public Book
{
private:
public:
    void storeData(){
		fstream file,file2,file3;
		file3.open("Data.txt", ios::app | ios::binary | ios::in | ios::out);
		file.open("data.txt", ios::app | ios::binary | ios::in | ios::out);
		file.read((char *)this, sizeof(*this));
		while(!file.eof()){
            file3.write((char *)this,sizeof(*this));
            file.read((char *)this, sizeof(*this));
            file2.open("data2=.txt", ios::app | ios::binary | ios::in | ios::out);
		file2.read((char *)this, sizeof(*this));
		}
    }



};
int menus()
{
	int choice;
	cout << "\n\n\n====================\n";
	cout << "***Student_Record***\n";
	cout << "====================\n";
	cout << "\n1.INSERT Student RECORD:";
	cout << "\n2.SEARCHING IN A RECORD:";
	cout << "\n3.UPDATE RECORD:";
	cout << "\n4.DELETE RECORD:";
	cout << "\n5.VIEW ALL Student RECORD:";
	cout << "\n6.Go To Back:";
	cout << "\n\n\nENTER YOUR CHOICE:";
	fflush(stdin);
	cin>>choice;
	return (choice);
}
void Student::studmenu(){
    Student s;
     int c;
     c=menus();
 while (c!=6)
	{
		system("cls");
		switch (c)
		{
		case 1:
		    system("cls");
			s.getStudentdata();
			s.storeStudent();
			cout << "\nRECORD INSERTED SUCCESSFULLY!:";
			break;
		case 2:
		    system("cls");
			s.searchStudent();
			break;
		case 3:
		    system("cls");
			s.updateStudent();
			break;
		case 4:
		    system("cls");
			s.deleteStudent();
			break;
		case 5:
		    system("cls");
			s.viewAllStudent();
			break;
		case 6:
			cout<<"Thank You!";

		default:
			cout << "\nINVALID CHOICE!!!";

		}
        getch();
	}
}
int menu()
{
	int choice;
	cout << "\n\n\n==================================\n";
	cout << "***Student_Book_MANAGMENT_SYSTEM***\n";
	cout << "=================================\n";
	cout << "\n1.Student Record:";
	cout << "\n2.Book Record:";
	cout << "\n3.Book_Student Record:";
	cout << "\n4.EXIT PROGRAME:";
	cout << "\n\n\nENTER YOUR CHOICE:";
	fflush(stdin);
	cin>>choice;
	return (choice);
}
int menub()
{
	int choice;
	cout << "\n\n\n====================\n";
	cout << "***Book_Record***\n";
	cout << "====================\n";
	cout << "\n1.INSERT Book RECORD:";
	cout << "\n2.SEARCHING IN A RECORD:";
	cout << "\n3.UPDATE RECORD:";
	cout << "\n4.DELETE RECORD:";
	cout << "\n5.VIEW ALL Book RECORD:";
	cout << "\n6.Go To Back:";
	cout << "\n\n\nENTER YOUR CHOICE:";
	fflush(stdin);
	cin>>choice;
	return (choice);
}
           int menusb()
{
	int choice;
	cout << "\n\n\n====================\n";
	cout << "***Student_Book Record***\n";
	cout << "====================\n";
	cout << "\n1.VIEW ALL Student_Book RECORD:";
	cout << "\n2.SEARCHING IN A RECORD:";
	cout << "\n3.UPDATE RECORD:";
	cout << "\n4.DELETE RECORD:";
	cout << "\n5.Go To Back:";
	cout << "\n\n\nENTER YOUR CHOICE:";
	fflush(stdin);
	cin>>choice;
	return (choice);
}
int main(){

    Student s;
    Book b;
    Book_Student stbk;

    while(1){
        system("cls");
        switch(menu())
        {
       case 1:
           system("cls");
           s.studmenu();
	       break;
      case 2:
             system("cls");

    while (1)
	{
		system("cls");
		switch (menub())
		{
		case 1:
		    system("cls");
			b.getBookdata();
			b.storeBook();
			cout << "\nRECORD INSERTED SUCCESSFULLY!:";
			break;
		case 2:
		    system("cls");
			b.searchBook();
			break;
		case 3:
		    system("cls");
			b.updateBook();
			break;
		case 4:
		    system("cls");
			b.deleteBook();
			break;
		case 5:
		    system("cls");
			b.viewAllBook();
			break;
		case 6:
			cout << "\t\t\nTHANK YOU!!!";
			getch();
			exit(0);
		default:
			cout << "\nINVALID CHOICE!!!";

		}
		getch();
	}
	break;

        case 3:
           system("cls");

    while (1)
	{
		system("cls");
		switch (menusb())
		{
		case 1:
		    system("cls");

			cout << "\nRECORD INSERTED SUCCESSFULLY!:";
			break;
		case 2:
		    system("cls");

			break;
		case 3:
		    system("cls");

			break;
		case 4:
		    system("cls");

			break;
		case 5:
			cout << "\t\t\nTHANK YOU!!!";
			getch();
			exit(0);
		default:
			cout << "\nINVALID CHOICE!!!";

		}
		getch();
	}
	break;

        case 4:
            getch();
            exit(0);
        default:
            cout<<"Invalid Choice!";

        }
        getch();
}






getch();
return 0;
}
