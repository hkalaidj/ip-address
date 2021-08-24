#include <iostream>
#include <stdio.h>
#include <deque>
#include <string>
#include<math.h>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <windows.h>

using namespace std;


int main()
{

    system("Color 0A");
    cout << "ENTER THE IP ADDRESS AS FOUR INDIVIDUAL SEGMENTS FOLLOWED BY ENTER EACH TIME" << endl;

    struct IP{
    unsigned int a:8;
    unsigned int b:8;
    unsigned int c:8;
    unsigned int d:8;};
    int choice;
    IP k;
    int e;
    int f;
    int g;
    int h;
    cin>>e;
    cin>>f;
    cin>>g;
    cin>>h;
    k.a=e;
    k.b=f;
    k.c=g;
    k.d=h;

    struct test{
        int e:8;
        int f:8;
        int g:8;
        int h:8;
    };

test c;
c.e=e;
c.f=f;
c.g=g;
c.h=h;
do{
    cout<<"CHOOSE YOUR OUTPUT TYPE "<<endl;
    cout<<"1 For Single Value"<<endl;
    cout<<"2 For Four Values"<<endl;
    cout<<"3 For Two Values"<<endl;
    cout<<"4 For A Single Bit Value"<<endl;
    cout<<"5 choose 5 To exit program"<<endl;
    cout<<"YOUR CHOICE = ";
    cin >>choice;

switch (choice)
{
case 1:cout<<"For Single Value Your Output Will Be :"<<endl;

struct halves3{

unsigned int right1:8;
unsigned int left1:8;
unsigned int right2:8;
unsigned int left2:8;
};

union all1{

halves3 half1;
unsigned int whole1:32;

};
all1 A;

A.half1.right1=h;
A.half1.left1=g;
A.half1.right2=f;
A.half1.left2=e;
cout<<A.whole1<<endl;
Beep(700,200);
break;

case 2:cout<<"For Four Values Your Output Will Be"<<endl;
cout<<k.a<<"."<<k.b<<"."<<k.c<<"."<<k.d<<endl;
Beep(700,200);
break;

case 3:cout<<"FOR TWO VALUES THE OUTPUT WILL BE"<<endl;
{


struct halves1{

unsigned int right1:8;
unsigned int left1:8;

};

union all1{

halves1 half1;
unsigned int whole1:16;

};
all1 A;

A.half1.right1=f;
A.half1.left1=e;

cout<<A.whole1<<",";

struct halves2{

unsigned int right2:8;
unsigned int left2:8;

};

union all2{

halves2 half2;
unsigned int whole2:16;

};
all2 B;

B.half2.right2=h;
B.half2.left2=g;

cout<<B.whole2;
Beep(700,200);
}

break;

case 4:cout<<"FOR  A SINGLE BIT VALUE YOUR OUTPUT WILL BE :"<<endl;



std::bitset<8> bin_M(e);
std::bitset<8> bin_N(f);
std::bitset<8> bin_O(g);
std::bitset<8> bin_P(h);

std::cout << bin_M<<bin_N<<bin_O<<bin_P<<endl;
string m;
string n;
string o;
string p;
m=bin_M.to_string();
n=bin_N.to_string();
o=bin_O.to_string();
p=bin_P.to_string();
string z=m+n+o+p;
Beep(700,200);
cout<<" "<<endl;

    cout<<"WHICH BIT WOULD YOU LIKE TO SEE  ENTER AN INTEGER BETWEEN 0 AND 31: ";
int bit;
cin>>bit;
int y=31-bit;
cout<<"THE REQUESTED BIT IS: "<<z[y];

Beep(700,200);
}
cout<<endl<<endl;

}while(choice!=5);



return 0;

}

