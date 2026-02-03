// -------------- How to take input in Array and string From ------------

// getline : It takes line of inputs including your Spaces 
// cin : It takes words only ignore text after the spaces 
// ignore(n, '\n'): It ignore the next n buffer element ending with \name

//-- Point TO Rememebr :- 1. When taking input for character Array -> cin.getline(s.name, 20)
//                        2. When taking input for string -> getline(cin,s1.name)

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
    cout <<"Age :- "<<s.age<<"\n"<<"Name :- "<<s.name<<"\n"<<"Book :- "<<s.book<<"\n";
    cout <<"\n";
}
int main()
{
    struct student s1={21, "Divyansh Chouhan", "Social Science"};
    struct student s2 , s3;
    
    // manually enter the details 
    s2.age =21;
    strcpy(s2.name ,"Divyansh");
    s2.book ="Hindi";
    
    // Taking input from user 
    cout <<"Enter the Details Age , Name , Book : "<<endl ;
    cin>>s3.age;
    cin.ignore();
    cin.getline(s3.name , 23);
    getline(cin, s3.book);
    
    //  print all the details 
    PrintDetails(s1);
    PrintDetails(s2);
    PrintDetails(s3);
}