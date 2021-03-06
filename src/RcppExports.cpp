// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "Rblpapi_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// authenticate_Impl
SEXP authenticate_Impl(SEXP con_, SEXP uuid_, SEXP ip_address_);
RcppExport SEXP Rblpapi_authenticate_Impl(SEXP con_SEXP, SEXP uuid_SEXP, SEXP ip_address_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type uuid_(uuid_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ip_address_(ip_address_SEXP);
    rcpp_result_gen = Rcpp::wrap(authenticate_Impl(con_, uuid_, ip_address_));
    return rcpp_result_gen;
END_RCPP
}
// bdh_Impl
Rcpp::List bdh_Impl(SEXP con_, std::vector<std::string> securities, std::vector<std::string> fields, std::string start_date_, SEXP end_date_, SEXP options_, SEXP overrides_, bool verbose, SEXP identity_);
RcppExport SEXP Rblpapi_bdh_Impl(SEXP con_SEXP, SEXP securitiesSEXP, SEXP fieldsSEXP, SEXP start_date_SEXP, SEXP end_date_SEXP, SEXP options_SEXP, SEXP overrides_SEXP, SEXP verboseSEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fields(fieldsSEXP);
    Rcpp::traits::input_parameter< std::string >::type start_date_(start_date_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type end_date_(end_date_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type overrides_(overrides_SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    rcpp_result_gen = Rcpp::wrap(bdh_Impl(con_, securities, fields, start_date_, end_date_, options_, overrides_, verbose, identity_));
    return rcpp_result_gen;
END_RCPP
}
// bdp_Impl
Rcpp::List bdp_Impl(SEXP con_, std::vector<std::string> securities, std::vector<std::string> fields, SEXP options_, SEXP overrides_, bool verbose, SEXP identity_);
RcppExport SEXP Rblpapi_bdp_Impl(SEXP con_SEXP, SEXP securitiesSEXP, SEXP fieldsSEXP, SEXP options_SEXP, SEXP overrides_SEXP, SEXP verboseSEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fields(fieldsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type overrides_(overrides_SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    rcpp_result_gen = Rcpp::wrap(bdp_Impl(con_, securities, fields, options_, overrides_, verbose, identity_));
    return rcpp_result_gen;
END_RCPP
}
// bds_Impl
Rcpp::List bds_Impl(SEXP con_, std::vector<std::string> securities, std::string field, SEXP options_, SEXP overrides_, bool verbose, SEXP identity_);
RcppExport SEXP Rblpapi_bds_Impl(SEXP con_SEXP, SEXP securitiesSEXP, SEXP fieldSEXP, SEXP options_SEXP, SEXP overrides_SEXP, SEXP verboseSEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::string >::type field(fieldSEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type overrides_(overrides_SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    rcpp_result_gen = Rcpp::wrap(bds_Impl(con_, securities, field, options_, overrides_, verbose, identity_));
    return rcpp_result_gen;
END_RCPP
}
// getPortfolio_Impl
Rcpp::List getPortfolio_Impl(SEXP con_, std::vector<std::string> securities, std::string field, SEXP options_, SEXP overrides_, bool verbose, SEXP identity_);
RcppExport SEXP Rblpapi_getPortfolio_Impl(SEXP con_SEXP, SEXP securitiesSEXP, SEXP fieldSEXP, SEXP options_SEXP, SEXP overrides_SEXP, SEXP verboseSEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::string >::type field(fieldSEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type overrides_(overrides_SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    rcpp_result_gen = Rcpp::wrap(getPortfolio_Impl(con_, securities, field, options_, overrides_, verbose, identity_));
    return rcpp_result_gen;
END_RCPP
}
// beqs_Impl
DataFrame beqs_Impl(SEXP con, std::string screenName, std::string screenType, std::string group, std::string pitdate, std::string languageId, bool verbose);
RcppExport SEXP Rblpapi_beqs_Impl(SEXP conSEXP, SEXP screenNameSEXP, SEXP screenTypeSEXP, SEXP groupSEXP, SEXP pitdateSEXP, SEXP languageIdSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type screenName(screenNameSEXP);
    Rcpp::traits::input_parameter< std::string >::type screenType(screenTypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type pitdate(pitdateSEXP);
    Rcpp::traits::input_parameter< std::string >::type languageId(languageIdSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(beqs_Impl(con, screenName, screenType, group, pitdate, languageId, verbose));
    return rcpp_result_gen;
END_RCPP
}
// blpConnect_Impl
SEXP blpConnect_Impl(const std::string host, const int port);
RcppExport SEXP Rblpapi_blpConnect_Impl(SEXP hostSEXP, SEXP portSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< const int >::type port(portSEXP);
    rcpp_result_gen = Rcpp::wrap(blpConnect_Impl(host, port));
    return rcpp_result_gen;
END_RCPP
}
// getHeaderVersion
std::string getHeaderVersion();
RcppExport SEXP Rblpapi_getHeaderVersion() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getHeaderVersion());
    return rcpp_result_gen;
END_RCPP
}
// getRuntimeVersion
std::string getRuntimeVersion();
RcppExport SEXP Rblpapi_getRuntimeVersion() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getRuntimeVersion());
    return rcpp_result_gen;
END_RCPP
}
// bsrch_Impl
DataFrame bsrch_Impl(SEXP con, std::string domain, std::string limit, bool verbose);
RcppExport SEXP Rblpapi_bsrch_Impl(SEXP conSEXP, SEXP domainSEXP, SEXP limitSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type domain(domainSEXP);
    Rcpp::traits::input_parameter< std::string >::type limit(limitSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(bsrch_Impl(con, domain, limit, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fieldSearch_Impl
Rcpp::DataFrame fieldSearch_Impl(SEXP con, std::string searchterm, std::string excludeterm);
RcppExport SEXP Rblpapi_fieldSearch_Impl(SEXP conSEXP, SEXP searchtermSEXP, SEXP excludetermSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type searchterm(searchtermSEXP);
    Rcpp::traits::input_parameter< std::string >::type excludeterm(excludetermSEXP);
    rcpp_result_gen = Rcpp::wrap(fieldSearch_Impl(con, searchterm, excludeterm));
    return rcpp_result_gen;
END_RCPP
}
// getBars_Impl
Rcpp::DataFrame getBars_Impl(SEXP con, std::string security, std::string eventType, int barInterval, std::string startDateTime, std::string endDateTime, Rcpp::Nullable<Rcpp::CharacterVector> options, bool verbose);
RcppExport SEXP Rblpapi_getBars_Impl(SEXP conSEXP, SEXP securitySEXP, SEXP eventTypeSEXP, SEXP barIntervalSEXP, SEXP startDateTimeSEXP, SEXP endDateTimeSEXP, SEXP optionsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type security(securitySEXP);
    Rcpp::traits::input_parameter< std::string >::type eventType(eventTypeSEXP);
    Rcpp::traits::input_parameter< int >::type barInterval(barIntervalSEXP);
    Rcpp::traits::input_parameter< std::string >::type startDateTime(startDateTimeSEXP);
    Rcpp::traits::input_parameter< std::string >::type endDateTime(endDateTimeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(getBars_Impl(con, security, eventType, barInterval, startDateTime, endDateTime, options, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fieldInfo_Impl
Rcpp::List fieldInfo_Impl(SEXP con_, std::vector<std::string> fields);
RcppExport SEXP Rblpapi_fieldInfo_Impl(SEXP con_SEXP, SEXP fieldsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fields(fieldsSEXP);
    rcpp_result_gen = Rcpp::wrap(fieldInfo_Impl(con_, fields));
    return rcpp_result_gen;
END_RCPP
}
// getTicks_Impl
Rcpp::DataFrame getTicks_Impl(SEXP con, std::string security, std::vector<std::string> eventType, std::string startDateTime, std::string endDateTime, bool setCondCodes, bool verbose);
RcppExport SEXP Rblpapi_getTicks_Impl(SEXP conSEXP, SEXP securitySEXP, SEXP eventTypeSEXP, SEXP startDateTimeSEXP, SEXP endDateTimeSEXP, SEXP setCondCodesSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type security(securitySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventType(eventTypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type startDateTime(startDateTimeSEXP);
    Rcpp::traits::input_parameter< std::string >::type endDateTime(endDateTimeSEXP);
    Rcpp::traits::input_parameter< bool >::type setCondCodes(setCondCodesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(getTicks_Impl(con, security, eventType, startDateTime, endDateTime, setCondCodes, verbose));
    return rcpp_result_gen;
END_RCPP
}
// subscribe_Impl
SEXP subscribe_Impl(SEXP con_, std::vector<std::string> securities, std::vector<std::string> fields, Rcpp::Function fun, SEXP options_, SEXP identity_);
RcppExport SEXP Rblpapi_subscribe_Impl(SEXP con_SEXP, SEXP securitiesSEXP, SEXP fieldsSEXP, SEXP funSEXP, SEXP options_SEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type con_(con_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fields(fieldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    rcpp_result_gen = Rcpp::wrap(subscribe_Impl(con_, securities, fields, fun, options_, identity_));
    return rcpp_result_gen;
END_RCPP
}
