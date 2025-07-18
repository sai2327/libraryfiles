#include "STACK.h"
using namespace std;

int main() {
	STACK st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.display();
	st.pop();
	st.display();
	cout << "Top element: " << st.peek() << endl;
	return 0;
}

