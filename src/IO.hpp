/*
  Author: Jimmie Goode
  Created: 2012-09-01
*/

#ifndef __IO_HPP__
#define __IO_HPP__

#include <vector>
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>

#include <boost/tokenizer.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>

#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_blas.h>

#include <armadillo>

using namespace std;
// using namespace elem;
// using namespace arma;

class IO {

public:
  static gsl_matrix* importCSVmatrix(const string file);
  static void exportGslMatrix(const gsl_matrix *mat, const string fname);
  //static boost::tuple<gsl_matrix *,gsl_matrix *> importCopulaPars(string fbase);
  static void printMatrix(gsl_matrix* mat);
  static void exportGslVector(gsl_vector* vec, string filename);
  //static void exportDoubleArray(double * arr, string filename, int length);
  
  //static DistMatrix<double, STAR, VC> arma2distMat(string fname, arma::file_type type, elem::Grid grid);

};




#endif
