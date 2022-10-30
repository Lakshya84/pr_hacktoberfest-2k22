#include <iostream>
using namespace std;
int main() 
{
   char str[100] = "Check the frequency of 'f' in this sentence.";
   char c = 'f';
   int n = 0;
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == c)
      n++;
   }
   cout<<"Frequency of alphabet "<<c<<" in the string is "<<n;
   return 0;
}
