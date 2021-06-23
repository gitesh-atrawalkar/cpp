#include <iostream>
#include<iomanip> //header file for setprecision
using namespace std;

/*Sample Input

3 12345678912345 a 334.23 14049.30493

 Sample Output

3
12345678912345
a
334.230
14049.304930000

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places. */

int main() {
    int a;
    long l;
    char c;
    float f;
    double d;
     
   
    cin>>a>>l>>c>>f>>d;
    
    cout<<a<<endl<<l<<endl<<c<<endl;
    
    //setprecision is used to fixed the no of decimals in floating and double
    cout<<fixed<<setprecision(3)<<f<<endl; //cout<<fixed<<setprecision(value)<<var_name
    cout<<fixed<<setprecision(9)<<d<<endl;
    
    return 0;
}
