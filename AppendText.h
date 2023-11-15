using namespace std;
// Tto Append Neww Text At TThe End OF THe File Wwithout Deltete The MAain Text OF Teh File
void AppendText(){
    char filename[100];
    cout<<"Please Enter The File'name: ";
    cin>>filename;
    strcat(filename,".txt");
    char appendtext[100];
    cout<<"Please Enter The Appened Text: ";
    cin>>appendtext;
    ofstream ofile;
    ifstream ifile;
    ifile.open(filename);
    ofile.open(filename , ios::app);
    if(ifile.is_open())
        ofile << appendtext;
    cout << "The Text Appended even The File Is Not Exsits" << endl;
    ifile.close();
    ofile.close();
}
