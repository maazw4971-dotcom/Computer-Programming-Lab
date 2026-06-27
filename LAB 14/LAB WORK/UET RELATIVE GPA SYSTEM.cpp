//==============================================================
// UET Peshawar Relative GPA Management System
// EE-170 Computer Programming Project
// Language: C++11
//==============================================================

//---------------- Header Files ----------------//

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//---------------- Constant ----------------//

const int MAX = 100;

//---------------- Structure ----------------//

struct Marks
{
    float quiz;
    float assignment;
    float mid;
    float finalExam;
};

//---------------- Student Class ----------------//

class Student
{
public:

    string rollNo;
    string name;
    string department;
    int batch;

    Marks marks;

    float total;
    float gpa;
    char grade;

    // Constructor
    Student()
    {
        rollNo="";
        name="";
        department="";
        batch=1;

        marks.quiz=0;
        marks.assignment=0;
        marks.mid=0;
        marks.finalExam=0;

        total=0;
        gpa=0;
        grade='F';
    }

    // Input Student Information
    void inputStudent()
    {
        cout<<"\nEnter Roll Number : ";
        cin>>rollNo;

        cin.ignore();

        cout<<"Enter Student Name : ";
        getline(cin,name);

        cout<<"Enter Department : ";
        getline(cin,department);

        cout<<"Enter Batch (1-4): ";
        cin>>batch;
    }

    // Display Student
    void displayStudent()
    {
        cout<<"\n------------------------------------";

        cout<<"\nRoll Number : "<<rollNo;

        cout<<"\nName        : "<<name;

        cout<<"\nDepartment  : "<<department;

        cout<<"\nBatch       : "<<batch;

        cout<<"\nQuiz Marks  : "<<marks.quiz;

        cout<<"\nAssignment  : "<<marks.assignment;

        cout<<"\nMid Marks   : "<<marks.mid;

        cout<<"\nFinal Marks : "<<marks.finalExam;

        cout<<"\nTotal Marks : "<<total;

        cout<<"\nGrade       : "<<grade;

        cout<<"\nGPA         : "<<gpa;

        cout<<"\n------------------------------------";
    }

};

//---------------- Global Variables ----------------//

Student student[MAX];

int totalStudents=0;

//---------------- Function Prototypes ----------------//

void addStudent();
void displayStudents();
void searchStudent();
void enterMarks();
void calculateRelativeGPA();
void displayStatistics();
void rankStudents();
void saveData();
void loadData();

//---------------- Add Student ----------------//

void addStudent()
{
    if(totalStudents>=MAX)
    {
        cout<<"\nStudent List Full.\n";
        return;
    }

    student[totalStudents].inputStudent();

    totalStudents++;

    cout<<"\nStudent Added Successfully.\n";
}

//---------------- Display Students ----------------//

void displayStudents()
{
    if(totalStudents==0)
    {
        cout<<"\nNo Student Available.\n";
        return;
    }

    for(int i=0;i<totalStudents;i++)
    {
        student[i].displayStudent();
    }
}

//---------------- Search Student ----------------//

void searchStudent()
{
    string roll;

    bool found=false;

    cout<<"\nEnter Roll Number : ";
    cin>>roll;

    for(int i=0;i<totalStudents;i++)
    {
        if(student[i].rollNo==roll)
        {
            student[i].displayStudent();

            found=true;

            break;
        }
    }

    if(found==false)
    {
        cout<<"\nStudent Not Found.\n";
    }
}

//---------------- Enter Marks ----------------//

void enterMarks()
{
    string roll;

    bool found=false;

    cout<<"\nEnter Roll Number : ";
    cin>>roll;

    for(int i=0;i<totalStudents;i++)
    {
        if(student[i].rollNo==roll)
        {
            cout<<"\nEnter Quiz Marks (10): ";
            cin>>student[i].marks.quiz;

            cout<<"Enter Assignment Marks (10): ";
            cin>>student[i].marks.assignment;

            cout<<"Enter Mid Marks (30): ";
            cin>>student[i].marks.mid;

            cout<<"Enter Final Marks (50): ";
            cin>>student[i].marks.finalExam;

            student[i].total=
            student[i].marks.quiz+
            student[i].marks.assignment+
            student[i].marks.mid+
            student[i].marks.finalExam;

            cout<<"\nMarks Added Successfully.\n";

            found=true;

            break;
        }
    }

    if(found==false)
    {
        cout<<"\nStudent Not Found.\n";
    }
}//---------------- Calculate Relative GPA ----------------//

