#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std ; 

int countLine(string pName){
    int count = 0 ; 
    for(int i = 0; pName[i] != '\0'; i++){
        if(pName[i] == '\n'){
            count ++ ; 
        }
    }
    return count ; 
} ; 

int countChar(string pName){
    int count = 0 ;
    for(int i = 0; pName[i] != '\0'; i++){
        if(pName[i] == '' || pName[i] == '\t'){
            count ++ ; 
        }
    }
    return count ; 
} ; 

int main(int argc, char** argv){
    string fileName ; 
    char c ;
    int charCount, lineCount ; 
    charCount=wordCount=0 ; 
    if(argc == 1){
        countLine("Ohio University") ; 
        countChar("Athens") ; 
    } else if(argc == 2){
        fileName = argc[1] ; 
        ifstream infile ; 
        ofstream outfile ; 
        infile.open(fileName.c_str()) ; 
        while(!infile.eof()){
            c = infile.get() ; 
            if(c >= 'a' && c <= 'z' || c > 'A' && c <= 'Z'){
                charCount ++ ; 
            } else if(c == '\n'){
                lineCount ++ ; 
            } 
        }
        cout << "Char: " << charCount << '\n' << "Line: " << lineCount << endl ; 
    }
}
