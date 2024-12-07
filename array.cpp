#include <iostream>

using namespace std;
int main()
{
    int A[6] = {1,2,4,6};
    A[0] = 12;
    cout << *(A+3) << " "; 
    cout << *(A); 
   
} 
