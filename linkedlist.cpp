#include"LINKEDLIST.h"
int main(){
	LINKEDLIST list;
	list.insert(10);
	list.insert(20);
	list.insert(30);
	list.display();
	list.remove(20);
	list.display();
}
