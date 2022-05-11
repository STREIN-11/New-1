#include<bits/stdc++.h>
using namespace std;

class Simple_calculator
{
    float a;
    float b;
    friend class menu;

public:
    void setData();
};

void Simple_calculator ::setData()
{
    int cal;
    cout << " " << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multification" << endl;
    cout << "4.Divide" << endl;
    cout << "Enter Your Choice :" << endl;
    cin >> cal;
    if (cal == 1)
    {
        cout << "Enter 1st Number : " << endl;
        cin >> a;
        cout << "Enter 2nd Number : " << endl;
        cin >> b;
        cout << "The Sum is : " << (a + b) << endl;
    }
    else if (cal == 2)
    {
        cout << "Enter 1st Number : " << endl;
        cin >> a;
        cout << "Enter 2nd Number : " << endl;
        cin >> b;
        cout << "The Subtraction is : " << (a - b) << endl;
    }
    else if (cal == 3)
    {
        cout << "Enter 1st Number : " << endl;
        cin >> a;
        cout << "Enter 2nd Number : " << endl;
        cin >> b;
        cout << "The Multification is : " << (a * b) << endl;
    }
    else if (cal == 4)
    {
        cout << "Enter 1st Number : " << endl;
        cin >> a;
        cout << "Enter 2nd Number : " << endl;
        cin >> b;
        cout << "The Divide is : " << (a / b) << endl;
    }
}

