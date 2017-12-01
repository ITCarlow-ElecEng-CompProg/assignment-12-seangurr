/** Sean Gurr
 *  C00221886
 *  Ex. 12
 *  Complex Number Calculations
 *  30/11/2017
 */

/**< Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <windows.h>

using namespace std;

/**< Complex number structure */
struct complexnumber
{
    float real;
    float imag;
};

/**< User-defined functions */
complexnumber add       (complexnumber struct1, complexnumber struct2);
complexnumber subtract  (complexnumber struct1, complexnumber struct2);
complexnumber multiply  (complexnumber struct1, complexnumber struct2);
complexnumber divide    (complexnumber struct1, complexnumber struct2);

using namespace std;

/**< Main function */
int main()
{

    struct complexnumber entry1, entry2, Addition, Subtraction, Multiply, Division;

    /**<  */
    cout << "\nEnter first Real number: " << endl;
    cin >> entry1.real;

    /**<  */
    cout << "\nEnter first Imaginary number: " << endl;
    cin >> entry1.imag;

    cout << "\nEnter second Real number: " << endl;
    cin >> entry2.real;

    cout << "\nEnter second Imaginary number: " << endl;
    cin >> entry2.imag;


    Addition= add(entry1, entry2);

    Subtraction = subtract(entry1, entry2);

    Multiply = multiply(entry1, entry2);

    Division = divide(entry1, entry2);

    /**< Dispaly results */
    /**< I was unable to output correct answer in terms of addition/subtraction sign being displayed*/
    cout << "\nThe sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " + "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Addition.real << "+" << Addition.imag << "j" << endl;
    cout << "\nThe sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " - "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Subtraction.real << "+" << Subtraction.imag << "j" << endl;
    cout << "\nThe sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " x "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Multiply.real << "+" << Multiply.imag << "j" << endl;
    cout << "\nThe sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " / "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Division.real << "+" << Division.imag << "j" << endl;


    return 0;
}

/**< Sub function to add real and imaginary numbers */
complexnumber add(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Addition;


    Addition.real = struct1.real + struct2.real;

    Addition.imag = struct1.imag + struct2.imag;

    return Addition;
}

/**< Sub function to subtract real and imaginary numbers */
complexnumber subtract(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Subtraction;

    Subtraction.real = struct1.real - struct2.real;
    Subtraction.imag = struct1.imag - struct2.imag;

    return Subtraction;
}

/**< Sub function to multiply real and imaginary numbers */
complexnumber multiply(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Multiply;


    Multiply.real = struct1.real*struct2.real - struct1.imag*struct2.imag;
    Multiply.imag = struct1.imag*struct2.real + struct1.real*struct2.imag;

    return Multiply;
}

/**< Sub function to add real and imaginary numbers */
complexnumber divide(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Division;

    float denominator;


    Division.real = struct1.real*struct2.real + struct1.imag*struct2.imag;
    Division.imag = struct1.imag*struct2.real - struct1.real*struct2.imag;
    denominator = struct2.real*struct2.real + struct2.imag*struct2.imag;
    Division.real = Division.real/denominator;
    Division.imag = Division.imag/denominator;

    return Division;
}
