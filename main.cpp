/*
 This program is made by:

 Mariam Ahmad Amin Beshary
 used to multiply :               Sin          function
                                  Cos          function
                                  ln(1+x)      function
                                  e to power x function
                                  tan inverse  function

 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979323846;

//convert to radians to degree
double toRadians(double num)
{
    const double PI = 3.14159265358979323846;
    return num * PI / 180.0;
}

//Sin function

    void sin()    {
    int n=10 ;
    double x,y,z;

   cout<<"Enter the angel in degree "<<endl;
   cin>>x;
   double sin= toRadians(x);
   y=toRadians(x);
   z=y;
   for (int i=0 ; i<n ; i++){
    z=(((-1.0*y*y)/(((2*i)+3)*((2*i)+2)))*z);
   sin += z;  }
    cout <<"The sin of that angel is "<<endl<<sin<<endl;
}

//Cos function

    void cos(){
    int h=10 ;
    double r,t,s;


   cout<<"Enter x to calculate cos(x)";
   cin>>r;
   double cos=1.0;
   t=toRadians(r);
   s=1.0;
   for (int x=0 ; x<h; x++){
   s= ((-(t*t))/((2*x+2)*(2*x+1)))*s;
   cos += s  ;
   }
   cout<<"The answer is : "<<cos<<endl;
}

//ln(1+x) function
  void ln(){
    int p=10 ;
    double m,s;

   cout<<"Enter x to calculate ln(1+x)";
   cin>>m;
   double ln=m;
   s=m;
   for (int a=1 ; a<p; a++){
   s= ((-1.0*(m))*(a/(a+1)))*s ;
   ln+= s ;}
   cout<<"The answer is : "<<ln<<endl;
}
//exponential function function
void ex (){
    int n=10 ;
    double x,y;

   cout<<"Enter the value of the power "<<endl;
   cin>>x;
   double ex= 1;
   y=1;
   for (int i=0 ; i<n ; i++){

   y=((y*x)/(i+1));
   ex += y;

    }
    cout<<"The answer is : "<<ex;


    }

//tan^-1 function

    void tan_i(){
    int u=10 ;
    double z,p,k;


   cout<<"Enter the value to get the angel in radians"<<endl;
   cin>>k;
   double tan_i=k;
   p=k;
   for (int a=1 ; a<u; a++){
   p= (((-1.0*(k*k))*(2*a+1))/(2*a+3))*p ;
   tan_i+= p ;
   }

   cout<<"The angel in radians is :"<<tan_i<<endl;
   cout<<"The angel in degree is :"<<((tan_i*180.0)/PI);
}

int main()
{

int ans ;
cout<<"Enter the number of what you want to calculate:\n     1) sin(x)\n     2) cos(x)\n     3) ln(x+1)\n     4) e to power x\n     5) tan inverse "<<endl;
cin>>ans;
if (ans==1)
    sin();
else if (ans==2)
    cos();
else if (ans==3)
     ln();
else if (ans==4)
    ex();
else if (ans==5)
    tan_i();

    return 0;
}









