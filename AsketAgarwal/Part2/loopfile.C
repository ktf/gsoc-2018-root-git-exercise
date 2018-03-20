
//Macro to read Tkeys
void loopfile() {
   TFile *f1 = TFile::Open("my_rootfile.root");
   TIter keyList(f1->GetListOfKeys());
   TKey *key;


   while ((key = (TKey*)keyList())) {
      key->Print();
      cout<<"    Nbytes : "<<key->GetNbytes()<<endl;
      cout<<"    Version : "<<key->GetVersion()<<endl;
     cout<<"    ObjLen : "<<key->GetObjlen()<<endl;
     cout<<"    SizeofHeader:"<<key->Sizeof()<<endl;
   }
}

