/** LESSON 7 - ARDUINO PROGRAMMING 

THE GOALS HERE ARE:
  *understanding what Arrays are
  *understanding a for loop
  *understanding a if/else statement

AFTER PRACTICE, YOU SHOULD BE ABLE TO:
  *declare an array and attribute a set o values to it
  *iterate over the elements of this array with a for loop
  *use arithmetic and logic operations in if/else statements


ARRAYS:
    These are sets of variables (of a same type) with a given 
    name. You can access a specific variable by its index
    (starts at 0).
    
    e.g.: int frequencies[] = {20,200,2000,20000}
              where frequencies[0] = 20
                    frequencies[1] = 200
                    frequencies[2] = 2000
                    frequencies[3] = 20000

FOR LOOPS:
    In many situations, we might want to execute the same
    code many times with slight differences. FOR loops are
    a structure you can use to repeat a set of instructions
    for a given number of times.
    
    Its syntax: 
    for(initialize a variable used to control the number
    of repetitions;condition;code to execute after one cycle)
    
    i.e. for(int i = 0; i < 10; i++){
            //lines of code in here
            //will be executed
            //10 times before exiting
            //the for loop
         } 

IF/ELSE OPERATORS:
    There will be many cases in which you
    might want to CONDITION the executing of 
    some lines of code (e.g. when a button is
    pressed, after X cycles, if a number is odd,
    if it is divisible by Y, when so much time 
    is elapsed, etc.). For this, we use the 
    IF/ELSE operators.
    Syntax:
      if(CONDITION){
        //lines of code 
        //executed if statement is true
      }else{
        //lines of code 
        //executed if statement is false
      }

MATHEMATICAL & LOGICAL OPERATORS:
    to build the statements to be checked in
    the IF/ELSE structures, you will want to use
    some operations to build the (CONDITION) evaluated.
    MATHEMATICAL:
    +   adition
    -   subtraction
    /   division
    *   multiplication
    **  exponentiation
    %   MOD (the remainder of an int division)
    LOGICAL:
    ==  equal to 
    !=  not equal to
    >   greater than
    <   less than
    >=  greater than or equal to
    <=  less than or equal to 
    &&  AND
    ||  OR

**/

//FOR THIS SETUP:
// in your breadboard:
// have two LEDs connected from pins 9/8 to GND
// directly on Arduino:
// have a buzzer connected from pin 11 to GND
int pins[] = {11,9,8};
int counter = 0;

void setup() {
  // put your setup code here, to run once:

  for(int i = 0; i < 3; i++){
    pinMode(pins[i],OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(counter%2 == 0){
    //here we use the '%' or MOD function
    //which is the remainder of 
    //an integer division
    //the condition should read: 
    //"if the remainder from the division
    //of counter/2 is equal to 0" 
    // or simply: 
    //"if counter MOD 2 is equal to zero"
    //execute code if TRUE
    digitalWrite(pins[1],HIGH);
    digitalWrite(pins[2],LOW);
    tone(pins[0],5000,300);
  }else{
    //execute code if FALSE
    digitalWrite(pins[2],HIGH);
    digitalWrite(pins[1],LOW);
    tone(pins[0],200,200);
    
  }
  counter++; //counter = counter + 1;  <-----------THIS COUNTER IS GROWING INDEFINATELY
  
  if(counter==32000){
    counter = 0;
  }
  
  delay(50); 
  
}
