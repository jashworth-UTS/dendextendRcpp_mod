// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Rcpp_cut_lower
std::vector<RObject> Rcpp_cut_lower(List x, double height, bool nodes_into_dend = true);
RcppExport SEXP dendextendRcpp_Rcpp_cut_lower(SEXP xSEXP, SEXP heightSEXP, SEXP nodes_into_dendSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type height(heightSEXP );
        Rcpp::traits::input_parameter< bool >::type nodes_into_dend(nodes_into_dendSEXP );
        std::vector<RObject> __result = Rcpp_cut_lower(x, height, nodes_into_dend);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Rcpp_get_dend_heights
std::vector<double> Rcpp_get_dend_heights(List x, bool labels_heights = false, bool branches_heights = true);
RcppExport SEXP dendextendRcpp_Rcpp_get_dend_heights(SEXP xSEXP, SEXP labels_heightsSEXP, SEXP branches_heightsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< bool >::type labels_heights(labels_heightsSEXP );
        Rcpp::traits::input_parameter< bool >::type branches_heights(branches_heightsSEXP );
        std::vector<double> __result = Rcpp_get_dend_heights(x, labels_heights, branches_heights);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Rcpp_k_per_height
int Rcpp_k_per_height(List x, double height);
RcppExport SEXP dendextendRcpp_Rcpp_k_per_height(SEXP xSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type height(heightSEXP );
        int __result = Rcpp_k_per_height(x, height);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Rcpp_k_per_heights
IntegerVector Rcpp_k_per_heights(List x, NumericVector heights);
RcppExport SEXP dendextendRcpp_Rcpp_k_per_heights(SEXP xSEXP, SEXP heightsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type heights(heightsSEXP );
        IntegerVector __result = Rcpp_k_per_heights(x, heights);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// is_list
bool is_list(RObject x);
RcppExport SEXP dendextendRcpp_is_list(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type x(xSEXP );
        bool __result = is_list(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// is_leaf
bool is_leaf(RObject x);
RcppExport SEXP dendextendRcpp_is_leaf(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type x(xSEXP );
        bool __result = is_leaf(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Rcpp_labels_dendrogram
std::vector<std::string> Rcpp_labels_dendrogram(List x);
RcppExport SEXP dendextendRcpp_Rcpp_labels_dendrogram(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        std::vector<std::string> __result = Rcpp_labels_dendrogram(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Rcpp_count_leaves
int Rcpp_count_leaves(List data);
RcppExport SEXP dendextendRcpp_Rcpp_count_leaves(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type data(dataSEXP );
        int __result = Rcpp_count_leaves(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
