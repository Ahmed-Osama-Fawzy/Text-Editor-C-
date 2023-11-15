using namespace std;
// To Convert All  Chars In File To Lower Case Chars
void convertToLower(){
    ifstream theFile;
    char filename[100];
    cout<<"Please Enter The File'name: ";
    cin>>filename;
    strcat(filename,".txt");
    theFile.open(filename);
    string theLine;
    while (!theFile.eof()){
      theFile >> theLine;
      for (size_t j=0; j< theLine.length(); ++j){
        theLine[j] = tolower(theLine[j]);
      }
      cout<<theLine<<endl;
    }
}
