using namespace std;
// To Count THE NUmber OF  The Linnes in The File and Stoped Att The Space And Print It
void numberOfLines(vector<string>& text,ifstream& file){
    char filename[100];
    string line;
    int countt=0;
    cout<<"please enter your file name";
    cin>>filename;
    file.open(filename);
    if(file){
        cout<<"files was opened successfully";
        while(file.peek()!=EOF){
                getline(file,line);
        countt++;

        }
    }
    else {
        cout<<"the file could not be opened \n";
        cout<<"anew file will be created when saving \n";
    }
     cout<<"number of lines = "<<countt<<endl;
}
