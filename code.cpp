/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -
int input (int &x)
{
    cin >> x;
    return x;
}

int input()
{
    int x;
    cin >> x;
    return x;
}
//end

int main(){
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
