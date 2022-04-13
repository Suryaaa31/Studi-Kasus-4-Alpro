#include <iostream>
using namespace std;
  
class Fibonacci {
  
public:
    long ubah1(int);//rekursif
    long ubah2(int);//iteratif

private:
	int a, b, c;
};
  
long Fibonacci::ubah1(int n)
{
    long a=1, b=1, c;

    cout << a << " " << b;
  
    for (int i=1; i<=n-2; i++) {
        c= a+b;
        a=b;
        b=c;
        cout<<" "<<c<<" ";
    }
}
long Fibonacci::ubah2(int n){
     if ((n==0)||(n==1)){
   		return (1);
  }
   else{
   	   return (ubah2(n-1)+ubah2(n-2));
   }
}
  
int main()
{
    int n=11;
  
    Fibonacci fbc;
	fbc.ubah1(n);//iteratif
    cout<<endl;
    fbc.ubah2(11);//rekursif
    return 0;
}
