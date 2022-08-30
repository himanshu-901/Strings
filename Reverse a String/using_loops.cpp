// method 1 - "Last To First Using For Loop"

#include <bits/stdc++.h>
using namespace std;

void reverse(string str){
  for(int i = str.length()-1;i>=0;i--){
    cout<<str[i];
  }
}


int main() 
{
    string str = "hello";
    cout<<str<<endl;
    reverse(str);
    
    return 0;
}

// method 2 - "Last To First Using While Loop

#include <bits/stdc++.h>
using namespace std;

void reverse(string str){
  int n = str.length();
  while(n--){
    cout<<str[n];
  }
}
int main() 
{
    string str = "gfd";
    cout<<str<<endl;
    reverse(str);
    
    return 0;
}

// method 3 - "First to last using for loop"

#include <bits/stdc++.h>
using namespace std;

void reverse(string &str){
 int n  = str.length();
 for(int i=0;i<n/2;i++){
   swap(str[i],str[n-i-1]);
 }
}
int main() 
{
    string str = "hello";
    cout<<str<<endl;
    reverse(str);
    cout<<str;
    
    return 0;
}
