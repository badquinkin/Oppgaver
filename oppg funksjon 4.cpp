#include <iostream>

using namespace std;


void miles () {
    float miles;

    cout << "\n\n Konvert mil til km? : \n";
    cout << "Hvor mange mil til km? : ";
    
    cin >> miles;
    float kilometer = miles * 1.609344;
    cout << "i " << miles << " Mil er det " << kilometer << " Kilometer ";
}

void celsius () {
    float celsius;

    cout << "\n\n Konvert celsius til fahrenheit: \n";
    cout << "Hvor mange celsius vil du konvertere: ";
    
    cin >> celsius;
    float fahr = celsius * 1.8 + 32;
    cout << miles << " Grader celsius er " << fahr << " grader i fahrenheit";
}


void kilometer () {
    float km;

    cout << "\n\n Konvertering av kilometer til mil: \n";
    cout << "Skriv inn hvor mange kilometer du vil konvertere: ";

    cin >> km;
    float miles = km / 1.609344;
    cout << "i " << km << " i antall mil er det " << miles << " Kilometer";

}

void fahrenheit () {
    float cels;

    cout << "\n\n Konvertering av celsius til fahrenheit: \n";
    cout << "Skriv inn hvor mange celsius du vil konvertere: ";

    cin >> cels;
    float fahrenheit = cels - 32 * 0.5556;
    cout << fahrenheit << " Grader fahrenheit er " << cels << " grader i celsius";
}

void avslutt () {
    exit;

}




int main() {
   
    cout << "\n\n ConvertPRO \n";

    cout << " Velg ett program! : \n";


    float valgfunk;
    cout << "1 - Miles Til Kilometer\n";
    cout << "2 - Celsius Til Fahrenheit\n";
    cout << "3 - Kilometer Til Miles\n";
    cout << "4 - Fahrenheit TIl Celsius\n";
    cout << "5 - Forlat programmet.\n";
    cout << "\n";
    cout << "Tast hvilke program: \n";

    cin >> valgfunk;


    if (valgfunk == 1) {
        miles();
        return 0;
    
    }   

    else if (valgfunk == 2) {
        celsius();
        return 0;
    }
    
    else if (valgfunk == 3) {
        kilometer();
        return 0;
    }

    else if (valgfunk == 4) {
        fahrenheit();
        return 0;
    }

    else if (valgfunk == 5) {
        return 0;
    }


}
