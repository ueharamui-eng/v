#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>
#include <iomanip> // -> for banking program
//TODO: variables and basic data types
void main()
{
    //integer ( whole number)
    int age = 21;
    int year = 2023;
    int days = 7;
    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;
    //single character
    char grade = 'A';
    char initial = 'c';
    char currency = '$';
    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forsale = true;
    // string (objects that represents a sequence of text)
    std::string name = "bro";
    std::string day = "friday";
    std::string food = "pizza";
    std::string address = "123 fake st.";
    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age;
    return ;
}
//TODO: const
void main()
{
   const double pi = 3.14159;
   double radius = 10;
   double circumference  = 2*pi*radius;
   std::cout << circumference << "cm";
   return ;
}
//TODO: namespaces (share name)
namespace first
{
int x = 1;
}
namespace second
{
    int x =2;
}
void main()
{
    using namespace first;
 int x = 0;
 std::cout << first::x;
 return ;
}
//TODO: typedef and type aliases (recom use using)
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
void main()
{
    text_t firstname = "bro";
    number_t age = 11;
    std::cout << firstname << '\n';
    std::cout << age << '/n';
    return ;
}
//TODO: arithmetic operators ( + - * / %)
void main()
{
    int students = 20;
    //students = students + 2;
    //students +=1;
    //students++;
    int remainder = students % 3;
    std::cout << students;
    return ;
}
//TODO: type conversion
void main()
{
 //implicit
 int x = 3.14;
 std::cout << x;
 //explicit=(int)x
 double x = (int)3.14;
 std::cout << x;
 //ex:
  int correct = 8;
  int question = 10;
  double score = correct/(double)question*100;
  std::cout << score << "%";
  return ;
}
//TODO: user input
//cout << (insertion operator)
//cin >> ( extraction operator)
void main()
{
    std::string name;
    int age;
    std::cout << "what your name?";
    std::getline(std::cin >>std::ws, name);//including space,  
    std::cout << "what your age?";
    std::cin >> age;
    std::cout<< "hello "<< name << '\n';
    std::cout<< "you are "<< age << "year old";
    return;
}
//TODO: math related function (there more math function)
void main ()
{
    double x=3;
    double y=4;
    double z;
    //z=std::max(x, y);
    //z=std::min(....);
    //z=pow(2, 4);
    //z=sqrt(9);
    //z=abs(-3);
    //z=round(x);
    //z=ceil(x);
    //z=floor(x);
}
//TODO: hypotenuse calculator practice program
void main()
{
    double a;
    double b;
    double c;
    std::cout << "enter side A: ";
    std::cin >> a;
    std::cout << "enter side B: ";
    std::cin >>b;
    c=sqrt(pow(a, 2)+pow(b, 2));
    std::cout << "side C; ";
    return;
}
//TODO: if statement
void main()
{
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    if (age>=100)
    {
        std::cout << "you are too old to enter this site!";
    }
    else if (age>=18)
    {
        std::cout<<"welcome to the site!";
    }
    else if (age<0)
    {
        std::cout << "you haven't been born yet!";
    }
    else{
     std::cout<< "you are not old enough to enter!";
    }
    return ;
    
}
//TODO: switches 
void main()
{
int month;
std::cout << "enter the month: ";
std::cin >> month;
switch (month)
{
case 1:
std::cout << " it is january";
break;
case 2:
std::cout << " it is february";
break;
case 3:
std::cout << " it is march";
break;
case 4:
std::cout << " it is april";
break;
case 5:
std::cout << " it is may";
break;
case 6:
std::cout << " it is june";
break;
case 7:
std::cout << " it is july";
break;
case 8:
std::cout << " it is August";
break;
case 9:
std::cout << " it is september";
break;
case 10:
std::cout << " it is october";
break;
case 11:
std::cout << " it is november";
break;
case 12:
std::cout << " it is december";
break;
default:
std::cout << "please enter number 1-12";
return ;
 } 
}
//TODO: console calculator program
void main()
{
    char op;
    double num1;
    double num2;
    double result;
    std::cout << "**************** CALCULATOR *******************\n";
    std:: cout << "enter either (+ - * /): ";
    std:: cin >> op;
    std::cout << "enter num1: ";
    std::cin>> num1;
    std::cout << "enter num2: ";
    std::cin >> num2;
    switch (op)
    {
       case '+':
        result = num1 + num2;
        std::cout<< "result: "<<result<<'\n';
        break;
       case '-':
        result = num1 - num2;
        std::cout<< "result: "<<result<<'\n';
        break;
       case '*':
        result = num1 * num2;
        std::cout<< "result: "<<result<<'\n';
        break;
       case '/':
        result = num1 / num2;
        std::cout<< "result: "<<result<<'\n';
        break;
    
    default:
    std::cout<< "that wasn't a valid response\n";
        break;
    }
    std::cout<<"****************************************";
    return ;
}
//TODO: ternary operator (short if statement)
void main()
{
    //int grade = 50;
    //grade >=60 ? std::cout << "you pass!" : std::cout << " you fail!";
    
    //int number = 9;
    //number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = false;
    //hungry ? std::cout<< "you are hungry" : std::cout<< "you are full";
    std::cout <<(hungry) ? "you are hungry" : "you are full";
}
//TODO: logical operators
void main()
{
    // && = check if two condition are true
    // || = check if at least one of two condition is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny=true;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    if(temp>0 && temp < 30)
    {
        std::cout<< "The temperature is good!";
    }  
    else
    {
        std::cout << "the temperature is bad!";
    }  
    if (sunny)
    {
        std::cout << "it is sunny outside";
    }
    else
    {
        std::cout << "it is cloudy outside";
    }
    
    return ;
}
//TODO: temperature conversion program
void main()
{
    double temp;
    char unit;
    std::cout << "****************temperature conversion *******************\n";
    std::cout << "F = fahrenheit";
    std::cout << "C = celsius";
    std::cout << "what unit would you like to convert to: ";
    std::cin >> unit;
    if (unit== 'F' || unit == 'f')
    {
        std::cout << "enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8*temp)+32.0;
        std::cout << "the temperature is: "<< temp << "C\n";
    } 
    else if (unit=='C' || unit=='c')
    {
        std::cout<<"enter the temperature in fahrenheit";
        std::cin>> temp;
        temp = (temp-32.0)/1.8;
        std::cout << "the temperature is: "<< temp << "F\n";
    }
    else
    {
                std::cout << "ERROR $)$)$";
    }
    std::cout << "**********************************************";
    return ;
}
//TODO: useful string method
void main()
{
    std::string name;
    std::cout <<"enter your name: ";
    // method 1
    if (name.length()>12)
    {
        std::cout <<"your name can't be over 12 character";
    }
    else
    {
        std::cout <<"welcome"<< name;
    }
    // method 2
    std::getline(std::cin, name);
    if(name.empty())
    {
        std::cout<<"you didn't enter your name";
    }
    else
    {
        std::cout<< "hello "<< name;
    }
    //method 3 -> clear 
    name.clear();
    std::cout<< "hello "<< name;
    //method 4 -> link
    name.append("@gmail.com");
    std::cout <<" your user name: "<< name;
    //method 5 -> list
    std::cout << name.at(0);
    //method 6 -> insert
    name.insert(0, "@");
    std::cout << name;
    //method 7 -> find
    std::cout << name.find('b');
    //method 8 -> erase
    name.erase(0, 3);
    std::cout << name;
    return;
}
//TODO: while loops
void main()
{
    std::string name;
    //infinite loop
    //while(1==1)
    //std::cout << "help am stuck in a infinite loop";
    while(name.empty())
    {
     std::cout << "enter your name: ";
     std::getline(std::cin, name);   
    }
    std::cout << "hello "<< name;
    return;
}
//TODO: do while loops
void main()
{
    int number;
    do
    {
        std::cout << "enter a positive #: ";
        std::cin >> number;
    }while (number < 0);
        std::cout << "the # is: " << number;
        return;
}
//TODO: For loops
void main()
{
    for (int i = 10; i >=0; i++)
        std::cout << i << '\n';
    {
        std::cout << "HAPPY NEW YEAR!\n";
    }
        return;
}
//TODO: break & continue
void main()
{
 for(int i = 1; i <= 20; i++)
 {
    if (i == 13)
    {
        break;
        //continue; skip the 13 
        
    }
    std::cout << i << '\n';
    
 }
    return;
}
//TODO: nested loops
void main()
{
        int rows;
        int columns;
        char symbol;
        std::cout << "how many rows?: ";
        std::cin >> rows;
        std::cout << "how many columns?: ";
        std::cin >> columns;
        std::cout << "enter a symbol to use: ";
        std::cin >> symbol; 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; i++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';

    }
    return;
}
//TODO: random number generator (include ctime)
void main()
{
    srand(time(NULL));
    int num = (rand() % 6)+1; //-> add 1 becaus it start from 0
    std::cout << num;
    return;
}
//TODO: random event generator
void main()
{
    srand(time(0));
    int randnum = rand() % 5 + 1;
    switch (randnum)
    {
    case 1:
        std::cout << "random event 1";
        break;
        case 2:
        std::cout << "random event 2";
        break;
        case 3:
        std::cout << "random event 3";
        break;
        case 4:
        std::cout << "random event 4";
        break;
        case 5:
        std::cout << "random event 5";
        break;
    }
    return;
}
//TODO: number guessing game
void main()
{
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num=(rand()) % 100 +1 ;
    std::cout<<"********************NUMBER GUESSING GAME**********************\n";
    do
    {
    std::cout << "enter a guess between (1-100): ";
    std::cin>> guess;
    tries++;
    if (guess>num)
    {
        std::cout<< "Too high!";
    }
    else if(guess<num)
    {
        std::cout<<"Too low!";
    }
    else(guess=num);
    {
        std::cout<< "CORRECT! " << "number of tried: " << tries;
    }
    } while (guess!=num);
    {
    
    }
    return;
}
//TODO: user defined function
void happybirthday(std::string name, int age){
        std::cout << "happy birthday to " << name << " You are "<< age <<'\n';
          std::cout << "happy birthday to " << name << " You are "<< age << '\n';
            std::cout << "happy birthday to " << name << " You are "<< age << '\n';
              std::cout << "happy birthday to " << name << " You are "<< age << '\n';

}
void main(){
    std::string name = "BRo";
    int age = 21;
    happybirthday(name, age);

    return;
}
//TODO: return keyword = return a value to the spot where you called the encompassing function
double square(double length);
double cube(double length);
void main(){
    double length=5.0;
    double area = square(length);
    double volume = cube(length);
    std::cout << "area: "<< area << "cm^2\n";
    std::cout << "volume: "<< volume << "cm\n^3";
    return;
}
double square(double length){
    double result= length*length;
    return result;
}
double cube(double length){
    double result= length*length*length;
    return result;
}
//TODO: overloaded function
void bakepizza(){
    std::cout <<"here is your pizza!";
}
    void bakepizza(std::string topping1){
    std::cout << "here is your "<< topping1 << "pizza!";
    }
    void bakepizza(std::string topping1, std::string topping2){
    std::cout << "here is your " << topping1 << "and "<< topping2 << "pizza!";
}
void maim(){
    bakepizza("cheese","pepper");
    return;
}
//TODO: variable scope
    //local variables = declared inside a function or block {}
    //global variables = declared outside of all function
 int mynum = 3;
