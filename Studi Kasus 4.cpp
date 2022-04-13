#include <iostream>
using namespace std;
  
class Fibonacci {
  
public:
    long ubah(int);//rekursif
    long ubah(int);//iteratif

private:
    int i;
	int a, b, c;
};
  
int Fibonacci::ubah(int)
{
    a=1;
    b=1;
  
    cout << a << " " << b;
  
    for (int i=1; i<=n-2; i++) {
        c= a+b;
        cout<< " "<<c;
  
        a=b;
        b=c;
    }
}
int Fibonacci::ubah(int n){
     if (i==0){
   		cout<<a;
  }
  	else if (i==1){
   		cout<<" "<<b;
   }
   else{
    cout<<" "<<c;
    a = b;
    b = c;
   }
   return (n*ubah(n-1));
}
  
int main()
{
    int m=11;
  
    Fibonacci fbc;
    fbc.ubah(n);//iteratif
    cout<<endl;
    fbc.ubah(11);//rekursif
    return 0;
}
