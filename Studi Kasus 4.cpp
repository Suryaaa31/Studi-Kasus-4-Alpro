#include <iostream>
using namespace std;
  
class Fibonacci {
  
public:
    long ubah(int n);
    long ubah2(int n);
private:
	int i;
	int a, b, c;
};
  
long Fibonacci::ubah(int n)
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
long Fibonacci::ubah2(int n){
 	if((n==0)||(n==1)){
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
    fbc.ubah(n);
    cout<<endl;
    fbc.ubah2(11);
    return 0;
}
