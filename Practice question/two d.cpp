#include <iostream>
using namespace std;
int main(){
    double wavelength;
    cout<<"Enter the wavelength in mm: "<<endl;
    cin>>wavelength;
    if(wavelength <= 1E-11)
		cout << "gamma ray radiation type\n";
	else if (wavelength <= 1E-8)
		cout << "X-ray radiation type\n";
	else if (wavelength <= 4E-7)
		cout << "This is ultaviolet radiation ray\n";
	else if (wavelength <= 7E-7)
		cout << "This is visible light radiation\n";
	else if (wavelength <= 1E-3)
		cout << "This is infrared ray\n";
	else if (wavelength <= 1E-2)
		cout << "This is microwaves type\n";
	else
		cout << "This is radio wave radiation ray\n";
    return 0;
}

