#ifndef ALIANALYSISTASKEMCALONLINEPATCHESREF_H
#define ALIANALYSISTASKEMCALONLINEPATCHESREF_H
/* Copyright(c) 1998-2015, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

#include <AliAnalysisTaskSE.h>

class AliAnalysisUtils;
class AliEMCALGeometry;

namespace EMCalTriggerPtAnalysis {

class AliEMCalHistoContainer;

class AliAnalysisTaskEmcalOnlinePatchesRef: public AliAnalysisTaskSE {
public:
  AliAnalysisTaskEmcalOnlinePatchesRef();
  AliAnalysisTaskEmcalOnlinePatchesRef(const char *name);
  virtual ~AliAnalysisTaskEmcalOnlinePatchesRef();

  virtual void UserCreateOutputObjects();
  virtual void UserExec(Option_t *);

protected:
  AliAnalysisUtils                        *fAnalysisUtil;
  AliEMCALGeometry                        *fGeometry;
  AliEMCalHistoContainer                  *fHistos;

private:
  AliAnalysisTaskEmcalOnlinePatchesRef(const AliAnalysisTaskEmcalOnlinePatchesRef &);
  AliAnalysisTaskEmcalOnlinePatchesRef &operator=(const AliAnalysisTaskEmcalOnlinePatchesRef &);

  ClassDef(AliAnalysisTaskEmcalOnlinePatchesRef, 1);
};

} /* namespace EMCalTriggerPtAnalysis */

#endif /* ALIANALYSISTASKEMCALONLINEPATCHESREF_H */
