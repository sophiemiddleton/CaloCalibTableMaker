#ifndef CaloCalibTableMaker_hh
#define CaloCalibTableMaker_hh

class CaloCalibTableMaker
	{
      public:
        std::tuple<std::vector<double>, std::vector<double> > inputTable(const char *ArchiveFile);
        void addTable();
        void outputTable();
        void combineAlg();
      private:
      //TODO
  };
#endif

