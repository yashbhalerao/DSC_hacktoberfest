#include <iostream>  //  header  files
using namespace std;

int binarySearch(int[], int, int, int);

int main()                                  // main 
{
   int num[10] = {10, 22, 37, 55, 92, 118};
   int search_num, loc=-1;

   cout<<"Enter the number that you want to search: ";  // input function
   cin>>search_num;

   loc = binarySearch(num, 0, 6, search_num);      // binary fuction 

   if(loc != -1)
   {
      cout<<search_num<<" found in the array at the location: "<<loc;
   }
   else
   {
      cout<<"Element not found";      // exception handle
   }
   return 0;
}

int binarySearch(int a[], int first, int last, int search_num)   // main binary logic
{
   int middle;
   if(last >= first)
   {
      middle = (first + last)/2;
     
      if(a[middle] == search_num)
      {
         return middle+1;
      }

      
      else if(a[middle] < search_num)
      {
         return binarySearch(a,middle+1,last,search_num);
      }


      else
      {
         return binarySearch(a,first,middle-1,search_num);
      }

   }
   return -1;
}
