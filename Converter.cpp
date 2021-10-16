#include <stdio.h>
#include <math.h>
int main()
{
    int total_cm;
    float m, km;
    int robot_moves_number;
    //input the number of robot moves from user
    printf("Enter a number of moves that the robot does: ");
    scanf("%d", &robot_moves_number);  

    
    //prints the number of robot moves
    printf("Number of moves = %d\n",robot_moves_number);

    
    //prints the centimeter from distance A to B (1 move * 80cm)
    total_cm = robot_moves_number * 80;
    printf("Number of cm = %d \n",total_cm);
    //convert centimeter into meter and kilometer
    m = total_cm / 100.0;
    km = total_cm / 100000.0;
    printf("Length in Meter = %.2f m \n", m);
    printf("Length in Kilometer = %.2f km \n", km);
    //part 2
    int kilometer = floor(total_cm / 100000); //amount of "full" kilometers
    int rkilometer = total_cm % 100000; // rest
    int meter = floor(rkilometer / 100); //amount of "full" meters
    int cm = rkilometer % 100; // rest
    printf("In a single conversion is equal to: Km=%d", kilometer);
    printf(" m=%d", meter);
    printf(" and cm=%d.", cm);
    return 0;
}
