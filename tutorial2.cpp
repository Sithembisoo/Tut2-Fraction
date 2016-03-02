#include <iostream>
using namespace std;

class fraction
{
	float a_nume, a_deno, b_nume, b_deno;
public:
	fraction(){
		getNum();
	}
	~fraction(){};

	void getNum(){
		cout << "Enter numerator 1: ";
		cin >> a_nume;
		cout << "Enter denominator 1: ";
		cin >> a_deno;
		cout << "Enter numerator 2: ";
		cin >> b_nume;
		cout << "Enter denominator 2: ";
		cin >> b_deno;
		print();
	}
private:
	void print(){

		cout << "Results after addition " << add() << "/" << hcf(a_deno, b_deno) << endl;
		cout << "Results after subtraction " << subtract() << endl;
		cout << "Results after multiplication " << multiply(a_nume, b_nume) << "/" << multiply(a_deno, b_deno) << endl;
		cout << "Results after division " << divide(a_nume, b_deno) << "/" << divide(a_deno, b_nume) << endl;


	}
	int add(){
		int high = 0;
		high = hcf(a_deno, b_deno);
		return((high / a_deno)*a_nume) + ((high / b_deno)*b_nume);

	}
	int hcf(int n1, int n2)
	{
		if (n2 != 0)
			return hcf(n2, n1%n2);
		else
			return n1;
	}
	int  subtract(){

		int high = 0;
		high = hcf(a_deno, b_deno);
		return((high / a_deno)*a_nume) - ((high / b_deno)*b_nume);

	}
	int multiply(int a, int b){


		return a*b;


	}
	int divide(int a, int b){

		return a*b;


	}

};
int main()
{
	fraction compute;
	return 0;

}
