using namespace std;
// To Stop The Program Finally
void Exit (){
    exit(EXIT_FAILURE);
}
// To Save The Old File After Changes In New File with New NAme
void Save(){
    char ch , sourceFile[20] ,targetFile[20];
    FILE *fs, *ft;
    cout<<"Enter the Name of Source File: ";
    cin>>sourceFile;
    strcat(sourceFile,".txt");
    fs = fopen(sourceFile, "r");
    if(fs == NULL){
        cout<<"\nError Occurred!";
    }
    cout<<"\nEnter the Name of The New File: ";
    cin>>targetFile;
    strcat(targetFile,".txt");
    ft = fopen(targetFile, "w");
    if(ft == NULL){
        cout<<"\nError Occurred!";
    }
    ch = fgetc(fs);
    while(ch != EOF){
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    cout<<"\nFile Saved successfully.";
    fclose(fs);
    fclose(ft);
    Exit ();
    cout<<endl;
}