void calculateRelativeGPA()
{
    if(totalStudents==0)
    {
        cout<<"\nNo Students Available.\n";
        return;
    }

    float average=0;

    // Calculate class average
    for(int i=0;i<totalStudents;i++)
    {
        average=average+student[i].total;
    }

    average=average/totalStudents;

    cout<<"\nClass Average Marks : "<<average<<endl;

    // Assign Relative Grades
    for(int i=0;i<totalStudents;i++)
    {
        if(student[i].total>=average+15)
        {
            student[i].grade='A';
            student[i].gpa=4.00;
        }

        else if(student[i].total>=average+10)
        {
            student[i].grade='B';
            student[i].gpa=3.50;
        }

        else if(student[i].total>=average)
        {
            student[i].grade='C';
            student[i].gpa=3.00;
        }

        else if(student[i].total>=average-10)
        {
            student[i].grade='D';
            student[i].gpa=2.00;
        }

        else
        {
            student[i].grade='F';
            student[i].gpa=0.00;
        }
    }

    cout<<"\nRelative GPA Calculated Successfully.\n";
}

//---------------- Display Statistics ----------------//

void displayStatistics()
{
    if(totalStudents==0)
    {
        cout<<"\nNo Student Data Available.\n";
        return;
    }

    float highest=student[0].total;
    float lowest=student[0].total;
    float average=0;

    for(int i=0;i<totalStudents;i++)
    {
        if(student[i].total>highest)
            highest=student[i].total;

        if(student[i].total<lowest)
            lowest=student[i].total;

        average=average+student[i].total;
    }

    average=average/totalStudents;

    cout<<"\n===================================";
    cout<<"\nClass Statistics";
    cout<<"\n===================================";

    cout<<"\nHighest Marks : "<<highest;
    cout<<"\nLowest Marks  : "<<lowest;
    cout<<"\nAverage Marks : "<<average<<endl;
}

//---------------- Rank Students ----------------//

void rankStudents()
{
    if(totalStudents==0)
    {
        cout<<"\nNo Student Available.\n";
        return;
    }

    Student temp;

    // Bubble Sort (Highest Marks First)
    for(int i=0;i<totalStudents-1;i++)
    {
        for(int j=0;j<totalStudents-1-i;j++)
        {
            if(student[j].total<student[j+1].total)
            {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }

    cout<<"\n========================================";
    cout<<"\nStudent Ranking";
    cout<<"\n========================================";

    for(int i=0;i<totalStudents;i++)
    {
        cout<<"\nRank "<<i+1;

        cout<<"\nName : "<<student[i].name;

        cout<<"\nRoll : "<<student[i].rollNo;

        cout<<"\nMarks : "<<student[i].total;

        cout<<"\nGPA : "<<student[i].gpa;

        cout<<"\n---------------------------";
    }
}

//---------------- Save Data ----------------//

void saveData()
{
    ofstream file("students.txt");

    if(file.fail())
    {
        cout<<"\nFile Cannot Be Opened.\n";
        return;
    }

    file<<totalStudents<<endl;

    for(int i=0;i<totalStudents;i++)
    {
        file<<student[i].rollNo<<endl;
        file<<student[i].name<<endl;
        file<<student[i].department<<endl;
        file<<student[i].batch<<endl;
        file<<student[i].marks.quiz<<endl;
        file<<student[i].marks.assignment<<endl;
        file<<student[i].marks.mid<<endl;
        file<<student[i].marks.finalExam<<endl;
        file<<student[i].total<<endl;
        file<<student[i].gpa<<endl;
        file<<student[i].grade<<endl;
    }

    file.close();

    cout<<"\nData Saved Successfully.\n";
}

//---------------- Load Data ----------------//

void loadData()
{
    ifstream file("students.txt");

    if(file.fail())
    {
        cout<<"\nNo Saved File Found.\n";
        return;
    }

    file>>totalStudents;

    file.ignore();

    for(int i=0;i<totalStudents;i++)
    {
        getline(file,student[i].rollNo);
        getline(file,student[i].name);
        getline(file,student[i].department);

        file>>student[i].batch;
        file>>student[i].marks.quiz;
        file>>student[i].marks.assignment;
        file>>student[i].marks.mid;
        file>>student[i].marks.finalExam;
        file>>student[i].total;
        file>>student[i].gpa;
        file>>student[i].grade;

        file.ignore();
    }

    file.close();

    cout<<"\nData Loaded Successfully.\n";
}//---------------- Main Function ----------------//

int main()
{
    int choice;

    do
    {
        cout << "\n==============================================";
        cout << "\n   UET Peshawar Relative GPA System";
        cout << "\n==============================================";

        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Enter Marks";
        cout << "\n5. Calculate Relative GPA";
        cout << "\n6. Display Statistics";
        cout << "\n7. Display Student Ranking";
        cout << "\n8. Save Data";
        cout << "\n9. Load Data";
        cout << "\n0. Exit";

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                enterMarks();
                break;

            case 5:
                calculateRelativeGPA();
                break;

            case 6:
                displayStatistics();
                break;

            case 7:
                rankStudents();
                break;

            case 8:
                saveData();
                break;

            case 9:
                loadData();
                break;

            case 0:
                cout << "\nThank You For Using The System.\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

    }while(choice!=0);

    return 0;
}