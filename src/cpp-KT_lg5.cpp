//============================================================================
// Name        : cpp-KT_lg5.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : KT Übungsblatt LG5 - Objektorientierte Programmierung mit C++
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

//============================================================================
// Aufgabe 1
//============================================================================

// 1.1 - Arten von Anweisungen
/*
	- Einzelne Anweisung
	- Anweisungsblock
	- Verzweigung
	- Initialisierung
	- Schleifen
 */

// 1.2
/// @brief	try out different types of statements
///
///
void anweisungen() {
	int i;					// declaration statement

	i = 0;					// expression statement
	;					// empty statement - USE WITH CAUTION!!!!

	{}					// compound statement or block statement

	//
	// jump statements
	//
	/*
	 * break;
	 * continue;
	 * return
	 * goto;
	 */

	//
	// try blocks
	//
	/*
	 * try
	 * catch
	 */

	//
	// atomic and synchronized blocks
	//
	/*
	 * ???
	 */

	//
	// selection statements
	//
	cout << "if-Verzweigung mit einer Anweisung.\n";
	if (i == 0)				// if branch with one statement
		i = 1;
	else if (i > 0)				// else if
		i = 1;
	else					// else
		i = 1;

	cout << "switch-Verzweigung mit mehreren Fällen und einzelnen Anweisungen.\n";
		switch (i) {				// switch statement with multiple cases and single statements
		case -1:
			cout << "i == -1\n";
			break;

		case 0:
			cout << "i == 0\n";
			break;

		case 1:
			cout << "i == 1\n";
			break;

		default:
			cout << "i == " << i << endl;
			break;
		}

	//
	// iteration statements
	//
	cout << "for-Schleifen mit mehreren Anweisungen.\n";
	for (i = 2; i < 3; ++i)	{		// for loop with multiple statements
		cout << "i -> " << i;
		cout << "\n";
	}


	cout << "while-Schleife mit \n";
	while (i > 0) 				// while loop with one statement
		cout << "i -> " << --i << endl;


	cout << "do-while loop with set of statements\n";
	i = 10;
	do {					// do-while loop with set of statements
		--i;
		cout << "i -> " << i << endl;

	} while	(i != 0);


	cout << "for-each loop with a single statement\n";
	vector<int> int_vector = {0, 1, 2, 3, 4, 99, 88, 734, 0};

	for (auto vector_item : int_vector) {	// for-each loop with a single statement
		cout << vector_item << endl;
	}
}

// 1.3
/// @brief	print out the numbers 1 to 10
///
/// @param	type of loop
///		0 = for loop
///		1 = for-each loop
///		2 = while loop
///		3 = do-while loop
///
///
void diff_loops(int loop_switch) {

	switch (loop_switch) {
	case 0:	{				// for loop from 1 to 10
		for (int i = 1; i <= 10; ++i)
			cout << "for loop: " << i << endl;
		break;
	}

	case 1:	{				// for-each loop from 1 to 10
		vector<int> int_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		for (int i : int_vector)
			cout << "for-each loop: " << i << endl;
		break;
	}

	case 2:	{			// while loop from 1 to 10
		int i = 1;
		while (i <= 10)
			cout << "while loop: " << i++ << endl;
		break;
	}

	case 3:	{				// do-while loop from 1 to 10
		int i = 1;
		do {
			cout << "do-while loop: " << i++ << endl;
		} while (i <= 10);
		break;
	}

	default:
		break;
	}
}

// 2.1
/// @brief	return true if a integer is a prime number
///
/// @param	intger to be checked
///
///
bool isPrime (int number) {

	if (number <= 1) 			// exclude 0 and 1, which are not prime numbers and would mess up the for-loop
		return false;

	for (int i = 2; i < number; ++i) {	// loop through every natural number, starting at 2, till given number -1
						// because a prime number can be divided by 1 or itself

		if (number % i == 0)		// check modulo of the given number and iterating i if it returns 0 (can be divided)
			return false;
	}
	return true;				// its a prime number
}

int main() {

	//============================================================================
	// Aufgabe 1.2
	//============================================================================
	anweisungen();

	//============================================================================
	// Aufgabe 1.3
	//============================================================================
	diff_loops (0);				// for loop
	diff_loops (1);				// for-each loop
	diff_loops (2);				// while loop
	diff_loops (3);				// do-while loop

	//============================================================================
	// Aufgabe 2.2
	//============================================================================
	int eingabe;
	do {
		cout << "Überprüfung ob Primzahl (0 zum Beenden): ";
		cin >> eingabe;

		if (eingabe == 0)
			break;

		isPrime(eingabe) ? 	cout << eingabe << " ist eine Primzahl.\n":
					cout << eingabe << " ist keine Primzahl.\n";

	} while (true);				// we could check for user input "0" here, but we would get a prime number check also


	//============================================================================
	// Aufgabe 3
	//============================================================================
	// 3.2
	// There is no output of any kind. Empty statements after if clause.

	// 3.3
	//
	int i = 5;
	if (i > 2) {
		cout << "i ist größer als 2.\n";
	}
	else if (i < 2) {
		cout << "i ist kleiner als 2.\n";
	}
	else {
		cout << "i ist gleich 2.\n";
	}

	// 3.4
	// Empty statements after if clause.

	return 0;
}
