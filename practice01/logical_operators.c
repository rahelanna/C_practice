#include <stdio.h>
#include <stdbool.h>


int main() {
    
    // logical operators = && (AND) checks if two conditions are true
            // = || (OR) checks if at least one condition os true
            // = ! (NOT) reverses the state of a condition
    
    float temp = 29;
    bool sunny = false;
    bool cloudy = false;
    
    if(temp >= 30 && sunny){
        printf("\nThe weater is good!");
    }
    else if(cloudy || temp < 20){
        printf("\nThe weater is bad!");
    }
    else if(temp < 30 && !sunny){
        printf("\nThe weater is bad and cloudy!");
    }
    
    
    return 0;
}