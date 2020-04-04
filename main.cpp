#include <iostream>
#include <array>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 integer
 char
 float
 double

 void

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int counter = 0;
    int age = 18;
    int max = 100;

    char null = 0; // interpreted as ASCII
    char space = 32;
    char del = 127;

    float automation = 0.f; // roughly 6 numbers
    float sig = 0.f;
    float opacity = 0.f;

    double pseodoPi = 3.145678; // ca. 15 digits after 
    double myAge = 28.456789456789456;
    double myMumsAge = 56.123984761234;
    
    ignoreUnused(number, counter, age, max, null, space, del, automation, sig, opacity, pseodoPi, myAge, myMumsAge); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

void buyBeer (int bottleAmount = 100, std::string brand = "theBestBeer" )
{
    ignoreUnused(bottleAmount, brand);
}

/*
 2)
 */
void doStuff(int location = 1, bool actionType = true)
{
    ignoreUnused(location, actionType);
}


/*
 3)
 */
void parseString(std::string myString, int parseStyle)
{
    ignoreUnused(myString, parseStyle);
}

/*
 4)
 */

float getDepth(float volume, float width)
{
    ignoreUnused(volume, width);
    return {};
}

/*
 5)
 */
float calculateDifference(float x, float y)
{
    ignoreUnused(x, y);
    return {};
}

/*
 6)
 */
void enyojSaturdayMorning(int drinkType, float drinkAmount)
{
    ignoreUnused(drinkType, drinkAmount);
}

/*
 7)
 */
void squeezeBanana(float pressure)
{
    ignoreUnused(pressure);
}

/*
 8)
 */
bool getFlagToSample(float refValue)
{
    ignoreUnused(refValue);
    return{};
}


/*
 9)
 */
void throwNet(float netWidth, float netHight, float netThickness)
{
    ignoreUnused(netWidth, netHight, netThickness);
}

/*
 10)
 */
void rentALaptop(int rentalDurationInMonth, int laptopType)
{
    ignoreUnused(rentalDurationInMonth, laptopType);
}

//===========================================================================================
//===========================================================================================

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    /*
    2)
    */
    doStuff(2, true);


    /*
    3)
    */
    parseString("yooo", 3);

    /*
    4)
    */
    auto depth = getDepth(0.4f, 0.3f);

    /*
    5)
    */
    float diff = calculateDifference(5, 3);

    /*
    6)
    */
    enyojSaturdayMorning(2, 0.5);
    
    /*
    7)
    */
    squeezeBanana(0.9f);
    
    /*
    8)
    */
    auto flag = getFlagToSample(0.2f);

    /*
    9)
    */
    throwNet(0.3f, 0.4f, 0.5f);

    /*
    10)
    */
    rentALaptop(2, 3);
    
    ignoreUnused(carRented, depth, diff, flag);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
