#include <iostream>
#include "E101.h"
#include <vector>

using namespace std;



void moveForward() {
	set_motors(5,30);
	set_motors(1,30);
	hardware_exchange();

}

void stop() {
	set_motors(5,48);
	//set_motors(4,48);
	//set_motors(3,48);
	set_motors(1,48);
    hardware_exchange();
}

void turnLeft(int speed) {
	set_motors(1,48 + speed);
	set_motors(2,48 + speed);
	hardware_exchange();
}

void turnRight(int speed) {
	set_motors(1,48 - speed);
	set_motors(2,48 - speed);
	hardware_exchange();
}

/*class Motor {
	Motor() {
		
	}
}

class Car {
	Car(Motor m1, Motor m2) {
		
	}
}*/

void quadrant2() {
	moveForward();
	vector<int> line;
	for(int col = 0; col < 320; col++){
		int intensity = (int)get_pixel(120, col, 3);
		if (intensity < 80) {
			line.push_back(1);
		} else {
			line.push_back(0);
		}
	}
	int subtract = line.size() / 2;
	int total = 0;
	for (int i = 0; i < 320; i++) {
		total += line[i] * (i - subtract);
	}
	if (total > 50) {
		turnLeft(15);
		sleep1(100);
	} else if (total < 50) {
		turnRight(15);
		sleep1(100);
	}
}

void quadrant3() {
	
}

int main()
{
	int err;
	cout<<" Hello"<<endl;
	err = init(0);
	cout<<"After init() error="<<err<<endl;
	
	char ip[12] = {'1','3','0','.','1','9','5','.','3','.','5','3'};
	char message[24] = {'P','l','e','a','s','e'};
	
	int connection = connect_to_server(ip,1024);
  
	if (connection == 0) {
		cout<<"Connected"<<endl;
	}
	
	send_to_server(message);
	receive_from_server(message);
	send_to_server(message);
	open_screen_stream();
  	
  	moveForward();
  	sleep1(3000);
  	stop();
  	
  	int count = 0;
  	while(count < 500) {
		take_picture();
		update_screen();
		if (true) {
			quadrant2();
		} else if (true) {
			//quadrant 3
		} else {
			//quadrant 4
		}
	}
  	
  /*int count = 0;
  while(count < 500)
  {
//	 set_motors(1,31);
//	 set_motors(2,38);
	 //set_motors(4,44);
	 set_motors(1,31);
     set_motors(2,31);
     set_motors(3,31);
	 set_motors(4,31);
     set_motors(5,31);
	 hardware_exchange();
	 take_picture();
	 update_screen();
	 sleep1(1000);
	 set_motors(1,48);
     set_motors(2,48);
     set_motors(3,48);
	 set_motors(4,48);
     set_motors(5,48);
	 hardware_exchange();
	 sleep1(1000);
	 set_motors(1,61);
     set_motors(2,61);
     set_motors(3,61);
	 set_motors(4,61);
     set_motors(5,61);
	 hardware_exchange();
	 sleep1(1000);
	 
	 //char fname[5]={'r','r','r','r','r'};
	 //save_picture(fname);
	 //display_picture(0,200000);
	 	
	 //sleep1(1,200); 
         std::cout<<count<<std::endl;
       count++;
    }*/
    //save_picture("file1");
    close_screen_stream();
	stoph();
	return 0;
}

