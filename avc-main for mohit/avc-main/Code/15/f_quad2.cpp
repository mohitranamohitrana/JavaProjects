#include <iostream>
#include "E101.h"
#include <vector>

using namespace std;



void moveForward() {
	set_motors(1,30);
	set_motors(5,30);
	hardware_exchange();

}

void stop() {
	set_motors(5,48);
	set_motors(1,48);
    hardware_exchange();
}

void turnLeft(int speed) {
	set_motors(1,48 + speed);
	set_motors(5,48 + speed);
	hardware_exchange();
}

void turnRight(int speed) {
	set_motors(1,48 - speed);
	set_motors(5,48 - speed);
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
    int row = 120; 
    int no_line_count = 0; 	// count to check if line is not detected
    for (int i = 0; i < 500; i++) {
        take_picture();
        update_screen();

        int bpix = 0; // black pix count
        int col_bpix = 0; // column of black pix,

        for (int col = 0; col < 320; col++) { // loop for colm
            int red = get_pixel(row, col, 0); 
            int green = get_pixel(row, col, 1);
            int blue = get_pixel(row, col, 2);

            int brightness = (red + green + blue) / 3; //average brightness
            if (brightness < 60) { // if pix is black
                c++; 
                col_bpix += col; // column index for tot average calc
            }
        }

        if (bpix > 0) { // if one black pix
            int line_center = col_bpix / bpix;
            int error = line_center - 160; // calc error

            int turn_speed = 45 + (error / 10); // 
            turn_speed = std::max(40, std::min(turn_speed, 60)); 

            if (abs(error) < 10) {
                set_motors(1, 45);
                set_motors(5, 45);
            } else if (error > 0) {
                set_motors(1, 40);
                set_motors(5, turn_speed);  
            } else {
                set_motors(1, turn_speed);  
                set_motors(5, 40);
            }

            no_line_count = 0;  
        } else {
            no_line_count++;
            set_motors(1, 35); 
            set_motors(5, 35);
            if (no_line_count > 5) {
                stop();  
                sleep1(1000);  
                moveForward(); 
            }
        }

        hardware_exchange();
        sleep1(50);  
    }
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
  	quadrant2();
  	sleep1(3000);
  	stop();
  	
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

