using namespace std;
// To Search at Word In The File
void searchForWord(vector<string>& text,ifstream& file){
      char filename[100];
    string search1,test;
    char line[100];
    int counter=0;
    bool isFound=0;
    string word;
    cout<<"please enter your file name";
    cin>>filename;
    file.open(filename);
   cout<<"enter the word you want to check"<<endl;
        cin>>search1;
        for(int i=0;i<search1.length();i++)
        {
            search1[i]=tolower(search1[i]);
        }

   while(file>>word){
    for(int i=0;i<word.length();i++)
        {
            word[i]=tolower(word[i]);
        }
        if(word==search1)     counter++;}
        if(counter>0)
            { cout<<"Word was found in the file :)"<<endl;}
        else {cout<<"Word was not found in the file :("<<endl;}

}
