#include<iostream.h>
#include <conio.h>
#include<fstream.h>
class u1
{public:
static int id;}u2;
int l=0;
int u1::id=100;
void idq()
{
for(int i=0;i<5;i++)
{u2.id++;l++;   }
ofstream f1("id.txt");
f1<<l;
f1.close();}
void idr()
{
ifstream f2("id.txt");
f2>>l;
f2.close();
}
void main()
{clrscr();
idr();
cout<<endl<<endl;
cout<<::l<<endl;
cout<<u2.id;
cout<<endl<<endl;
getch();}