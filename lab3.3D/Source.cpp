#include "TimeC.h"
#include "TimeO.h"
#include <iostream>

using namespace std;

int main() {
	TimeC t1, res;
	Triad tr1, tr2;

	cout << "t1 = "; cin >> t1;
	cout << t1 << endl;

	cout << "tr1 = "; cin >> tr1;
	TimeC t2(tr1);
	cout << "t2: " << t2 << endl;

	++t2;
	t2++;
	t2.incremSec();
	cout << "t2(increm) = " << t2 << endl;

	cout << "t2: " << t2;

	int n;
	cout << "(minute) n = "; cin >> n;
	res = t2 + n;
	cout << "t2 + n =" << res.getTriad().getMin() << endl;
	cout << "(second) n = "; cin >> n;
	res = t2 * n;
	cout << "t2 * n = " << res.getTriad().getSec() << endl;

	tr2 = t1.getTriad();
	cout << "tr2: " << endl;
	cout << "tr2: " << tr2 << endl;

	TimeO t3, res1;

	cout << "t3 = "; cin >> t3;
	cout << t3 << endl;

	cout << "tr1 = "; cin >> tr1;
	TimeO t4(tr1);
	cout << "t4: " << t4 << endl;

	++t4;
	t4++;
	t4.incremSec();
	cout << "t4(increm) = " << t4 << endl;

	cout << "t4: " << t4;

	cout << "(minute) n = "; cin >> n;
	res1 = t4 + n;
	cout << "t4 + n =" << res1.getTriad().getMin() << endl;
	cout << "(second) n = "; cin >> n;
	res1 = t4 * n;
	cout << "t4 * n = " << res1.getTriad().getSec() << endl;

	tr2 = t1.getTriad();
	cout << "tr2: " << endl;
	cout << "tr2: " << tr2 << endl;
}