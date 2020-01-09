#include <iostream>
#include <cstring>


using namespace std;



void wypiszDzide(int n,string prefix)
{
	if(n<=1)
	{
		cout<<"przeddzidzie"<<prefix<<" dzidy"<<endl;
		cout<<"sroddzidzie"<<prefix<<" dzidy"<<endl;
		cout<<"zadzidzie"<<prefix<<" dzidy"<<endl;
	}
	else{
		
		wypiszDzide(n-1,"-przeddzidzia"+prefix);
		wypiszDzide(n-1,"-sroddzidzia"+prefix);
		wypiszDzide(n-1,"-zadzidzia"+prefix);
	}
}

int main(int argc, char** argv) {
	wypiszDzide(2,"");
	return 0;
}
