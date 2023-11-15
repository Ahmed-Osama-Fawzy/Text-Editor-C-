using namespace std;
// To Return the Text OF The File In Hex Values and Print It In My Screen
void Encrypt(){
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
            for(const auto &Item :Content){
                    cout << hex << int(Item);
                }
            cout << endl ;
        }
    }else {
        cout << "This File Can not Be Open" << endl;
    }
}
// To Return the Text OF The File In ASCII Values and Print It In My Screen
void Decrypt(){
    GetContent();
}
