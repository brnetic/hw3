#include "stack.h"
#include <iostream>

using namespace std;

int main(){

	Stack<int> a;
	a.push(1);
	a.push(2);
	a.pop();
	a.pop();
	cout<<a.size()<<endl;
	cout<<a.top()<<endl;
	return 0;
}