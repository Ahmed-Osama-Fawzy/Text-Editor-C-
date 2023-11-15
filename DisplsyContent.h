using namespace std;
// To Print The Full Text OF The File In My Screen
void GetContent(){
    ifstream file;
    string Content;
    char filename[100];
    cout<<"Please Enter The File'name: ";
    cin>>filename;
    strcat(filename,".txt");
    file.open(filename);
    if (file.is_open()){
        while (file) {
            std::getline(file , Content);
            cout << Content << endl;
        }
    }else {
        cout << "This File Can not Be Open" << endl;
    }
}
