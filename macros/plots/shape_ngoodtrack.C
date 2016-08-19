void shape_ngoodtrack()
{
//=========Macro generated from canvas: Stop/Stop
//=========  (Fri Aug 19 15:28:29 2016) by ROOT version6.06/01
   TCanvas *Stop = new TCanvas("Stop", "Stop",1,91,800,600);
   gStyle->SetOptStat(0);
   Stop->Range(-1.875,-0.02554382,11.875,0.2298944);
   Stop->SetFillColor(0);
   Stop->SetBorderMode(0);
   Stop->SetBorderSize(2);
   Stop->SetFrameBorderMode(0);
   Stop->SetFrameBorderMode(0);
   
   THStack *nGoodTrack = new THStack();
   nGoodTrack->SetName("nGoodTrack");
   nGoodTrack->SetTitle("nGoodTrack;nGoodTrack;AU");
   nGoodTrack->SetMaximum(0.1946196);
   
   TH1F *nGoodTrack_stack_1 = new TH1F("nGoodTrack_stack_1","nGoodTrack",11,-0.5,10.5);
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
   
   
   TH1D *ttbarH0__1 = new TH1D("ttbarH0__1","ttbar",11,-0.5,10.5);
   ttbarH0__1->SetBinContent(1,0.000455618);
   ttbarH0__1->SetBinContent(2,0.01239281);
   ttbarH0__1->SetBinContent(3,0.01868034);
   ttbarH0__1->SetBinContent(4,0.02223416);
   ttbarH0__1->SetBinContent(5,0.02660809);
   ttbarH0__1->SetBinContent(6,0.02387438);
   ttbarH0__1->SetBinContent(7,0.02177854);
   ttbarH0__1->SetBinContent(8,0.02059393);
   ttbarH0__1->SetBinContent(9,0.01886258);
   ttbarH0__1->SetBinContent(10,0.01503539);
   ttbarH0__1->SetBinContent(11,0.01111708);
   ttbarH0__1->SetBinContent(12,0.03827191);
   ttbarH0__1->SetBinError(1,0.9431233);
   ttbarH0__1->SetBinError(2,4.918729);
   ttbarH0__1->SetBinError(3,6.038936);
   ttbarH0__1->SetBinError(4,6.588376);
   ttbarH0__1->SetBinError(5,7.207338);
   ttbarH0__1->SetBinError(6,6.827066);
   ttbarH0__1->SetBinError(7,6.520523);
   ttbarH0__1->SetBinError(8,6.340707);
   ttbarH0__1->SetBinError(9,6.068322);
   ttbarH0__1->SetBinError(10,5.417831);
   ttbarH0__1->SetBinError(11,4.658685);
   ttbarH0__1->SetBinError(12,8.643868);
   ttbarH0__1->SetEntries(2536);

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
   
   TH1D *wjetsH0__2 = new TH1D("wjetsH0__2","wjets",11,-0.5,10.5);
   wjetsH0__2->SetBinContent(1,0.003426447);
   wjetsH0__2->SetBinContent(2,0.1729592);
   wjetsH0__2->SetBinContent(3,0.1426253);
   wjetsH0__2->SetBinContent(4,0.11462);
   wjetsH0__2->SetBinContent(5,0.08882454);
   wjetsH0__2->SetBinContent(6,0.06836389);
   wjetsH0__2->SetBinContent(7,0.05290573);
   wjetsH0__2->SetBinContent(8,0.03772884);
   wjetsH0__2->SetBinContent(9,0.02776677);
   wjetsH0__2->SetBinContent(10,0.01815419);
   wjetsH0__2->SetBinContent(11,0.01470973);
   wjetsH0__2->SetBinContent(12,0.02801059);
   wjetsH0__2->SetBinError(1,2.354027);
   wjetsH0__2->SetBinError(2,16.14896);
   wjetsH0__2->SetBinError(3,14.10041);
   wjetsH0__2->SetBinError(4,12.35172);
   wjetsH0__2->SetBinError(5,10.56401);
   wjetsH0__2->SetBinError(6,9.030274);
   wjetsH0__2->SetBinError(7,7.693643);
   wjetsH0__2->SetBinError(8,6.34393);
   wjetsH0__2->SetBinError(9,5.266557);
   wjetsH0__2->SetBinError(10,4.257316);
   wjetsH0__2->SetBinError(11,3.762942);
   wjetsH0__2->SetBinError(12,4.756282);
   wjetsH0__2->SetEntries(16813);

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
   
   TH1D *stopH0__3 = new TH1D("stopH0__3","Signal",11,-0.5,10.5);
   stopH0__3->SetBinContent(1,0.0006410256);
   stopH0__3->SetBinContent(2,0.02692308);
   stopH0__3->SetBinContent(3,0.06089744);
   stopH0__3->SetBinContent(4,0.09935897);
   stopH0__3->SetBinContent(5,0.1089744);
   stopH0__3->SetBinContent(6,0.1185897);
   stopH0__3->SetBinContent(7,0.1169872);
   stopH0__3->SetBinContent(8,0.09583333);
   stopH0__3->SetBinContent(9,0.08012821);
   stopH0__3->SetBinContent(10,0.06730769);
   stopH0__3->SetBinContent(11,0.05608974);
   stopH0__3->SetBinContent(12,0.1682692);
   stopH0__3->SetBinError(1,0.1433769);
   stopH0__3->SetBinError(2,0.9291882);
   stopH0__3->SetBinError(3,1.397465);
   stopH0__3->SetBinError(4,1.785027);
   stopH0__3->SetBinError(5,1.869405);
   stopH0__3->SetBinError(6,1.950136);
   stopH0__3->SetBinError(7,1.936915);
   stopH0__3->SetBinError(8,1.753072);
   stopH0__3->SetBinError(9,1.603002);
   stopH0__3->SetBinError(10,1.469176);
   stopH0__3->SetBinError(11,1.341168);
   stopH0__3->SetBinError(12,2.32297);
   stopH0__3->SetEntries(3133);

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
   
   TLegend *leg = new TLegend(0.65,0.69,0.895,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","NDC","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttbarH0","ttbar","lpf");

   ci = TColor::GetColor("#66ff66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ff66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("wjetsH0","wjets","lpf");

   ci = TColor::GetColor("#3399cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3399cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("stopH0","Signal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
