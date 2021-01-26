// 0. This program prints a simple smiley face.
#include <iostream>
using namespace std;

int main() {
  cout << "\n\n";
  cout << "     ^    ^   \n";
  cout << "        .     \n";
  cout << "     \\____/  \n";
  return 0;
}

// 1. A program that stores integers and does basic math.
#include <iostream>
using namespace std;

int main() {
  int num1=50;
  int num2=100;
  int total=num1+num2;
  cout << "The total is " << total;
  return 0;
}


// 2. Write a program to take a percentage.
#include <iostream>
using namespace std;

int main() {
  double total_sales = 8.6;
  double generated = total_sales * .58;
  cout << "The East Coast sales division will generate $" << generated << " millon."<< endl;
  return 0;
}


// 3. Compute total sales tax on a $95 purchase.
#include <iostream>
using namespace std;

int main() {
  double cost = 95;
  double state_tax = .065;
  double county_tax = .02;
  double state_tax_inc = cost * state_tax;
  double county_tax_inc = cost * county_tax;
  double total_price = cost + state_tax_inc + county_tax_inc;
  double total_sales_tax = state_tax_inc + county_tax_inc;
  
  cout << "The cost of the item is: $" << cost << endl;
  
  cout << "We then add stat tax which is 6.5% and get a total of $" << state_tax_inc << " for the state tax." << endl;
  
  cout << "We then add county tax which is 2% and get a total of $" << county_tax_inc << " for the county tax." << endl;

  cout << "We then see that there is a total dollar amount for taxes of : $" << total_sales_tax << endl;

  cout << "The final purchase price would be: $" << total_price << endl;

  return 0;



}

// 4. Write a program that computes the tax and tip on a restaurant bill.

#include <iostream>
using namespace std;

int main() {
  double meal_charge = 44.5;
  double tax = meal_charge * .0675;
  double tip = (meal_charge + tax) * .15;
  double total = meal_charge + tax + tip;
  
  cout << "The charge for the meal is: $" << meal_charge << endl << "The total tax amount is: $" << tax << endl << "The total tip amount is: $" << tip << endl << "The total bill is: $" << total << endl;

  return 0;

}
