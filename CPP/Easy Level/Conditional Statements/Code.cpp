
#include <bits/stdc++.h> 
//It is basically a header file that includes every standard library. 
//In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; 
//especially when your rank is time sensitive. 
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n==1)
    cout<<"one";
    else if(n==2)
    cout<<"two";
    else if(n==3)
    cout<<"three";
    else if(n==4)
    cout<<"four";
    else if(n==5)
    cout<<"five";
    else if(n==6)
    cout<<"six";
    else if(n==7)
    cout<<"seven";
    else if(n==8)
    cout<<"eight";
    else if(n==9)
    cout<<"nine";
    else
    cout<<"Greater than 9";
    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
    long int n, sum = 0, r;
    cout << "Enter the number : " << endl;
    cin >> n;
    if (1 <= n <= 9)
    {
        while (n > 0)
        {
            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }
        n = sum;
        while (n > 0)
        {
            r = n % 10;
            switch (r)
            {
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six ";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;
            case 0:
                cout << "zero ";
                break;
            default:
                cout << " ";
                break;
            }
            return 0;
        }
    }
    else
    {
        cout << "the number is greater than 9" << endl;
    }
    return 0;
}

*/
