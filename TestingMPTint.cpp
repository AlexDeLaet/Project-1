// Katie Timmerman
// Assignment 1

#include <iostream>
#include "MaryPoppinsToteInt.hpp"
using namespace std;

void basicTesting();
void moreTesting();
void emptyTesting();
int main() {

	basicTesting();
	emptyTesting();
	moreTesting();

}

void basicTesting(){
	MaryPoppinsTote maryPoppinsTote1;
	maryPoppinsTote1.place(1);
	maryPoppinsTote1.place(2);
	maryPoppinsTote1.place(3);

	cout << "Testing search on " << maryPoppinsTote1 <<endl;
	cout << "The number of ones in the tote is " << maryPoppinsTote1.search(1) << endl;
	cout << "The number of twos in the tote is " << maryPoppinsTote1.search(2) << endl;
	cout << "The number of threes in the tote is " << maryPoppinsTote1.search(3) << endl;
	cout << "The number of fours in the tote is " << maryPoppinsTote1.search(4) << endl;
	cout << endl << endl;


	cout << "Testing reach on " << maryPoppinsTote1 <<endl;
	int itemdrawn = maryPoppinsTote1.reach();
	cout << "A " << itemdrawn << " was drawn from the tote." << endl << endl;
	cout << "The number of ones in the tote is " << maryPoppinsTote1.search(1) << endl;
	cout << "The number of twos in the tote is " << maryPoppinsTote1.search(2) << endl;
	cout << "The number of three in the tote is " << maryPoppinsTote1.search(3) << endl;
	itemdrawn = maryPoppinsTote1.reach();
	cout << "A " << itemdrawn << " was drawn from the tote." << endl << endl;
	cout << "The number of ones in the tote is " << maryPoppinsTote1.search(1) << endl;
	cout << "The number of twos in the tote is " << maryPoppinsTote1.search(2) << endl;
	cout << "The number of three in the tote is " << maryPoppinsTote1.search(3) << endl;
	cout << endl << endl;

	maryPoppinsTote1.place(1);
	maryPoppinsTote1.place(2);
	maryPoppinsTote1.place(3);

	cout << "Testing copy constructor on " << maryPoppinsTote1 << endl;
	MaryPoppinsTote maryPoppinsTote2(maryPoppinsTote1);
	cout << maryPoppinsTote2<<endl;
	maryPoppinsTote1.reach();
	maryPoppinsTote1.reach();
	cout << "maryPoppinsTote1 " << maryPoppinsTote1 << endl;
	cout << "maryPoppinsTote2 " << maryPoppinsTote2 << endl;
	maryPoppinsTote2.reach();
	cout << "maryPoppinsTote1 " << maryPoppinsTote1 << endl;
	cout << "maryPoppinsTote2 " << maryPoppinsTote2 << endl;


	cout << "Testing the ability to add an unlimited number of items." << endl;
	MaryPoppinsTote maryPoppinsTote3;
	for (int i = 0; i < 50; i++) {
		maryPoppinsTote3.place(i + 1);
	}
	cout << maryPoppinsTote3 << endl << endl;
	for (int i = 0; i < 50000; i++) {
		maryPoppinsTote3.place(i + 1);
	}

	cout << "Testing = operator on " << maryPoppinsTote1 << endl;
	maryPoppinsTote3 = maryPoppinsTote2 = maryPoppinsTote1;
	cout << maryPoppinsTote3 << endl << endl;
	maryPoppinsTote2.reach();
	cout << maryPoppinsTote2 << endl << endl;
	cout << maryPoppinsTote1 << endl << endl;

}

void emptyTesting(){
	MaryPoppinsTote maryPoppinsTote1;

	cout << "Testing search on " << maryPoppinsTote1 <<endl;
	cout << "The number of ones in the tote is " << maryPoppinsTote1.search(1) << endl;
	cout << endl << endl;

	cout << "Testing reach on " << maryPoppinsTote1 <<endl;
	try{
		int itemdrawn = maryPoppinsTote1.reach();
	}catch(...){
		cout << "reach handled empty";
	}
	cout << endl << endl;

	cout << "Testing copy constructor on " << maryPoppinsTote1 << endl;
	MaryPoppinsTote maryPoppinsTote2(maryPoppinsTote1);
	cout << maryPoppinsTote2<<endl;
	try{
		int itemdrawn = maryPoppinsTote2.reach();
	}catch(...){
		cout << "reach handled empty";
	}

	cout << "Testing = operator on " << maryPoppinsTote1 << endl;
	maryPoppinsTote2 = maryPoppinsTote1;
	cout << maryPoppinsTote2 << endl << endl;
	cout << maryPoppinsTote1 << endl << endl;

}

void moreTesting(){
	MaryPoppinsTote maryPoppinsTote1;
	maryPoppinsTote1.place(1);
	maryPoppinsTote1.place(2);
	maryPoppinsTote1.place(3);
	maryPoppinsTote1.place(1);
	maryPoppinsTote1.place(2);
	maryPoppinsTote1.place(3);
	maryPoppinsTote1.place(1);
	maryPoppinsTote1.place(2);
	maryPoppinsTote1.place(3);

	cout << "Testing search on " << maryPoppinsTote1 <<endl;
	cout << "The number of ones in the tote is " << maryPoppinsTote1.search(1) << endl;
	cout << "The number of twos in the tote is " << maryPoppinsTote1.search(2) << endl;
	cout << "The number of threes in the tote is " << maryPoppinsTote1.search(3) << endl;
	cout << "The number of fours in the tote is " << maryPoppinsTote1.search(4) << endl;
	cout << endl << endl;

	for(int i = 0; i < 10; i++){
		cout << "Testing reach on " << maryPoppinsTote1 <<endl;
		try{
			int itemdrawn = maryPoppinsTote1.reach();

			cout << "A " << itemdrawn << " was drawn from the tote." << endl << endl;
			cout << "The number of ones in the tote is " << maryPoppinsTote1.search(1) << endl;
			cout << "The number of twos in the tote is " << maryPoppinsTote1.search(2) << endl;
			cout << "The number of three in the tote is " << maryPoppinsTote1.search(3) << endl;
		}catch(...){
			cout << "reach handled empty";
		}
	}
	cout << endl << endl;

	cout << "Testing the ability to add an unlimited number of items." << endl;
	MaryPoppinsTote maryPoppinsTote3;
	for (int i = 0; i < 5000; i++) {
		maryPoppinsTote3.place(i + 1);
	}
	cout << maryPoppinsTote3 << endl << endl;

}
