// Katie Timmerman
// Assignment 1
#include <stdlib.h> //srad, rand
#include <iostream>
#include "MaryPoppinsTote.cpp"

using namespace std;

void testInt();
void testDouble();
void testChar();
void basicTesting();
void moreTesting();
void emptyTesting();

int main() {
 	testInt();
	testDouble();
	testChar();
	return 0;

}

void testInt(){
	basicTesting();
	emptyTesting();
	moreTesting();

}

void basicTesting(){
	MaryPoppinsTote<int> maryPoppinsTote1;
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
	MaryPoppinsTote<int> maryPoppinsTote2(maryPoppinsTote1);
	cout << maryPoppinsTote2<<endl;
	maryPoppinsTote1.reach();
	maryPoppinsTote1.reach();
	cout << "maryPoppinsTote1 " << maryPoppinsTote1 << endl;
	cout << "maryPoppinsTote2 " << maryPoppinsTote2 << endl;
	maryPoppinsTote2.reach();
	cout << "maryPoppinsTote1 " << maryPoppinsTote1 << endl;
	cout << "maryPoppinsTote2 " << maryPoppinsTote2 << endl;


	cout << "Testing the ability to add an unlimited number of items." << endl;
	MaryPoppinsTote<int> maryPoppinsTote3;
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
	MaryPoppinsTote<int> maryPoppinsTote1;

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
	MaryPoppinsTote<int> maryPoppinsTote2(maryPoppinsTote1);
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
	MaryPoppinsTote<int> maryPoppinsTote1;
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
	MaryPoppinsTote<int> maryPoppinsTote3;
	for (int i = 0; i < 5000; i++) {
		maryPoppinsTote3.place(i + 1);
	}
	cout << maryPoppinsTote3 << endl << endl;

}


void testDouble(){
	MaryPoppinsTote<double> maryPoppinsTote1;
	maryPoppinsTote1.place(1.5);
	maryPoppinsTote1.place(2.6);
	maryPoppinsTote1.place(3.7);

	cout << maryPoppinsTote1 << endl << endl;

	MaryPoppinsTote<double> maryPoppinsTote2(maryPoppinsTote1);

	cout << "The number of 1.5's in the tote is " << maryPoppinsTote1.search(1.5) << endl;
	cout << "The number of 2.6's in the tote is " << maryPoppinsTote1.search(2.6) << endl;
	cout << "The number of 3.7's in the tote is " << maryPoppinsTote1.search(3.7) << endl;
	cout << endl;

	double itemdrawn = maryPoppinsTote1.reach();
	cout << "A " << itemdrawn << " was drawn from the tote." << endl << endl;

	cout << "The number of 1.5's in the tote is " << maryPoppinsTote1.search(1.5) << endl;
	cout << "The number of 2.6's in the tote is " << maryPoppinsTote1.search(2.6) << endl;
	cout << "The number of 3.7's in the tote is " << maryPoppinsTote1.search(3.7) << endl;
	cout << endl;

	cout << maryPoppinsTote1 << endl;
	cout << maryPoppinsTote2 << endl << endl;


	// Testing the ability to add an "unlimited" number of items
	MaryPoppinsTote<double> maryPoppinsTote3;
	for (int i = 0; i < 301; i++) {
		maryPoppinsTote3.place(i * 100 / 3.33);
	}
	cout << maryPoppinsTote3 << endl << endl;

	maryPoppinsTote3 = maryPoppinsTote2 = maryPoppinsTote1;
	cout << maryPoppinsTote3 << endl << endl;
}

void testChar(){
	MaryPoppinsTote<char> maryPoppinsTote1;
	maryPoppinsTote1.place('a');
	maryPoppinsTote1.place('b');
	maryPoppinsTote1.place('c');

	cout << maryPoppinsTote1 << endl << endl;

	MaryPoppinsTote<char> maryPoppinsTote2(maryPoppinsTote1);

	cout << "The number of a's in the tote is " << maryPoppinsTote1.search('a') << endl;
	cout << "The number of b's in the tote is " << maryPoppinsTote1.search('b') << endl;
	cout << "The number of c's in the tote is " << maryPoppinsTote1.search('c') << endl;
	cout << endl;

	char itemdrawn = maryPoppinsTote1.reach();
	cout << "A " << itemdrawn << " was drawn from the tote." << endl << endl;

	cout << "The number of a's in the tote is " << maryPoppinsTote1.search('a') << endl;
	cout << "The number of b's in the tote is " << maryPoppinsTote1.search('b') << endl;
	cout << "The number of c's in the tote is " << maryPoppinsTote1.search('c') << endl;
	cout << endl;

	cout << maryPoppinsTote1 << endl;
	cout << maryPoppinsTote2 << endl << endl;


	// Testing the ability to add an "unlimited" number of items
	MaryPoppinsTote<char> maryPoppinsTote3;
	for (int i = 0; i < 301; i++) {
		maryPoppinsTote3.place(rand() % 26 + 97);
	}
	cout << maryPoppinsTote3 << endl << endl;

	maryPoppinsTote3 = maryPoppinsTote2 = maryPoppinsTote1;
	cout << maryPoppinsTote3 << endl << endl;
}
