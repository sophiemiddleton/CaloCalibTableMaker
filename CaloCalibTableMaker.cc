//To run:  g++ -std=c++14 CaloCalibTableMaker.cc -o a.out the ./a.out (add -pthread to use multithreaded)
#include "Offline/CaloReco/inc/CaloCalibTableMaker.hh" 
#include <iostream>
#include <tuple>
using namespace std;

// reads an input archive table
std::tuple<std::vector<double>, std::vector<double> > inputTable(const char *ArchiveFile){
  std::tuple<std::vector<double> peaks, std::vector<double> widths> inputs;
  std::vector<double> peaks;
  std::vector<double> widths;
  FILE *fC = fopen(ArchiveFile, "r");
	if ( fC == NULL) {
		std::cout<<"[In inputTable()] : Error: Cannot open file "<<std::endl;
		exit(1);
	}
	float peak, width;
	n=0;
	while(fscanf(fC, "%f,%f\n", &peak, &width)!=EOF){
		peaks.push_back(peak);
		widths.push_back(width);
	}
	fclose(fC);
  inputs = std::make_tuple(peaks, widths);
  return inputs;
//Table should be a class
}

void addTable(){
//adds a Table of a given type to a list of tables to include in the calculation
}
void outputTable(){
//returns final table in .txt form
}

void combineAlg(){
// called by main function, this funciton does the hard work
}

int main(){
  std::cout<<"testing"<<std::endl;
  return 0;
}
