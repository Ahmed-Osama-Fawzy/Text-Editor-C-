using namespace std;
// To Convert TThe First Chars In The Word In File To Upper Case Chars
void convertToCapital(){
    ifstream theFile;
    char filename[100];
    cout<<"Please Enter The File'name: ";
    cin>>filename;
    strcat(filename,".txt");
    theFile.open(filename);
    string theLine;
    while (!theFile.eof()){
      theFile >> theLine;
       for (int x = 0; x < theLine.length(); x++){
		if (x == 0){
			theLine[x] = toupper(theLine[x]);
		}else if (theLine[x - 1] == ' '){
			theLine[x] = toupper(theLine[x]);
		}
	}
      cout<<theLine<<endl;
    }
}
