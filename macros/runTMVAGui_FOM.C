{
  TMVA::mvaeffs("TMVA.root",kTRUE,"2*(sqrt(S+B)-sqrt(B))");
  
  //"sqrt(2*((S+B)*log(((S+B)*(B+0.04*B*B))/(B*B+(S+B)*0.04*B*B))-1/0.04*log(1+0.04*B*B*S/(B*(B+0.04*B*B)))");
}