void printNum(){
        int mynum = 2;
        std::cout << ::mynum<< '\n';
    }
void main(){
    int mynum =1;
    std::cout << ::mynum<< '\n';
    printNum();

    return;

}
//TODO: banking practice program
void showbalance(double balance);
double deposit();
double withdraw(double balance);
void main(){
    double balance = 123.01;
    int choice = 0;
    do {
    std::cout<< "******************************\n";
    std::cout<< "enter your choice:\n";
    std::cout<< "******************************\n";
    std::cout<< "1. show balance\n";
    std::cout<<"2. deposit money\n";
    std::cout<<"3. withdraw money\n";
    std::cout<<"4. exit";
    std::cin >> choice;
    std::cin.clear(); //-> this 2 line down here is help clear those invalid world make our loop break
    fflush(stdin);
    switch (choice)
    {
    case 1: showbalance(balance);
        break;
    case 2: balance+= deposit(); //balance=balance+deposit()
            showbalance(balance);
        break;
    case 3: balance-= withdraw(balance);
            showbalance(balance);
        break;
    case 4:  std::cout<< "thank for visiting\n";
        break;
    default:std::cout<<"invalid choice";
        break;
    }
}while(choice != 4);
return;
}
void showbalance(double balance){
        std::cout<< "your balance is: $" <<std::setprecision(2)<<std::fixed<< balance << '\n';
}
double deposit(){
    double amount = 0;
    std::cout << "enter amount to be deposited: \n";
    std::cin >> amount;
    if(amount>0){
        return amount;
    }
    else {
        std::cout<<"that not a valid amount \n";
    }
}
double withdraw(double balance){
    double amount = 0;
    std::cout<< "enter amount to withdrawn: \n";
    std::cin>> amount;
    if(amount > balance){
        std::cout<< "insufficient funds\n";
    }
    else if(amount<0){
        std::cout<< "that not a valid amount\n";
        return 0;
    } 
    else{
        return amount;
    }
}
//TODO: rock paper scissors game
char getplayerchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);
void main(){
    char player;
    char computer;
    player=getplayerchoice();
    std::cout<<"your choice: ";
    showchoice(player);
    computer=getcomputerchoice();
    showchoice(computer);

    return;
}
char getplayerchoice(){
    char player;
    std::cout<< "rock paper scissors game!\n";
    do {
    std::cout<< "make your choice: \n";
    std::cout<<"rock\n";
    std::cout<<"paper\n";
    std::cout<<"scissors\n";
    std::cin>> player;
    }while(player!='rock'&&player!='paper'&&player!='scissors');
    return player;
}
char getcomputerchoice(){
    srand(time(0));
    int num= rand()%3+1;
    switch (num)
    {
    case 1:
        return 'rock';
    case 2:
        return 'paper';
    case 3:
        return 'scissors';
    }
    return 0;

}
void showchoice(char choice){
    switch (choice)
    {
    case 'rock':
        std::cout<<"rock\n";
        break;
    case 'paper':
        std::cout<<"paper\n";
        break;
    case 'scissors':
        std::cout<<"scissors\n";
        break;
    }
}
void choosewinner(char player, char computer){
    switch (player)
    {
    case 'rock':
    if (computer=='rock'){
        std::cout<<"It's a tie!\n";
    }
    else if(computer=='paper'){
        std::cout<<"you lose!\n";
    }
    else{
        std::cout<<"you win!\n";
    }
    break;
    case 'paper':
    if (computer=='paper'){
        std::cout<<"It's a tie!\n";
    }
    else if(computer=='scissors'){
        std::cout<<"you lose!\n";
    }
    else{
        std::cout<<"you win!\n";
    }
    break;
    case 'scissors':
    if (computer=='scissors'){
        std::cout<<"It's a tie!\n";
    }
    else if(computer=='rock'){
        std::cout<<"you lose!\n";
    }
    else{
        std::cout<<"you win!\n";
    }
    break;
}
}
//TODO: array
// array = collection of items stored at contiguous memory location
//          items can be accessed randomly by using index number
void main(){
    std::string car[3]={"corvette","mustang","camry"};
    std::cout << car[0]<<'\n';
    std::cout << car[1]<<'\n';
    std::cout << car[2]<<'\n';
    return ;
}
//TODO: sizeof() operator = determines the size in bytes of a:
//                          variable, data type, class, objects, etc.
void main(){
std::string name ="bro code";
double gpa=2.5;
char grade = 'F';
bool student = true;
char grades[]={'A','B','C','D','F'};
std::string student[]={"spongebob","patrick","squidward"};
std::cout<<sizeof(student)/sizeof(std::string)<<" elements\n";
std::cout<<sizeof(gpa)<<" bytes";
return;
}
//TODO: iterate over an array
void main(){
    std::string student[]={"spongebob","patrick","squidward"};
  for(int i=0; i < sizeof(student)/sizeof(std::string);i++){
    std::cout<<student[i]<<'\n';
}
return;
}
//TODO: foreach loop
void main(){
    std::string students[]={"spongebob","patrick","squidward"};
  for(std::string student : students){
    std::cout<< student<< '\n';
  }
  return;
}
//TODO: pass array to a function
double gettotal(double prices[], int size){
    double total=0;
    for (int i = 0; i < size; i++)
    {
        total=total+prices[i];
    }
    return total;
    
}
void main(){
    double prices[]={49.99, 15.05, 75, 9.99};
    int size=sizeof(prices)/sizeof(double);
    double total=gettotal(prices, size);
    std::cout<<"$"<<total;
    return;
}
//TODO: search an array for an element
int searcharray(int array[], int size,int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}
void main(){
    int number[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(number)/sizeof(int);
    int index;
    int mynum;
    std::cout << "enter element to search for: "<<'\n';
    std::cin>>mynum;
    index=searcharray(number, size, mynum);
    if(index!=-1){
        std::cout<<mynum<<" is at index "<< index;
    }
    else{
        std::cout<<mynum<<"is not in the array";
    }
    return;
}
//TODO: sort an array
void sort(int array[],int size);
void main(){
    int array[]={3,4,5,1,2,7,6,9,8,10};
    int size=sizeof(array)/sizeof(int);
    sort(array, size);
    for(int element:array){
        std::cout<<element<< " ";
    }
    return;
}
void sort(int array[],int size){
    int temp;
    for(int i=0;i<size -1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j ];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
//TODO: fill() function
void main(){
    //fill()=fills a range of element with a specified value 
    //       fill(begin, end, value)
    const int size=99;
    std::string foods[size];
    fill(foods, foods + (size/3),"pizza");
    fill(foods+(size/3),foods+(size/3)*2,"hamburger");
    fill(foods+(size/3)*2,foods+size,"hotdog");
    for(std::string food:foods){
        std::cout<<food<<'\n';
    }
    return;
}
//TODO: fill an array with user input
void main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(int);
    std::string temp;
    for(int i = 0;i < size;i++){
    std::cout<<"enter a fod you like or 'q' to qit #"<< i+1 << ": \n";
    std::getline(std::cin, temp);
    if(temp == "q"){
        break;
        }
    else{
        foods[i]=temp;
        }
    }
    std::cout << "you like the following food:\n";
    for(int i = 0; foods[i].empty();i++){
        std::cout << foods[i] << '\n';
    }
    return;
}
//TODO: multidimensional arrays
void main(){
    std::string cars[][3]= {"mustang", "escape", "f-150"
                            "corvette", "equinox", "silverado"
                            "challenger", "durango", "ram1500"};
    int rows = sizeof(cars[0])/sizeof(int);
    int columns = sizeof(cars[0])/sizeof(int);
    for(int i = 0; i < rows;i++){
        for(int j =0;j<columns;j++){
            std::cout << cars[i][i]<<" ";
        }
        std::cout<<'\n';
    }

}
//TODO: quiz  game
void main(){
    std::string questions[]={"1. what year was c++ created?: ",
                            "2. who invented c++?: ",
                            "3. what is the predecessor of c++?: ",
                            "4. is the earth flat?: "
                            };
    std::string options[][4]={{"A.", "B.", "C.", "D."},
                              {"A.", "B.", "C.", "D."},
                              {"A.", "B.", "C.", "D."},
                              {"A.", "B.", "C.", "D."}};
    char answerkey[]={ 'A','A','A','A',};
    int size = sizeof(questions)/sizeof(int);
    char guess; 
    int score;
    for(int i = 0; i < size; i ++){
        std::cout<<"*********************************\n";
        std::cout<< questions[i]<<'\n';
        std::cout<<"*********************************\n";
        for(int j=0;j< sizeof(options[i])/sizeof(std::string);j++){
            std::cout<<options[i][j]<<'\n';
        }
        std::cin>>guess;
        guess = toupper(guess);
        if(guess == answerkey[i]){
            std::cout<<"correct\n";
            score++;
        }
        else{
            std::cout<<"wrong\n";
            std::cout<< "answer: "<< answerkey[i]<<'\n';
        }
    }
    std::cout<<"result\n";
    std::cout << "correct guesses: "<< score << '\n';
    std::cout<<"# of question: "<< size <<'\n';
    std::cout<<"score: "<<(score/(double)size)*100<<"%";
    return ;

}
//TODO: memory addresses
void main(){
    std::string name = "bro";
    int age = 21;
    bool student= true;
            std::cout<< &name << '\n';
                std::cout<< &age << '\n';
                    std::cout<< &student << '\n';
                    return ;
}
//TODO: pass by value vs pass by reference
void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
void main(){
    std::string x = "kool-aid";
    std::string y = "water";
    swap(x, y);
    std::cout << "X: "<< x<< '\n';
    std::cout << "Y: "<< y<< '\n';
    return ;
}
//TODO: const parameters
void printinfo(const std::string &name,const int &age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}
void main(){
    std::string name = "bro";
    int age = 21;
    printinfo(name, age);
    return ;
}
//TODO: credit card validator program
int getditgit(const int number){
    return number%10 + (number/10%10);
}
int sumoddDigits(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 1;i>=0;i=-2){
        sum+= getditgit(cardnumber[i] - '0');
    }
    return sum;
}
int sumevenDigits(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 2;i>=0;i=-2){
        sum+= getditgit((cardnumber[i] - '0')*2);
    }
    return sum;
}
void main(){
    std::string cardnumber;
    int result = 0;
    std::cout << "enter a credit card: ";
    std::cin >> cardnumber;
    result = sumevenDigits(cardnumber)+sumoddDigits(cardnumber);
    if(result%10 == 0){
        std::cout << cardnumber << "is valid";
    }
    else{
        std::cout<< cardnumber << "is not valid";
    }
}
//TODO: pointers
void main(){
    std::string name = "bro";
    std::string *pname = &name;
    std::cout << *pname;

    std::string freepizzas[5]={"p1", "p1", "p3", "p4", "p5"};
    std::string *pfreepizzas = freepizzas;
    std::cout << *pfreepizzas;

    return ;
}
//TODO: NULL pointer
void main(){
    int *pointer = nullptr;
    int x =123;
    pointer = &x;
    if(pointer==nullptr){
        std::cout << "address was not assigned\n";
    }
    else{
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }
return ;
}
//TODO: TIC TAC TOE GAME
void drawboard(char *spaces){
    std::cout<<"     |     |      \n";
    std::cout<<"  "<< spaces[0] << "  |  "<< spaces[1] << "  |  "<< spaces[2] << "  \n";
    std::cout<<"_____|_____|______\n";
    std::cout<<"     |     |      \n";
    std::cout<<"  "<< spaces[3] << "  |  "<< spaces[4] << "  |  "<< spaces[5] << "  \n";
    std::cout<<"_____|_____|______\n";
    std::cout<<"     |     |      \n";
    std::cout<<"  "<< spaces[6] << "  |  "<< spaces[7] << "  |  "<< spaces[8] << "  \n";
    std::cout<<"     |     |      \n";
}
void playermove(char *spaces, char player){
    int number;
    do{
        std::cout<<"enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
       if(number >= 0 && number <= 8 && spaces[number]==' '){ 
            spaces[number]=player;
            break; 
        } else {
            std::cout << "Invalid move, try again.\n"; 
        }
    }while(true);
}

