//Zach Brown
//Date: 7/22/2024
//CS2 Operator Overloading

#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

void testTimeAssignment();
void testTimeSimplify();
void testTimeAddition();
void testTimeSubtraction();
void testTimePlusPlus();
void testTimeMinusMinus();
//void testTimeRelationalOperators();
void  testTimeExtractionOperator();
void testTimeIntegerConversionFunction();

int main() {

	//testTimeAssignment();
	//testTimeSimplify();

	//testTimeAddition();

	//testTimeSubtraction();

	//testTimePlusPlus();

	//testTimeExtractionOperator();

	testTimeIntegerConversionFunction();
}

void testTimeAssignment() {
	Time now(10,22);
	Time classStart(9, 40);

	cout << now.getHours() << ":" << now.getMinutes() << endl;


	now = classStart;

	cout << now.getHours() << ":" << now.getMinutes() << endl;
	

}

void testTimeSimplify() {
	Time myTime(36, 61, 61);
	Time myOtherTime(-1, -1, -1);

	cout << myTime.getDays() << " " << myTime.getHours() << ":" << myTime.getMinutes() << ":"
		<< myTime.getSeconds() << endl;

	myTime.simplify();


	cout << myTime.getDays() << " " << myTime.getHours() << ":" << myTime.getMinutes() << ":"
		<< myTime.getSeconds() << endl;

	cout << myOtherTime.getDays() << " " << myOtherTime.getHours() << ":" << myOtherTime.getMinutes() << ":"
		<< myOtherTime.getSeconds() << endl;

	myOtherTime.simplify();


	cout << myOtherTime.getDays() << " " << myOtherTime.getHours() << ":" << myOtherTime.getMinutes() << ":"
		<< myOtherTime.getSeconds() << endl;
}

void testTimeAddition() {
	Time now(11, 05);
	Time dinner(18, 30);
	Time later = now + dinner;

	cout << later.getDays() << " " << later.getHours() << ":" << later.getMinutes() << ":" << later.getSeconds() << endl;
}

void testTimeSubtraction() {
	Time now(11, 05);
	Time dinner(18, 30);
	Time later = dinner - now;

	cout << later.getDays() << " " << later.getHours() << ":" << later.getMinutes() << ":" << later.getSeconds() << endl;
}

void testTimePlusPlus() {
	Time now(11, 24, 59);
	for (int i = 0; i < 100; i++) {
		now++;
		cout << now.getDays() << " " << now.getHours() << ":" << now.getMinutes()
			<< ":" << now.getSeconds() << endl;
		
	}
	now++;
}

void testTimeMinusMinus() {
	Time now(11, 24, 59);
	for (int i = 0; i < 100; i++) {
		now--;
		cout << now.getDays() << " " << now.getHours() << ":" << now.getMinutes()
			<< ":" << now.getSeconds() << endl;
	}
	now++;
}

//void testTimeRelationalOperators() {
	//Time(11, 59);

//}

void  testTimeExtractionOperator() {
	Time now(0, 12, 17, 32);
	cout << now;
}

void testTimeIntegerConversionFunction() {
	Time tomorrowClass(1, 9, 40, 0);
	cout << static_cast<int>(tomorrowClass) << endl;
	cout << 1+ tomorrowClass;
}