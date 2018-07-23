#include <iostream>
#include <ctime>
#include <Windows.h>
#include <thread>
#include "Queue Project (24181).cxx"

using namespace std;

int main(){
	Queue myQueue;
	
	thread first (myQueue.enqueue);
	thread second (myQueue.dequeue); 
	
	first.join();
	second.join();
}
