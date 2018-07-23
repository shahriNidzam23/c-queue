#include "Queue Project (24181).h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <Windows.h>
using namespace std;

Queue::Queue(){
	size = 5;
	q = new int[size];
	front = rear = 0;
	count = 0;
}

Queue::Queue(int n){
	size = n;
	q = new int[size];
	front = rear = 0;
	count = 0;
}

void Queue::enqueue(){
	//isArrived();
	int sec = 0;
    int mins = 0;
    //int arrive = rand() % 4 + 1;
    //cout << "Arrived in " << arrive << "Seconds" << endl;
    
    for(int item = 1; item <=5; item++){
	while(!(sec == 10)){
    	system("cls");
        if(sec == 60){
            ++mins;
            sec = 0;
        }
        //cout << mins << ":" << sec << endl;
//        cout << "Item: " << item << " Enqueue" << endl;
		q[rear] = item;
		cout << "Item: " << item << " Enqueue" << endl;
		rear = (rear + 1) % size;
		++count;
	    ++sec;
	    Sleep(1000);
    }
}
}

int Queue::dequeue(){
	int sec = 0;
    int mins = 0;
    int x;
    //int service = rand() % 4 + 1;
    
    if(!empty()){	
	while(!(sec == 5)){
    	system("cls");
        if(sec == 60){
            ++mins;
            sec = 0;
        }
        cout << mins << ":" << sec << endl;
        x = q[front];
        cout << "Item: " << x << " dequeue" << endl;
		front = (front + 1) % size;
		--count;
	    ++sec;
	    Sleep(1000);
    }
}

		
	return q[front];
}


//void Queue::isArrived(){
//	int sec = 0;
//    int mins = 0;
//    int arrive = rand() % 4 + 1;
//    cout << "Arrived in " << arrive << "Seconds" << endl;
//    
//    while(!(sec == arrive)){
//    	system("cls");
//        if(sec == 60){
//            ++mins;
//            sec = 0;
//        }
//        cout << mins << ":" << sec << endl;
//	    ++sec;
//	    Sleep(1000);
//    }
//}
//
//void Queue::isServed(){
//
//}

bool Queue::empty(){
	return(count == 0)? true:false;
}

int Queue::nowServing(){
	return q[front];
}
