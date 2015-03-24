/*
*	New C++ Header  File starts here.
*	This file should be named nml_test_format_n_codegen_protos.hh
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  generate_for_all_langs=true HHFile=nml_test_format.hh
*
*	.gen script :
*		0:load nml_test_format.hh
*		1:clear
*		2:select_from_file nml_test_format.hh
*		3:generate C protos>nml_test_format_c_n.h
*		4:generate C format>nml_test_format_c_n.c
*		5:generate C update>nml_test_format_c_n.c
*		6:generate C++ protos>nml_test_format_n_codegen_protos.hh
*		7:generate C++ format>nml_test_format_n.cc
*		8:generate C++ update>nml_test_format_n.cc
*		9:generate C++ constructor>nml_test_format_n.cc
*		10:generate Java dict>nml_test_format_MsgDict.java
*		11:generate Java classes >*
*		12:generate Ada spec>nml_test_format_n_ada.ads
*		13:generate Ada body>nml_test_format_n_ada.adb
*		14:exit
*
*/

#ifndef nml_test_format_n_codegen_protos_hh_included
#define nml_test_format_n_codegen_protos_hh_included

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "nml_test_format.hh"
#include "otherheader.hh"

// Forward Function Prototypes
extern void nmlupdate(CMS *cms, teststruct_td2 *x);
extern void initialize_teststruct_td2(teststruct_td2 *x);
extern void nmlupdate(CMS *cms, struct c_struct2 *x);
extern void nmlupdate(CMS *cms, c_struct *x);
extern void initialize_c_struct(c_struct *x);
extern void nmlupdate(CMS *cms, struct struct_from_other_header *x);
extern void nmlupdate(CMS *cms, struct fwLaserStruct *x);
extern void nmlupdate(CMS *cms, teststruct *x);
extern void initialize_teststruct(teststruct *x);
extern void nmlupdate(CMS *cms, struct c_struct *x);
extern void nmlupdate(CMS *cms, PmCartesian *x);
extern void nmlupdate(CMS *cms, c_struct2 *x);
extern void initialize_c_struct2(c_struct2 *x);
extern void nmlupdate(CMS *cms, fwLaserStruct *x);
extern void initialize_fwLaserStruct(fwLaserStruct *x);


#ifndef MAX_NML_TEST_NAME_LENGTH
#define MAX_NML_TEST_NAME_LENGTH 18
#endif
#ifndef NML_TEST_NAME_LIST_LENGTH
#define NML_TEST_NAME_LIST_LENGTH 8
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
extern const NMLTYPE nml_test_id_list[NML_TEST_NAME_LIST_LENGTH];
extern const size_t nml_test_size_list[NML_TEST_NAME_LIST_LENGTH];
extern const char nml_test_name_list[NML_TEST_NAME_LIST_LENGTH][MAX_NML_TEST_NAME_LENGTH];
extern const char *nml_test_symbol_lookup(long type);


// Enumerated Type Constants

// RCS_ADMIN_STATE
#ifndef MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH
#define MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH 20
#endif
	/* MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH */
#ifndef ENUM_RCS_ADMIN_STATE_LENGTH
#define ENUM_RCS_ADMIN_STATE_LENGTH 5
#endif
	/* ENUM_RCS_ADMIN_STATE_LENGTH */

extern const char *nml_test_enum_RCS_ADMIN_STATE_symbol_lookup(long v);

// enumtest_typedef
#ifndef MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH
#define MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH 4
#endif
	/* MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH */
#ifndef ENUM_ENUMTEST_TYPEDEF_LENGTH
#define ENUM_ENUMTEST_TYPEDEF_LENGTH 4
#endif
	/* ENUM_ENUMTEST_TYPEDEF_LENGTH */

extern const char *nml_test_enum_enumtest_typedef_symbol_lookup(long v);

// RCS_STATUS
#ifndef MAX_ENUM_RCS_STATUS_STRING_LENGTH
#define MAX_ENUM_RCS_STATUS_STRING_LENGTH 21
#endif
	/* MAX_ENUM_RCS_STATUS_STRING_LENGTH */
#ifndef ENUM_RCS_STATUS_LENGTH
#define ENUM_RCS_STATUS_LENGTH 5
#endif
	/* ENUM_RCS_STATUS_LENGTH */

extern const char *nml_test_enum_RCS_STATUS_symbol_lookup(long v);

// enumtest3ftoh
#ifndef MAX_ENUM_ENUMTEST3FTOH_STRING_LENGTH
#define MAX_ENUM_ENUMTEST3FTOH_STRING_LENGTH 4
#endif
	/* MAX_ENUM_ENUMTEST3FTOH_STRING_LENGTH */
#ifndef ENUM_ENUMTEST3FTOH_LENGTH
#define ENUM_ENUMTEST3FTOH_LENGTH 4
#endif
	/* ENUM_ENUMTEST3FTOH_LENGTH */

extern const char *nml_test_enum_enumtest3ftoh_symbol_lookup(long v);

// enumtest_typedef2
#ifndef MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH
#define MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH 4
#endif
	/* MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH */
#ifndef ENUM_ENUMTEST_TYPEDEF2_LENGTH
#define ENUM_ENUMTEST_TYPEDEF2_LENGTH 4
#endif
	/* ENUM_ENUMTEST_TYPEDEF2_LENGTH */

extern const char *nml_test_enum_enumtest_typedef2_symbol_lookup(long v);

// enumtest
#ifndef MAX_ENUM_ENUMTEST_STRING_LENGTH
#define MAX_ENUM_ENUMTEST_STRING_LENGTH 4
#endif
	/* MAX_ENUM_ENUMTEST_STRING_LENGTH */
#ifndef ENUM_ENUMTEST_LENGTH
#define ENUM_ENUMTEST_LENGTH 8
#endif
	/* ENUM_ENUMTEST_LENGTH */

extern const char *nml_test_enum_enumtest_symbol_lookup(long v);

// anonymous_enum_nml_test_format_hh_82
#ifndef MAX_ENUM_ANONYMOUS_ENUM_NML_TEST_FORMAT_HH_82_STRING_LENGTH
#define MAX_ENUM_ANONYMOUS_ENUM_NML_TEST_FORMAT_HH_82_STRING_LENGTH 18
#endif
	/* MAX_ENUM_ANONYMOUS_ENUM_NML_TEST_FORMAT_HH_82_STRING_LENGTH */
#ifndef ENUM_ANONYMOUS_ENUM_NML_TEST_FORMAT_HH_82_LENGTH
#define ENUM_ANONYMOUS_ENUM_NML_TEST_FORMAT_HH_82_LENGTH 20
#endif
	/* ENUM_ANONYMOUS_ENUM_NML_TEST_FORMAT_HH_82_LENGTH */

extern const char *nml_test_enum_anonymous_enum_nml_test_format_hh_82_symbol_lookup(long v);

extern int nml_test_format(NMLTYPE type, void *buffer, CMS *cms);

#endif
	/* # endif nml_test_format_n_codegen_protos_hh_included */ 
