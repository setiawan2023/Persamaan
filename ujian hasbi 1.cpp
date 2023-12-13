#include<cstdlib>
#include<iostream>
using namespace std;
int x(int a, int b, int c){
    int persamaan;
    persamaan = (4*a*b)/(7*c);
    return persamaan;
}

int main(){
    int a,b,c,persamaan;
    a= 120;
    b=90;
    c=12;
    persamaan = x(a,b,c);
    
    cout << "persamaan x =  " <<persamaan<<endl;
    system("PAUSE");
    return 0;
    
}
