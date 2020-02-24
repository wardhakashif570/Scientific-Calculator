#include<conio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
#define PI 3.14
using namespace std;
int fact(int n);
int perm(int n,int r);
int comb(int n,int r);
int determ(int o[3][3],int k);
int determinant(int d[20][20],int k);
int main()
{
 int a,b,n1,n2,n,r,pe,gcd,per,k,lcm,x1,x2,y1,y2,f,count=0,sum=0;
 int d[20][20],e[20][20],c[20][20],h[100],o[3][3],q[3][3],size1,size2,i,j;
 double x,num,p,g,distance;
 float m,l=0.0;
while(1)
{
cout<<"\n\n\nenter a operation you want to perform\n1.addition\n2.substarction\n3.multiplication\n4.devision\n5.remainder\n6.square root\n7.matrix addition\n8.matrix multiplication\n9.Transpose of a matrix\n10.to find wheather matrix is symmetric or not\n11.power\n12.log value\n13.exponent\n14.HCF\n15.LCM\n16.factorial\n17.permutation\n18.combination\n19.degree in to radian\n20.radian to degree\n21.percentage\n22.distane btw two points\n23.sum of diagonal\n24.matrix substraction\n25.determinant of matrix\n26.sine value\n27.cosine value\n28.adjoint of a matrix\n29.inverse of a matrix\n30.if you want to close the program"<<endl;
int ope,f=1; 
cin>>ope;
switch(ope)
{
case 1:
cout<<"enter the value of a and b\n";
cin>>a>>b;
cout<<"addition is\n" <<a+b;
break;
case 2:
cout<<"enter the value of a and b\n";
cin>>a>>b;
cout<<"substraction is\n" <<a-b;
break;
case 3:
cout<<" enter the value of a and b\n";
cin>>a>>b;
cout<<"multiplication is\n" <<a*b; 
break;
case 4:
cout<<"enter the value of a and b\n";
cin>>a>>b;
cout<<"devision is\n" <<a/b;
break;
case 5:
cout<<"enter the value of a and b\n";
cin>>a>>b;
cout<<"remainder is \n" <<a%b;
break;
case 6:
cout<<"enter a number you want a square\n";
cin>>num;
cout<<sqrt(num)<<endl;
break;
case 7:
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 1\n";
cin>>size1>>size2;
cout<<"enter the element of matrix 1\n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                     
cin>>d[i][j];
}
cout<<endl;
}
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 2 \n";
cin>>size1>>size2;
cout<<"enter the elements of matrix 2\n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                      
cin>>e[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
{  
 for(j=0;j<size2;j++)
{	                                      
c[i][j]=d[i][j]+e[i][j];
}
}
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                    
cout<<setw(2)<<c[i][j];
}
cout<<endl;
}
break;
case 8:
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 1\n";
cin>>size1>>size2;
cout<<"enter the element of matrix 1\n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                     
cin>>d[i][j];
}
cout<<endl;
}
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 2 \n";
cin>>size1>>size2;
cout<<"enter the elements of matrix 2\n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                      
cin>>e[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{               
int sum=0;
for(int k=0;k<size1;k++)
{
sum=sum+d[i][k]*e[k][j]; 
c[i][j]=sum;
} 
}
}    
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{
 cout<<setw(4)<<c[i][j];
}
cout<<endl;
}
break; 
case 9:
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 1\n";
cin>>size1>>size2;
cout<<"enter the element of matrix 1\n";
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{                                      
cin>>d[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{             
e[i][j]=d[j][i];
}
}
cout<<"the transpose of matrix is\n";
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{
 cout<<setw(4)<<e[i][j];
}
}
cout<<endl;
break;
case 10:  
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 1\n";
cin>>size1>>size2;
cout<<"enter the element of matrix 1\n";
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{                                      
cin>>d[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{             
e[i][j]=d[j][i];
}
}
for(i=0;i<size1;i++)
{
for(j=0;j<size2;j++)
{
 cout<<setw(4)<<e[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
for(j=0;j<size2;j++)
{
if(d[i][j]==e[i][j])
count++;
}
if(count==size2*size1)
cout<<"symmetric";
else
cout<<"unsymeetric";
break;
case 11:  
cout<<"enter a number you want to take power \n";
cin>>num;
cout<<"enter a power \n";
cin>>p;
x=pow(num,p);
cout<<"power is \n"<<x;
break;
case 12:
cout<<"enter a number you want to take log \n";
cin>>num;
x=log10(num);
cout<<"log value  is \n"<<x;
break;
case 13:
 cout<<"enter a number you want to take exponent \n";
cin>>num;
x=exp(num);
cout<<"exponent value  is \n"<<x;
break;
case 14:
cout<<"enter two numbers";
cin>>n1>>n2;
while(n1!=n2)
{             
 if(n1>n2)
 n1=n1-n2;
 else
 n2=n2-n1;                
}
cout<<"hcf is" <<n1;
break;
case 15:
cout<<"enter two numbers";
cin>>n1>>n2;
a=n1;
b=n2;
while(n1!=n2)
{     
 if(n1>n2)
 n1=n1-n2;
 else
 n2=n2-n1;          
}
gcd=n1;
lcm=a*b/gcd;
cout<<"lcm is "<<lcm;
break; 
case 16:   
cout<<"enter a number";
cin>>n;
for(i=1;i<=n;i++)
{
 f=f*i;
}
cout<<"factorial is"<<f;   
break; 
case 17:
{ 
cout<<"enter a number \n ";
cin>>n;
cout<<"entetr a value of r \n";
cin>>r;
pe=perm(n,r);
cout<<"permutation is "<<pe;
}
break;
case 18:
cout<<"enter a number \n ";
cin>>n;
cout<<"entetr a value of r \n";
cin>>r;
f=comb(n,r);
cout<<"combination is "<<f;
break;
case 19:
cout<<"enter the angle in degree";
cin>>a;
g=(a*PI/180);
cout<<"value in radian is"<<g;
break;
case 20:
cout<<"enter the angle in radian";
cin>>a;
g=(a*180/PI);
cout<<"value in degree is"<<g;
break;
case 21:
cout<<"how many number you want to enter\n";
cin>>n;
cout<<"enter the numbers\n";
for(j=0;j<n;j++)
{
cin>>h[j];
sum=sum+h[j];
}
per=sum/n;
cout<<"percentage is "<<per;
break;
case 22:
 cout<<"enter the value of x1,x2,y1,y2,distance\n";
 cin>>x1>>x2>>y1>>y2;
 x=pow(x2-x1,2)+pow(y2-y1,2);
 distance=sqrt(x);
 cout<<"distance is equal to"<<distance;
 break;
case 23:
 cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and column for size2 \n";
cin>>size1>>size2;
cout<<"enter the elements of matrix \n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                      
cin>>e[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                    
 if(i==j)
 sum= sum+e[i][j];
}
}
cout<<"sum of diagonal is"<<sum;
break;
case 24:
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 1\n";
cin>>size1>>size2;
cout<<"enter the element of matrix 1\n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                     
cin>>d[i][j];
}
cout<<endl;
}
cout<<"enter the size of your  matrix not exceed then 4 by 4 size1 for rows and size2 for column for matrix 2 \n";
cin>>size1>>size2;
cout<<"enter the elements of matrix 2\n";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                      
cin>>e[i][j];
}
cout<<endl;
}
for(i=0;i<size1;i++)
{  
 for(j=0;j<size2;j++)
{	                                      
c[i][j]=d[i][j]-e[i][j];
}
} cout<<"subtraction is\n";        
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
{                                                    
cout<<setw(2)<<c[i][j];
}
cout<<endl;
}
break; 
case 25:
cout<<"enter the order of your matrix not exceeding then 20\n";
cin>>k;
cout<<"enter the element of matrix 1\n";
for(i=0;i<k;i++)
{
for(j=0;j<k;j++)
{                                      
cin>>d[i][j];
}
cout<<endl;
}
b=determinant(d,k);
cout<<"determinant is equal to"<<b;
break; 
case 26:
 {
cout<<"enter the angle in degree \n";
cin>>m;
m=(m*(3.14/180));
for(i=1,n=1;n<=8;i=(2*n)+1,n++)
{
l=l+(pow(-1,n+1)*pow(m,i)/fact(i));
}
cout<<l;
}
break;
case 27:
cout<<"enter the angle in degree \n";
cin>>m;
m=(m*(3.14/180));
for(i=0,n=1;n<=8;i=(2*n),n++)
{
l=l+(pow(-1,n+1)*pow(m,i)/fact(i));
}
cout<<l;
break;
case 28:
cout<<"enter the matrix of order 3\n";
cin>>k;
cout<<"enter the element of matrix 1\n";
for(i=0;i<k;i++)
{
for(j=0;j<k;j++)
{                                      
cin>>o[i][j];
}
cout<<endl;
}
b=determ(o,k);
cout<<"determinant is equal to"<<b;
cout<<"\n\nadjoint of mtrix is is equal to\n\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<((o[(j+1)%3][(i+1)%3]*o[(j+2)%3][(i+2)%3])-(o[(j+1)%3][(i+2)%3]*o[(j+2)%3][(i+1)%3]))<<"\t";
cout<<"\n";
}
break;
case 29:
cout<<"enter the order of your matrix not exceeding then 3\n";
cin>>k;
cout<<"enter the element of matrix 1\n";
for(i=0;i<k;i++)
{
for(j=0;j<k;j++)
{                                      
cin>>o[i][j];
}
cout<<endl;
}
b=determ(o,k);
cout<<"determinant is equal to"<<b;
cout<<"\n\ninverse of mtrix is is equal to\n\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<(((o[(j+1)%3][(i+1)%3]*o[(j+2)%3][(i+2)%3])-(o[(j+1)%3][(i+2)%3]*o[(j+2)%3][(i+1)%3]))/b)<<"\t";
cout<<"\n";
}
break;                                                                                          
case 30:
exit(0);
break; 
default:
cout<<"invalid case";
}
}
getch();
return 0;
}
int perm(int n,int r)
{   int pa;
    pa=(fact(n)/(fact(n-r)));
    return pa;
} 
int fact(int n)
{
int f=1,i;
for(i=1;i<=n;i++)
{
 f=f*i;
}
 return f;
}
int comb(int n,int r)
{
    int pe;
    pe=(fact(n)/(fact(n-r)*fact(r)));
    return pe;
} 
int determinant(int d[20][20],int k)
{
  int m,c,n,s=1,i,j,det,e[20][20];
   if(k==1)
   return d[0][0];
   else
   {
       det=0;
   
   for(c=0;c<=k-1;c++)
   {
   m=0,n=0;

      for(i=0;i<k;i++)
   {
   for(j=0;j<k;j++)
   {
   e[i][j]=0;
   

   if(i!=0 && j!=c)
   {
   e[m][n]=d[i][j];
                             
 if((n<k-2))
 {
   n++;
}
else
{
   n=0;
   m++;
}
}
}
}
det=det+s*d[0][c]*determinant(e,k-1);
s=-1*s;
}
}
return(det);
}         


int determ(int o[3][3],int k)
{
  int m,c,n,s=1,i,j,det,q[3][3];
   if(k==1)
   return o[0][0];
   else
   {
       det=0;
   
   for(c=0;c<=k-1;c++)
   {
   m=0,n=0;

      for(i=0;i<k;i++)
   {
   for(j=0;j<k;j++)
   {
   q[i][j]=0;
   

   if(i!=0 && j!=c)
   {
   q[m][n]=o[i][j];
                             
 if((n<k-2))
 {
   n++;
}
else
{
   n=0;
   m++;
}
}
}
}
det=det+s*o[0][c]*determ(q,k-1);
s=-1*s;
}
}
return(det);
}         

