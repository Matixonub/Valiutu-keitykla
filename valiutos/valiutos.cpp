#include<iostream>
#include<iomanip>
#include<cmath>
#include <string>

using namespace std;


string veiksm, pp;
double suma, kaina;
int main() {
    setlocale(LC_ALL, "Lithuanian");


    double GBP_Bendras = 0.8593;
    double GBP_Pirkti = 0.8450;
    double GBP_Parduoti = 0.9060;

    double USD_Bendras = 1.071;
    double USD_Pirkti = 1.0547;
    double USD_Parduoti = 1.1309;

    double INR_Bendras = 88.8260;
    double INR_Pirkti = 85.2614;
    double INR_Parduoti = 92.8334;

    cout << "Iveskite veiksma (Pirkti, Parduoti, Palyginti): " << endl;
    cin >> veiksm;
    for (int i = 0; i < veiksm.length(); i++) {
        veiksm[i] = toupper(veiksm[i]);
      
    }
    if (veiksm == "PIRKTI") {
        cout << fixed << setprecision(2);
        cout << "Kokia valiuta norite pirkti (USD, GBP, INR)?: " << endl;
        cin >> pp;
        for (int i = 0; i < pp.length(); i++) {
            pp[i] = toupper(pp[i]);
        }
        if (pp == "GBP") {
            cout << "GBP kaina yra: " << GBP_Bendras << "GBP uz 1 EURa" << endl;
            cout << "Kiek norite nupirkti " << pp << " ?" << endl;
            cin >> suma;
            kaina = suma / GBP_Parduoti;
            cout << "Jums reikes " << kaina << " euru." << endl;
        }
        else if (pp == "USD") {
            cout << "USD kaina yra: " << USD_Bendras << "USD uz 1 EURa" << endl;
            cout << "Kiek norite nupirkti " << pp << " ?" << endl;
            cin >> suma;
            kaina = suma / USD_Parduoti;
            cout << "Jums reikes " << kaina << " euru." << endl;
        }
        else if (pp == "INR") {
            cout << "INR kaina yra: " << INR_Bendras << "INR uz 1 EURa" <<endl;
            cout << "Kiek norite nupirkti " << pp << " ?" << endl;
            cin >> suma;
            kaina = suma / INR_Parduoti;
            cout << "Jums reikes " << kaina << " euru." << endl;
        }
    }

    else if (veiksm == "PARDUOTI") {
        cout << fixed << setprecision(2);
        cout << "Kokia valiuta norite parduoti (USD, GBP, INR)?: " << endl;
        cin >> pp;
        for (int i = 0; i < pp.length(); i++) {
            pp[i] = toupper(pp[i]);
        }
        if (pp == "GBP") {
            cout << "GBP kaina yra: " << GBP_Bendras << "GBP uz 1 EURa"<<endl;
            cout << "Kiek norite parduoti " << pp << " ?: " << endl;
            cin >> suma;
            kaina = suma / GBP_Pirkti;
            cout << "Gausite " << kaina << " euru." << endl;
        }
        else if (pp == "USD") {
            cout << "USD kaina yra: " << USD_Bendras << "USD uz 1 EURa" << endl;
            cout << "Kiek norite parduoti " << pp << " ?: " << endl;
            cin >> suma;
            kaina = suma / USD_Pirkti;
            cout << "Gausite " << kaina << " euru." << endl;
        }
        else if (pp == "INR") {
            cout << "INR kaina yra: " << INR_Bendras << "INR uz 1 EURa" << endl;
            cout << "Kiek norite parduoti " << pp << " ?" << endl;
            cin >> suma;
            kaina = suma / INR_Pirkti;
            cout << "Gausite " << kaina << " euru." << endl;
        }
    }
    else if (veiksm == "PALYGINTI") {
        cout << "Vienas euras lygus: " << GBP_Bendras << " GBP" << endl; 
        cout << "Vienas euras lygus: " << USD_Bendras << " USD" << endl; 
        cout << "Vienas euras lygus: " << INR_Bendras << " INR" << endl;
    }   

return 0;
}