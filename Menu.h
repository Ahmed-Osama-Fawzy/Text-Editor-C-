using namespace std;
// List OF The Services Which The PRogram Give IT For The User Return The number OF THE Suatible Service
int diplayMenu(){
    int choice;
    cout<<"please choose one of this options \n";
    cout<<"1-Add new text to the end of the file \n";
    cout<<"2-Display the content of the file \n";
    cout<<"3-Empty the file \n";
    cout<<"4-Encrypt the file content \n";
    cout<<"5-Decrypt the file content \n";
    cout<<"6-Merge another file \n";
    cout<<"7-Count the number of words in the file \n";
    cout<<"8-Count the number of characters in the file \n";
    cout<<"9-Count the number of lines in the file \n";
    cout<<"10-Search for a word in the file \n";
    cout<<"11-Count the number of times a word exists in the file \n";
    cout<<"12-Turn the file content to upper case. \n";
    cout<<"13-Turn the file content to lower case. \n";
    cout<<"14-Turn file content to 1st caps (1st char of each word is capital) \n";
    cout<<"15-Save\n";
    cout<<"16-Exit \n";
    cin>>choice;
    return choice;
}
