//--------------- Input and Output Function for Structure ------------------//
//---- How do we design a function for taking input from users in structure
// ---- How to Display the Output 

#include<iostream>
#include<string>
#include<string.h>
using namespace std  ;
struct student{
    int age ;
    char name[20];
    string book;
} ;
void PrintDetails(struct student s )
{
    cout <<"Age :- "<<s.age<<" "<<"Name :- "<<s.name<<" "<<"Book :- "<<s.book<<" ";
    cout <<"\n";
}
struct student input()
{
    struct student s;
    cout <<"Enter Age :- "<<endl ;
    cin>>s.age;
    cin.ignore();
    cout <<"Enter the Name :- "<<endl ;
    cin.getline(s.name , 25);
    cout<<"Enter the Favourate Book :- "<<endl ;
    getline(cin,s.book);
    return s;
};
int main()
{
    struct student s1, s2, s3;
    s1=input();
    s2=input();
    s3=input();
    cout <<"This is the Output below : "<<endl ;
    PrintDetails(s1);
    PrintDetails(s2);
    PrintDetails(s3);
   
}