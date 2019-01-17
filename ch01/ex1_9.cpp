// sum the numbers from 50 to 100 (use while)

#include <iostream>
using namespace std;


int main()
{
    int i=50,sum=0; 
    while(i<=100){sum+=i;i++;}
    std::cout << "Sum of 50 to 100 inclusive is: " << sum << std::endl;
    return 0;
}
