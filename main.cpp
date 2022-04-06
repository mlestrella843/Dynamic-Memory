/*Activity 4.3
Write a program to capitalise the first and last letter of a given string. Use dynamic memory techniques to create the string. */

#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;

int main() {

int n;
char *p;
char letra;
cout<<"Introduce the number of letters of a name: "<<endl;
cin>>n;

p = new char[n];

for (int i=0; i< n; i++){
  cout<<"Introduce the letters of a name one by one: ";
  cin>>p[i];  
}
cout<<"Print the letters of a name: ";
for (int i=0; i< n; i++){
  cout<<p[i]<<", ";   
}
cout<<"\n";
  
letra = *(p);
letra = toupper(letra);
cout<<"The fisrt letter of the name in Uppercase: "<<letra<<endl;
  
letra = *(p + n -1);
letra = toupper(letra);
cout<<"The last letter of the name in uppercase: "<<letra<<endl;

return 0;
 
}



