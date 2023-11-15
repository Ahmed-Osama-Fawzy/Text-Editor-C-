using namespace std;
// To Clear All The Text From The File And Make it Empty
void ClearFileContent(){
    ofstream file;
    char filename[100];
    cout<<"Please Enter The File'name: ";
    cin>>filename;
    strcat(filename,".txt");
    file.open(filename , ofstream::out | ofstream::trunc);
}
