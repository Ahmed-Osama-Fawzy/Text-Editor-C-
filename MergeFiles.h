using namespace std;
// To Merge Two files In One File
void mergeTwoFiles(vector<string>& text,ifstream& file){
    fstream originalfile;
    originalfile.open("originalfile.txt",ios::app);
    char filename[100],line[100];
    cout<<"please enter your file name";
    cin>>filename;
    file.open(filename);
    if(file){
        cout<<"files was opened successfully";
        while(!file.eof()){
            file.getline(line,100,'\n');
            originalfile<<line<<endl;
        }
    }
    else {
        cout<<"the file could not be opened \n";
        cout<<"anew file will be created when saving \n";
    }
}
