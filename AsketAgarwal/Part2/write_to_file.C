// MAcro to write to file histograms
void write_to_file()
{
  TFile out_file("my_rootfile.root","RECREATE");
  for (int i=0; i<10; i++)
  {
    char str[20];char temp[2];
    sprintf(temp, "%d", i);
    strcpy(str, "My_histogram_");
    strcat(str, temp);
    TH1F *h = new TH1F(str,"My Title;X;# of entries",100,-5,5);
    h->FillRandom("gaus");
    h->Write();
    delete h;
  }
  out_file.Close();
}
