#include <iostream>

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
