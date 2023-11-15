using namespace std;
// To Count THE NUmber OF  The chars in The File and Stoped Att The Space And Print It
void numberOfCharacter(vector<string>& text,ifstream& file){
    char filename[100];
    string line;
    int sum=0;
    cout<<"please enter your file name";
    cin>>filename;
    file.open(filename);
    if(file){
        cout<<"files was opened successfully";
        while(!file.eof()){
           getline(file,line);
           int numofcharact=line.length();
           for(unsigned int i=0;i<line.length();i++){
           }
           sum=numofcharact+sum;
        }
    }
    else {
        cout<<"the file could not be opened \n";
        cout<<"anew file will be created when saving \n";
    }
      cout<<"number of character in the file = "<<sum<<endl;
}
