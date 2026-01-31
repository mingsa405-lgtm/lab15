#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	
	int pa = *max_element(a,a+5); 
	cout << "Address of the highest value in array A is " << &pa << "\n";
	cout << "The highest value in array A is "<< pa << "\n";
	
	double pb = *max_element(b,b+10); 
	cout << "Address of the highest value in array B is " << &pb << "\n";
	cout << "The highest value in array B is "<< pb << "\n";

	return 0;
}
void shuffle(int *e,int *f,int *g,int *m ){
     int r=rand()%6;
     if(r == 0){swap(*e,*f);}
     else if(r == 1){swap(*e,*g);}
     else if(r == 2){swap(*e,*m);}
     else if(r == 3){swap(*f,*g);}
      else if(r == 4){swap(*f,*m);}
      else if(r == 5){swap(*g,*m);}
}
