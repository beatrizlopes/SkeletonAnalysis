#!/bin/bash

SIGNAL=~cbeiraod/local-area/Stop4Body/nTuples_v2016-08-31/T2DegStop_300_270.root
BACKGROUND=~cbeiraod/local-area/Stop4Body/nTuples_v2016-08-31/Background.root

if [[ -f ${SIGNAL} && -f ${BACKGROUND} ]] ; then
  trainMVA --signalFile ${SIGNAL} --backgroundFile ${BACKGROUND} --nTree 400
  #root -l runTMVAGui_Cristovao.C+
  applyMVA --inputdirectory ~cbeiraod/local-area/Stop4Body/nTuples_v2016-08-31/ --outputdirectory /home/t3cms/beacms16/CMSSW_8_0_14/src/UserCode/SkeletonAnalysis/macros/bdtFiles/NN9003_NCycles300_NNN/
  root -l maximizeYield.C+
fi

