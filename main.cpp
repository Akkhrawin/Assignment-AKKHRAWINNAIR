#include <iostream>
using namespace std;



int main(int argc, char **argv){
 int i,N,*a;
			N=argc-1;
 		     a=new int[N];
			for(i=0;i<N;i++) {
			    a[i]=atoi(argv[i+1]);
		         cout<< "a[" << i << "]=" <<a[i]<<endl;
		}
  int *pa=a;
  int*pb=a+N-1;
    int temp;
    
  for (i = 0; i < N/2; i++) {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++; pb--;
  }
  
  pa-=N/2;

  for(i=0;i<N;i++) {
 		   cout<<pa[i]<<" "; 
 }
delete [] a;  
}

  

