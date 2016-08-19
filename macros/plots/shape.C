void shape()
{
//=========Macro generated from canvas: Stop/Stop
//=========  (Fri Aug 19 15:24:00 2016) by ROOT version6.06/01
   TCanvas *Stop = new TCanvas("Stop", "Stop",1,91,800,600);
   gStyle->SetOptStat(0);
   Stop->Range(-1.25,-0.02554382,11.25,0.2298944);
   Stop->SetFillColor(0);
   Stop->SetBorderMode(0);
   Stop->SetBorderSize(2);
   Stop->SetFrameBorderMode(0);
   Stop->SetFrameBorderMode(0);
   
   THStack *nGoodTrack = new THStack();
   nGoodTrack->SetName("nGoodTrack");
   nGoodTrack->SetTitle("nGoodTrack;nGoodTrack;AU");
   nGoodTrack->SetMaximum(0.1946196);
   
   TH1F *nGoodTrack_stack_1 = new TH1F("nGoodTrack_stack_1","nGoodTrack",20,0,10);
   nGoodTrack_stack_1->SetMinimum(0);
   nGoodTrack_stack_1->SetMaximum(0.2043506);
   nGoodTrack_stack_1->SetDirectory(0);
   nGoodTrack_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nGoodTrack_stack_1->SetLineColor(ci);
   nGoodTrack_stack_1->GetXaxis()->SetTitle("nGoodTrack");
   nGoodTrack_stack_1->GetXaxis()->SetLabelFont(42);
   nGoodTrack_stack_1->GetXaxis()->SetLabelSize(0.035);
   nGoodTrack_stack_1->GetXaxis()->SetTitleSize(0.035);
   nGoodTrack_stack_1->GetXaxis()->SetTitleFont(42);
   nGoodTrack_stack_1->GetYaxis()->SetTitle("AU");
   nGoodTrack_stack_1->GetYaxis()->SetLabelFont(42);
   nGoodTrack_stack_1->GetYaxis()->SetLabelSize(0.035);
   nGoodTrack_stack_1->GetYaxis()->SetTitleSize(0.035);
   nGoodTrack_stack_1->GetYaxis()->SetTitleFont(42);
   nGoodTrack_stack_1->GetZaxis()->SetLabelFont(42);
   nGoodTrack_stack_1->GetZaxis()->SetLabelSize(0.035);
   nGoodTrack_stack_1->GetZaxis()->SetTitleSize(0.035);
   nGoodTrack_stack_1->GetZaxis()->SetTitleFont(42);
   nGoodTrack->SetHistogram(nGoodTrack_stack_1);
   
   
   TH1D *ttbarH0__1 = new TH1D("ttbarH0__1","ttbar",20,0,10);
   ttbarH0__1->SetBinContent(1,0.000455618);
   ttbarH0__1->SetBinContent(3,0.01239281);
   ttbarH0__1->SetBinContent(5,0.01868034);
   ttbarH0__1->SetBinContent(7,0.02223416);
   ttbarH0__1->SetBinContent(9,0.02660809);
   ttbarH0__1->SetBinContent(11,0.02387438);
   ttbarH0__1->SetBinContent(13,0.02177854);
   ttbarH0__1->SetBinContent(15,0.02059393);
   ttbarH0__1->SetBinContent(17,0.01886258);
   ttbarH0__1->SetBinContent(19,0.01503539);
   ttbarH0__1->SetBinContent(21,0.04938899);
   ttbarH0__1->SetBinError(1,0.9431233);
   ttbarH0__1->SetBinError(3,4.918729);
   ttbarH0__1->SetBinError(5,6.038936);
   ttbarH0__1->SetBinError(7,6.588376);
   ttbarH0__1->SetBinError(9,7.207338);
   ttbarH0__1->SetBinError(11,6.827066);
   ttbarH0__1->SetBinError(13,6.520523);
   ttbarH0__1->SetBinError(15,6.340707);
   ttbarH0__1->SetBinError(17,6.068322);
   ttbarH0__1->SetBinError(19,5.417831);
   ttbarH0__1->SetBinError(21,9.819358);
   ttbarH0__1->SetEntries(2545);

   ci = TColor::GetColor("#66ff66");
   ttbarH0__1->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   ttbarH0__1->SetLineColor(ci);
   ttbarH0__1->GetXaxis()->SetLabelFont(42);
   ttbarH0__1->GetXaxis()->SetLabelSize(0.035);
   ttbarH0__1->GetXaxis()->SetTitleSize(0.035);
   ttbarH0__1->GetXaxis()->SetTitleFont(42);
   ttbarH0__1->GetYaxis()->SetLabelFont(42);
   ttbarH0__1->GetYaxis()->SetLabelSize(0.035);
   ttbarH0__1->GetYaxis()->SetTitleSize(0.035);
   ttbarH0__1->GetYaxis()->SetTitleFont(42);
   ttbarH0__1->GetZaxis()->SetLabelFont(42);
   ttbarH0__1->GetZaxis()->SetLabelSize(0.035);
   ttbarH0__1->GetZaxis()->SetTitleSize(0.035);
   ttbarH0__1->GetZaxis()->SetTitleFont(42);
   nGoodTrack->Add(ttbarH0,"");
   
   TH1D *wjetsH0__2 = new TH1D("wjetsH0__2","wjets",20,0,10);
   wjetsH0__2->SetBinContent(1,0.003426447);
   wjetsH0__2->SetBinContent(3,0.1729592);
   wjetsH0__2->SetBinContent(5,0.1426253);
   wjetsH0__2->SetBinContent(7,0.11462);
   wjetsH0__2->SetBinContent(9,0.08882454);
   wjetsH0__2->SetBinContent(11,0.06836389);
   wjetsH0__2->SetBinContent(13,0.05290573);
   wjetsH0__2->SetBinContent(15,0.03772884);
   wjetsH0__2->SetBinContent(17,0.02776677);
   wjetsH0__2->SetBinContent(19,0.01815419);
   wjetsH0__2->SetBinContent(21,0.04272032);
   wjetsH0__2->SetBinError(1,2.354027);
   wjetsH0__2->SetBinError(3,16.14896);
   wjetsH0__2->SetBinError(5,14.10041);
   wjetsH0__2->SetBinError(7,12.35172);
   wjetsH0__2->SetBinError(9,10.56401);
   wjetsH0__2->SetBinError(11,9.030274);
   wjetsH0__2->SetBinError(13,7.693643);
   wjetsH0__2->SetBinError(15,6.34393);
   wjetsH0__2->SetBinError(17,5.266557);
   wjetsH0__2->SetBinError(19,4.257316);
   wjetsH0__2->SetBinError(21,6.064812);
   wjetsH0__2->SetEntries(16822);

   ci = TColor::GetColor("#3399cc");
   wjetsH0__2->SetFillColor(ci);

   ci = TColor::GetColor("#3399cc");
   wjetsH0__2->SetLineColor(ci);
   wjetsH0__2->GetXaxis()->SetLabelFont(42);
   wjetsH0__2->GetXaxis()->SetLabelSize(0.035);
   wjetsH0__2->GetXaxis()->SetTitleSize(0.035);
   wjetsH0__2->GetXaxis()->SetTitleFont(42);
   wjetsH0__2->GetYaxis()->SetLabelFont(42);
   wjetsH0__2->GetYaxis()->SetLabelSize(0.035);
   wjetsH0__2->GetYaxis()->SetTitleSize(0.035);
   wjetsH0__2->GetYaxis()->SetTitleFont(42);
   wjetsH0__2->GetZaxis()->SetLabelFont(42);
   wjetsH0__2->GetZaxis()->SetLabelSize(0.035);
   wjetsH0__2->GetZaxis()->SetTitleSize(0.035);
   wjetsH0__2->GetZaxis()->SetTitleFont(42);
   nGoodTrack->Add(wjetsH0,"");
   nGoodTrack->Draw("hist");
   
   TH1D *stopH0__3 = new TH1D("stopH0__3","Signal",20,0,10);
   stopH0__3->SetBinContent(1,0.0006410256);
   stopH0__3->SetBinContent(3,0.02692308);
   stopH0__3->SetBinContent(5,0.06089744);
   stopH0__3->SetBinContent(7,0.09935897);
   stopH0__3->SetBinContent(9,0.1089744);
   stopH0__3->SetBinContent(11,0.1185897);
   stopH0__3->SetBinContent(13,0.1169872);
   stopH0__3->SetBinContent(15,0.09583333);
   stopH0__3->SetBinContent(17,0.08012821);
   stopH0__3->SetBinContent(19,0.06730769);
   stopH0__3->SetBinContent(21,0.224359);
   stopH0__3->SetBinError(1,0.1433769);
   stopH0__3->SetBinError(3,0.9291882);
   stopH0__3->SetBinError(5,1.397465);
   stopH0__3->SetBinError(7,1.785027);
   stopH0__3->SetBinError(9,1.869405);
   stopH0__3->SetBinError(11,1.950136);
   stopH0__3->SetBinError(13,1.936915);
   stopH0__3->SetBinError(15,1.753072);
   stopH0__3->SetBinError(17,1.603002);
   stopH0__3->SetBinError(19,1.469176);
   stopH0__3->SetBinError(21,2.682335);
   stopH0__3->SetEntries(3142);

   ci = TColor::GetColor("#ff0000");
   stopH0__3->SetLineColor(ci);
   stopH0__3->GetXaxis()->SetLabelFont(42);
   stopH0__3->GetXaxis()->SetLabelSize(0.035);
   stopH0__3->GetXaxis()->SetTitleSize(0.035);
   stopH0__3->GetXaxis()->SetTitleFont(42);
   stopH0__3->GetYaxis()->SetLabelFont(42);
   stopH0__3->GetYaxis()->SetLabelSize(0.035);
   stopH0__3->GetYaxis()->SetTitleSize(0.035);
   stopH0__3->GetYaxis()->SetTitleFont(42);
   stopH0__3->GetZaxis()->SetLabelFont(42);
   stopH0__3->GetZaxis()->SetLabelSize(0.035);
   stopH0__3->GetZaxis()->SetTitleSize(0.035);
   stopH0__3->GetZaxis()->SetTitleFont(42);
   stopH0__3->Draw("HIST same");
   
   TPaveText *pt = new TPaveText(0.3828571,0.94,0.6171429,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("nGoodTrack");
   pt->Draw();
   Stop->Modified();
   Stop->cd();
   Stop->SetSelected(Stop);
}
