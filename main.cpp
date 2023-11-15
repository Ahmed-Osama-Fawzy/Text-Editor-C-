// Text Editor Applaction with C++
// Using Pure C++ Code
// Using Some c++ Libraries To Complette The Code
// Return All Function In Header File
// Call All Header Files to Get The Functions
// Names & IDs :
// Aahmed Osama Fawzy Elsaid       20210008
// Nahla Hesham Mostafa            20210424
// Elhamy Ebrahim Elnafry          20210516
// Section & The Engineer
// 17 , 18      Eng.Hager Ahmed

#include<iostream>
#include<fstream>>
#include<vector>
#include<cctype>
#include<string>
#include<sstream>
#include<iterator>
#include<cstring>
#include<ctype.h>
#include"AppendText.h"
#include"Capitalize.h"
#include"ClearFile.h"
#include"Count#ofChars.h"
#include"Count#ofWords.h"
#include"Count#ofLines.h"
#include"CountReapeting.h"
#include"Save.h"
#include"Menu.h"
#include"DisplsyContent.h"
#include"Encrypt.h"
#include"LoadFile.h"
#include"lower.h"
#include"Upper.h"
#include"MergeFiles.h"
#include"Search.h"
using namespace std;
int main(){
    ifstream sourseFile;
  //ofstream tata;
    vector<string>text;
    int choice;
 // tata.open("nn.txt");
 // tata<<sourseFile.rdbuf();
    for(string line:text)
       	cout<<line<<endl;
    while(true){
        choice= diplayMenu();
        switch(choice){
            case 1:
                AppendText();
                break;
            case 2:
                GetContent();
                break;
            case 3:
                ClearFileContent();
                break;
            case 4:
                Encrypt();
                break;
            case 5:
                Decrypt();
                break;
            case 6:
                mergeTwoFiles(text,sourseFile);
                break;
            case 7:
                numberOfWords(text,sourseFile);
                break;
            case 8:
                numberOfCharacter(text,sourseFile);
                break;
            case 9:
                numberOfLines(text,sourseFile);
                break;
            case 10:
                searchForWord(text,sourseFile);
                break;
            case 11:
                countNumberOfOccuring();
                break;
            case 12:
                convertToUpper();
                break;
            case 13:
                convertToLower();
                break;
            case 14:
                convertToCapital();
                break;
            case 15:
                Save();
                break;
            case 16:
                Exit();
                break;
        }
    }
}
