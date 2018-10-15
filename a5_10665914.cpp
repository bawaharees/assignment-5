#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


struct studentdetails
{

string studentid;
string studentname;
int age;
string gender;
double score;
char grade;
};

int main()
{

ofstream textfile;
textfile.open("StudentDetails.txt");
double avgAge, avgScore;
textfile << "Student id  " << "Name  " << "age" << "Gender" << "Score" << "Grade" << endl;
textfile << "*******************************************************" << endl;


cout << "Student Records" << endl;
cout << "Input Student Details" << endl;

 studentdetails array[5];
 
for(int n=1; n<=5; n++)

{
cout << "Student id" << endl;
cin >> array[n].studentid;

cout << "Name" << endl;
cin >> array[n].studentname;

cout << "Age" << endl;
cin >> array[n].age;

cout << "Gender" << endl;
cin >> array[n].gender;

cout << "Score" << endl;
cin >> array[n].score;

avgAge +=array[n].age;
avgScore +=array[n].score;

cout << endl << endl;
 
if(array[n].score >=80 && array[n].score<=100)
{
	array[n].grade='A';
}

else if(array[n].score >=70 && array[n].score<80)
{
	array[n].grade='B';
}

else if(array[n].score >=60 && array[n].score<70)
{
	array[n].grade='C';
}

else if(array[n].score >=50 && array[n].score<60)
{
	array[n].grade='D';
}

else if(array[n].score >=45 && array[n].score<50)
{
	array[n].grade='E';
}

else if(array[n].score && array[n].score<45)
{
	array[n].grade='F';
}

textfile <<"No." <<n<<array[n].studentid<<" "<<array[n].studentname<<" "<<array[n].age<<" "<<array[n].gender<<" "<<array[n].score<<" "<<array[n].grade<<endl;
}
textfile << "*******************************************************" << endl;
textfile << "Average Age= " << avgAge/5 << endl;
textfile << "Average Score= " << avgScore/5 << endl;


return 0;
}
