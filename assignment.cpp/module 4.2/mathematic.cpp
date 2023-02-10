#include <iostream>

using namespace std;

int addition(int a, int b)
{

    int sum = a + b;

    return sum;
}

int subraction(int a, int b)
{

    int difference = a - b;

    return difference;
};

float multiplication(int a, int b)
{

    float product = (float)a * (float)b;

    return product;
};

float division(int a, int b)
{

    float quotient = (float)a / (float)b;

    return quotient;
};

int main()
{

    int opt;
    int a, b;

    cout.width(50);

    cout << "-----WELLCOME TO CALCULATOR-----\n";

    cout << " 1. Addition \n 2. Subraction \n 3.Multiplication \n 4.Division\n";

    cout << " Enter option: ";

    cin >> opt;

    cout << "Enter Number 1:\t";
    cin >> a;

    cout << "Enter Number 2:\t";
    cin >> b;

    switch (opt)

    {

    case 1:
        cout << "\n The Sum Is  : " << addition(a, b);

        break;

    case 2:
        cout << "\n The Difference Is :" << subraction(a, b);

        break;

    case 3:
        cout << "\n The Product Is :" << multiplication(a, b);

        break;

    case 4:
        cout << "\n The Quotient Is :" << division(a, b);

        break;

    default:
        cout << "------Enter correct option------";

        break;
    }

    return 0;
}