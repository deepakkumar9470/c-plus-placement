#include <iostream>
#include<cstring>
using namespace std;

// int main(){
//     string str;
//     getline(cin, str);

//     cout << "The initial string is : ";
//     cout << str << endl;

//     str.push_back('b');
//     cout << "Pushing char at end " << str << endl;

//     str.pop_back();
//     cout <<"deleting char at end " << str << endl;
//     return 0;
// }


// int main(){
//     string str;
     
//     getline(cin, str);
//     cout << "The initial string is : ";
//     cout << str << endl;

//     str.append(" Kumar");
//     cout << str << endl;

//     cout << str << endl;
//     return 0;
// }



// int main(){

    // char str1[20] = "Hello";
    // char str2[20] = "Hey";
    // char str3[20] = "";
       
   
//     string str4  = "Hello I am Deepak Kumar Chouhan";   

//      // copy str1 into str3
//      strcpy(str3, str1);
//      cout << "strcpy :"<<str3<<endl;

//      // concat str1 and str2
//      strcat(str1, str2);
//      cout << "strconcate :"<<str1<<endl;
     
     // resize of the string
//      str4.resize(20);
   
//      cout<< "resize of str4 : " << str4 <<endl;


//     return 0;
// }



// in case of char arr we use this condition

// int main(){

//     char profession[50];

//     cout<<"Enter Your professsion : " <<endl;
//     cin.get(profession, 50);
//     cout<<"Your professsion is : " <<profession<<endl;
    
//     return 0;
// }

// int main() {
//   string str = "C++ Programming";

//   cout << "The length of string is: " << str.length() << endl;
//   cout << "The capacity of string is: " << str.capacity() << endl;

//   return 0;
// }



// passing string to a function

// void display(char *);
// void display(string);

// int main() {
//   string str1;
//   char str[100];

//   cout << "Enter the string: "<< endl;
//   getline(cin, str1);

//   cout << "Enter another string: ";
//   cin.getline(str, 100, '\n');

//   display(str1);
//   display(str);


//   return 0;
// }

// void display(char s[]){
//   cout << "Entered char array is: " << s << endl;
// }
// void display(string s){
//    cout << "Entered string is: " << s << endl;
// }



//  Checking Palindrome of a word

// int main(){
  
//   int n;
//   cin>>n;

//   char arr[n+1];

//   cin>>arr;

//   bool check = 1;
//   for (int i = 0; i < n; i++)
//   {
//      if(arr[i] != arr[n-1-i]){
//       check = 0;
//       break;
        
//      }
//   }
//   if(check == true){
//     cout<< "word a palindrome word"<<endl;
//   }
  
//   return 0;
// }


// int main(){

//   char str[20]=" friends forever";
//   cout<<str;
//   return 0;
// }

