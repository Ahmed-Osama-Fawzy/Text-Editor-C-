using namespace std;
// To Convert All  Chars In File To Upper Case Chars
void convertToUpper(){
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
        theLine[j] = toupper(theLine[j]);
      }
      cout<<theLine<<endl;
    }
}
