
   
#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int size;   
cin >> size;
int *A = new int[size];//dynamically assign memory to pointer A 
/*your code here*/
delete[] A;
