using namespace std;
// To Count THE NUmber OF  The Words in The File and Stoped Att The Space And Print It
void numberOfWords(vector<string>& text,ifstream& file){
    char filename[100], ch;
    int word=1;
    cout<<"please enter your file name";
    cin>>filename;
    file.open(filename);
    if(file){
        cout<<"files was opened successfully";
        while(file){
       file.get(ch);{
       if(ch==' ' || ch=='\n')
        word++;
      }
    }
  }
    else {
        cout<<"the file could not be opened \n";
        cout<<"anew file will be created when saving \n";
    }
     cout<<"number of words = "<<word<<endl;
}
