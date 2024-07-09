#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string driversLicense, universityGraduate;

    cout << "Please enter your ag': ";
    cin >> age;
    cout << endl;

    if (age >= 40)
    {
        cout << "We're sorry, you do not meet our criteria. You need to be under 40 years old. ";
    }
    else
    {
        cout << "Do you have a driver's license? (Yes / No): ";
        cin >> driversLicense;
        cout << endl;
        if (driversLicense == "Yes" || driversLicense == "yes" || driversLicense == "y" || driversLicense == "Y")
        {
            cout << "Are you a university graduate? (Yes / No): ";
            cin >> universityGraduate;

            if (universityGraduate == "Yes" || universityGraduate == "yes" || universityGraduate == "y" || universityGraduate == "Y")
            {
                cout << endl << "Congratulations, you have been hired. " << endl;
            }
            else
            {
                cout << endl << "We're sorry, you need to be a university graduate. " << endl;
            }
        }
        else
        {
            cout << endl << "We're sorry, your application was rejected because you do not have a driver's license. " << endl;
        }
    }

    cout << endl;

    return 0;
}
