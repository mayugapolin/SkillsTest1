#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double pRate, gIncome, nIncome, sAmount, bAmount;
    double cAmount, pbAmount, hWorked;
    
    
	const double tax_rate = 0.14;
    const double clothes_percentage = 0.10;
    const double school_percentage = 0.01;
    const double savings_bonds_percentage = 0.25;
    const double parents_contribution = 0.50;
    
    cout << "Number of Hours you Spent Working Each Week: ";
    cin >> hWorked;
    
    cout << "Hourly Rate: $";
    cin >> pRate;
    
    gIncome = hWorked * pRate;
    nIncome = gross - (gIncome * tax_rate);
    cAmount = nIncome * clothes_percentage;
    sAmount = nIncome * school_percentage;
    bAmount = nIncome * savings_bonds_percentage;
    pbAmount = bAmount * parents_contribution;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income (Pre-tax): $" << gIncome << endl;
    cout << "Net Income (Post-tax): $" << nIncome << endl;
    cout << "Clothes & Accessories Spendables: $" << cAmount << endl;
    cout << "School Supplies Spendables: $" << sAmount << endl;
    cout << "Savings Bonds: $" << bAmount << endl;
    cout << "Parents Contribution: $" <<pbAmount << endl;
    
    _getch();
    return 0;
}