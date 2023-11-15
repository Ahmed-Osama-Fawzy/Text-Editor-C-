using namespace std;
void loadFile(vector<string>& text,ifstream& file){
    char filename[100],line[100];
    cout<<"please enter your file name";
    cin>>filename;
    file.open(filename);
    if(file){
        cout<<"files was opened successfully";
        while(!file.eof()){
            file.getline(line,100,'\n');
            text.push_back(string(line));
        }
    }
    else {
        cout<<"the file could not be opened \n";
        cout<<"anew file will be created when saving \n";
    }
     cout<<"number of lines = "<<text.size()<<endl;
}