void computermove(char *spaces,char computer){
int number;
    while(true){
        number = rand() % 9;
        if(spaces[number]==' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkwinner(char *spaces,char player, char computer){
    if(spaces[0] != ' '&&spaces[0]==spaces[1]&&spaces[1]==spaces[2]){
        spaces[0]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    else if(spaces[3] != ' '&&spaces[3]==spaces[4]&&spaces[4]==spaces[5]){
        spaces[3]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    else if(spaces[6] != ' '&&spaces[6]==spaces[7]&&spaces[7]==spaces[8]){
        spaces[6]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[0] != ' '&&spaces[0]==spaces[3]&&spaces[3]==spaces[6]){
        spaces[0]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[1] != ' '&&spaces[1]==spaces[4]&&spaces[4]==spaces[7]){
        spaces[1]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[2] != ' '&&spaces[2]==spaces[5]&&spaces[5]==spaces[8]){
        spaces[2]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[0] != ' '&&spaces[0]==spaces[4]&&spaces[4]==spaces[8]){
        spaces[0]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[2] != ' '&&spaces[2]==spaces[4]&&spaces[4]==spaces[6]){
        spaces[2]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    
        return false;
}
bool checktie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    std::cout<<"it is a tie\n";
    return true;
}

void main(){
     srand(time(0));
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawboard(spaces);
    while(running){
        playermove(spaces, player);
        drawboard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checktie(spaces)){
                running = false;
                break;
        }
        computermove(spaces, computer);
        drawboard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checktie(spaces)){
                running = false;
                break;
        }
    }
    system("pause");
    return ;
}



































































































