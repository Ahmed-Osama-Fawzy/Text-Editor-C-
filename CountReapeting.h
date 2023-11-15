using namespace std;
// To Count OF # Of Rreapetinng Word In the File
void countNumberOfOccuring(){
   ifstream theFile;
    char filename[100],line[100];
    cout<<"please enter your file name";
    cin>>filename;
    theFile.open(filename);
     cout<<"\nFile opened successfully.............\n";

     int count=0;
     char ch[100],c[100];

     cout<<"\nEnter any word which u want to count :: ";
     cin>>c;

     while(theFile)
     {
      theFile>>ch;
      if(strcmp(ch,c)==0)
       count++;
     }

     cout<<"\nOccurrence of word [ "<<c<<" ] = "<<count<<"\n";
     theFile.close(); //closing file
}