class scientific_calculator : virtual public Simple_calculator
{
    int c;

public:
    void set_Data();
    void get_Data();
};
void scientific_calculator :: set_Data()
{
    int select;
    cout << " " << endl;
    cout << "1.Calculator" << endl;
    cout << "2.Power" << endl;
    cout << "3.Root" << endl;
    cout << "4.Count Angles by Sin Cos" << endl;
    cout << "5.10^x" << endl;
    cout << "6.Square" << endl;
    cout << "7.Factorial" << endl;
    cout << "8.log(x)" << endl;
    cout << "Enter Your Choice : " << endl;
    cin >> select;
    if (select == 1)
    {
        setData();
    }
    else if (select == 2)
    {
        int exponent;
        float base, result = 1;
        cout << "Enter Base : " << endl;
        cin >> base;
        cout << "Enter Exponent Respectively : " << endl;
        cin >> exponent;

        cout << base << " ^ " << exponent << " = ";
        while (exponent != 0)
        {
            result *= base;
            --exponent;
        }
        cout << result;
    }
    else if (select == 3)
    {
        double x, result;
        cout << "Enter Number : " << endl;
        cin >> x;
        result = sqrt(x);
        cout << "Square root of " << x << " is " << result << endl;
    }
    else if (select == 4)
    {
        int angle, a;
        cout << "1.Sin" << endl;
        cout << "2.Cos" << endl;
        cout << "3.Exp" << endl;
        cout << "4.Tan" << endl;
        cout << "Enter Your Choice :" << endl;
        cin >> angle;
        if (angle == 1)
        {
            cout << "Enter The value of (a) : " << endl;
            cin >> a;
            cout << "The value of sin(" << a << ") is: " << sin(a) << endl;
        }
        else if (angle == 2)
        {
            cout << "Enter The value of (a) : " << endl;
            cin >> a;
            cout << "The value of cos(" << a << ") is: " << cos(a) << endl;
        }
        else if (angle == 3)
        {
            cout << "Enter The value of (a) : " << endl;
            cin >> a;
            cout << "The value of exp(" << a << ") is: " << exp(a) << endl;
        }
        else if (angle == 4)
        {
            cout << "Enter The value of (a) : " << endl;
            cin >> a;
            cout << "The value of tan(" << a << ") is: " << tan(a) << endl;
        }
        else
        {
            cout << "Check Input" << endl;
        }
    }
    else if (select == 5)
    {
        int exponent;
        float result = 1;
        cout << "Enter Exponent Respectively : " << endl;
        cin >> exponent;

        cout << " 10 ^ " << exponent << " = ";
        while (exponent != 0)
        {
            result *= 10;
            --exponent;
        }
        cout << result;
    }
    else if (select == 6)
    {
        int num, sqr;
        cout << "Enter a number \n";
        cin >> num;
        sqr = num * num;
        cout << " Square of  " << num << "  is " << sqr;
    }
    else if (select == 7)
    {
        int i, fact = 1, number;
        cout << "Enter any Number: ";
        cin >> number;
        for (i = 1; i <= number; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << number << " is: " << fact << endl;
    }
    else if (select == 8)
    {
        double x, ret;
        cout << "Enter The value of x" << endl;
        cin >> x;
        ret = log(x);
        cout << "log(" << x << ") = " << ret;
    }

    else
    {
        cout << "Check Input" << endl;
    }
}

class hybrid_calculator : virtual public Simple_calculator, virtual public scientific_calculator
{

public:
    void set_data();
};
void hybrid_calculator ::set_data()
{
    int option;
    cout << " " << endl;
    cout << "1.Calculator" << endl;
    cout << "2.Scientific Calculator" << endl;
    cout << "3.Binary to HexaDecimel" << endl;
    cout << "4.Palindrome" << endl;
    cout << "5.Armstrong" << endl;
    cout << "Enter Your Choice : " << endl;
    cin >> option;
    if (option == 1)
    {
        setData();
    }
    else if (option == 2)
    {
        set_Data();
    }
    else if (option == 3)
    {
        int hex[1000];
        int i = 1, j = 0, rem, dec = 0, binaryNumber;
        cout << "\n\n Convert a binary number to hexadecimal number\n";
        cout << "----------------------------------------------------\n";
        cout << " Input a binary number: ";
        cin >> binaryNumber;
        while (binaryNumber > 0)
        {
            rem = binaryNumber % 2;
            dec = dec + rem * i;
            i = i * 2;
            binaryNumber = binaryNumber / 10;
        }
        i = 0;
        while (dec != 0)
        {
            hex[i] = dec % 16;
            dec = dec / 16;
            i++;
        }
        cout << " The hexadecimal value: ";
        for (j = i - 1; j >= 0; j--)
        {
            if (hex[j] > 9)
            {
                cout << (char)(hex[j] + 55) << "\n";
            }
            else
            {
                cout << hex[j] << "\n";
            }
        }
    }
    else if (option == 4)
    {
        int n, r, sum = 0, temp;
        cout << "Enter the Number=";
        cin >> n;
        temp = n;
        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
        if (temp == sum){
            cout << "Number is Palindrome.";
        }
        else{
            cout << "Number is not Palindrome.";
        }
    }
    else if (option == 5)
    {
        {
            int n, r, sum = 0, temp;
            cout << "Enter the Number = ";
            cin >> n;
            temp = n;
            while (n > 0)
            {
                r = n % 10;
                sum = sum + (r * r * r);
                n = n / 10;
            }
            if (temp == sum)
                cout << "Armstrong Number." << endl;
            else
                cout << "Not Armstrong Number." << endl;
        }
    }

    else
    {
        cout << "Check Your Input" << endl;
    }
}

int main()
{
    int choice;
    char again = 'Y';
    while (again == 'y' || again == 'Y')
    {
        cout << " " << endl;
        cout << "1.Simple Calculator" << endl;
        cout << "2.Scientific Calculator" << endl;
        cout << "3.Hybrid Calculator" << endl;
        cout << "Enter Your Choice :" << endl;
        cin >> choice;
        if (choice == 1)
        {
            Simple_calculator num;
            num.setData();
        }
        else if (choice == 2)
        {
            scientific_calculator get;
            get.set_Data();
        }
        else if (choice == 3)
        {
            hybrid_calculator hy;
            hy.set_data();
        }

        else
        {
            cout << "Check Input" << endl;
        }
    }

    return 0;
}