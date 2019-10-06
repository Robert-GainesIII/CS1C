#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void readFile(string);

int main(){
    
    //PART A
    cout << "PART A " << endl;
    srand(time(0));
    int a,b,c = 0;
    int newNum = 0;
    
    int num = (rand() % 200 )+ 100;
    cout << "Random Number Generated: " << num << endl;
    
    a = (num % 1000)/100;
    b = (num % 100)/10;
    c = num % 10;
    
    newNum = a + b + c;
    
    cout << "Total of all three integers is: " << newNum << endl;
    
    newNum = num * 3;
    
    cout << "The number tripled is : " << newNum << endl;
    
    c = c*100;
    b = b*10;
    
    newNum = c + b + a;
    
    cout << "The number reversed is : " << newNum << endl;

    cout << "PART B " << endl;
    //===============================================================//
    //PART B
    enum Days{
        MON,
        TUE,
        WED,
        THU,
        FRI,
        SAT,
        SUN
    };
    
    typedef string Name;
    
    Name firstName = "Bobby";
    
    cout << endl << endl;
    cout << "PART C " << endl;
    //===============================================================//
    //PART C
    int numArray[10];
    cout << "{" ;
    for(int i = 0; i < 10; i++){
        numArray[i] = rand() % 100;
        if(i != 9)
            cout << numArray[i] << ",";
        else
            cout << numArray[i];
    }
    cout << "}" << endl;
    
    
    cout << endl << endl;
    cout << "PART D" << endl;
    //===============================================================//
    //PART D
    int i, j;
    int temp;   // holding variable
    int numLength = 10;
    for (i=0; i< (numLength -1); i++)    // element to be compared
    {
        for(j = (i+1); j < numLength; j++)   // rest of the elements
        {
            if (numArray[i] < numArray[j])          // descending order
            {
                temp= numArray[i];          // swap
                numArray[i] = numArray[j];
                numArray[j] = temp;
            }
        }
    }
    cout << "{";
    for(int i = 0 ; i < 10; i++){
        if(i != 9)
            cout << numArray[i] << ",";
        else
            cout << numArray[i];
    }
    cout << "}" << endl;
    
    
    cout << endl << endl;
    cout << "PART E" << endl;
    //===============================================================//
    //PART E
    
    ofstream out;
    out.open("output.txt");
    for(int i = 0 ; i < 10; i++){
        if(i != 9)
            out << numArray[i] << ",";
        else
            out << numArray[i];
    }
    out.close();
    
    
    cout << endl << endl;
    cout << "PART F" << endl;
    //===============================================================//
    //PART F
    readFile("output.txt");
}

void readFile(string fileName){
    
    ifstream in;
    in.open(fileName);
    if(!in){
        cout << fileName << " Could not be opened. The file may not exist." << endl;
    }
    while(!in.eof()){
        string line;
        getline(in, line);
        cout << line << endl;
    }
}
