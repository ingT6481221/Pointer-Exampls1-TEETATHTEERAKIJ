#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
  /*int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  
  int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;*/

/*Example Array*/
  
/*int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 

 the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) 8*/
  char *pa, *pb, i ,temp;
  char a[1000];
  //pa = &a; //pa =a;
  cout<<"Input: ";
  cin>>a;
  int SIZE = strlen(a);

  pa = &a[0];
  cout<<"Original:";
  for (i=0; i<SIZE-1; i++ ,pa++)
    {
      cout<<setw(3)<<*pa;
    }
  cout<<setw(3)<<*pa<<endl;
  pa = &a[0]; pb = &a[SIZE -1];
  cout<<"Reverse: ";
  for(i=0; i<SIZE/2;i++)
    {
      temp = *pa;
      *pa = *pb;
      *pb = temp;
      pa++; pb--;
    }
  pa = &a[0];
  for(i=0;i<SIZE-1;i++,pa++)
    cout<<setw(3)<<*pa;

  cout<<setw(3)<<*pa<<endl;
  return 0;
}
