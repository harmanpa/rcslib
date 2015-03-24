/*
*	New C++ File starts here.
*	This file should be named stat_msg_v2.cc
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  HHFile=stat_msg_v2.hh
*	RCS_VERSION=@(#) RCS_LIBRARY_VERSION: 2009.06.04_1506 Compiled on Fri Jun  5 08:49:50 EDT 2009 for the java platform.
*	$Id: CodeGenCommon.java 1480 2009-05-20 15:19:27Z shackle $
*
*	.gen script :
*		0:load stat_msg_v2.hh
*		1:clear
*		2:select_from_file stat_msg_v2.hh
*		3:generate C++ protos>stat_msg_v2_n_codegen_protos.hh
*		4:generate C++ format>stat_msg_v2_n.cc
*
*/

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "stat_msg_v2.hh"

// Include externally supplied prototypes
#include "stat_msg_v2_n_codegen_protos.hh"



#ifndef MAX_RCS_STAT_MSG_V2_NAME_LENGTH
#define MAX_RCS_STAT_MSG_V2_NAME_LENGTH 1
#endif
#ifndef RCS_STAT_MSG_V2_NAME_LIST_LENGTH
#define RCS_STAT_MSG_V2_NAME_LIST_LENGTH 1
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
const char RCS_STAT_MSG_V2_name_list[RCS_STAT_MSG_V2_NAME_LIST_LENGTH][MAX_RCS_STAT_MSG_V2_NAME_LENGTH]= {
	""};
const NMLTYPE RCS_STAT_MSG_V2_id_list[RCS_STAT_MSG_V2_NAME_LIST_LENGTH]= {
	-1};
const size_t RCS_STAT_MSG_V2_size_list[RCS_STAT_MSG_V2_NAME_LIST_LENGTH]= {
	0};
const char *RCS_STAT_MSG_V2_symbol_lookup(long type);


// Enumerated Type Constants

// RCS_ADMIN_STATE
#ifndef MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH
#define MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH 20
#endif
#ifndef ENUM_RCS_ADMIN_STATE_LENGTH
#define ENUM_RCS_ADMIN_STATE_LENGTH 5
#endif

static const char enum_RCS_ADMIN_STATE_string_list[ENUM_RCS_ADMIN_STATE_LENGTH][MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH]= {
	"ADMIN_INITIALIZED", /* 0,2 */
	"ADMIN_SHUT_DOWN", /* 1,3 */
	"ADMIN_UNINITIALIZED", /* 2,1 */
	"RCS_ADMIN_ZERO", /* 3,0 */
	""};

static const int enum_RCS_ADMIN_STATE_int_list[ENUM_RCS_ADMIN_STATE_LENGTH]= {
	ADMIN_INITIALIZED, /* 0,2 */
	ADMIN_SHUT_DOWN, /* 1,3 */
	ADMIN_UNINITIALIZED, /* 2,1 */
	RCS_ADMIN_ZERO, /* 3,0 */
	};

const char *RCS_STAT_MSG_V2_enum_RCS_ADMIN_STATE_symbol_lookup(long v)
{
	switch(v)
	{
		case ADMIN_INITIALIZED: return("ADMIN_INITIALIZED"); /* 2 */
		case ADMIN_SHUT_DOWN: return("ADMIN_SHUT_DOWN"); /* 3 */
		case ADMIN_UNINITIALIZED: return("ADMIN_UNINITIALIZED"); /* 1 */
		case RCS_ADMIN_ZERO: return("RCS_ADMIN_ZERO"); /* 0 */
		default:break;
	}
	return("!!UNDEFINED_SYMBOL!!");
}

static const struct cms_enum_info enum_RCS_ADMIN_STATE_info_struct={
	"RCS_ADMIN_STATE",
	(const char **)enum_RCS_ADMIN_STATE_string_list,
	enum_RCS_ADMIN_STATE_int_list,
	MAX_ENUM_RCS_ADMIN_STATE_STRING_LENGTH,
	ENUM_RCS_ADMIN_STATE_LENGTH,
	(cms_symbol_lookup_function_t)RCS_STAT_MSG_V2_enum_RCS_ADMIN_STATE_symbol_lookup
	};

// RCS_STATUS
#ifndef MAX_ENUM_RCS_STATUS_STRING_LENGTH
#define MAX_ENUM_RCS_STATUS_STRING_LENGTH 21
#endif
#ifndef ENUM_RCS_STATUS_LENGTH
#define ENUM_RCS_STATUS_LENGTH 5
#endif

static const char enum_RCS_STATUS_string_list[ENUM_RCS_STATUS_LENGTH][MAX_ENUM_RCS_STATUS_STRING_LENGTH]= {
	"RCS_DONE", /* 0,1 */
	"RCS_ERROR", /* 1,3 */
	"RCS_EXEC", /* 2,2 */
	"UNINITIALIZED_STATUS", /* 3,-1 */
	""};

static const int enum_RCS_STATUS_int_list[ENUM_RCS_STATUS_LENGTH]= {
	RCS_DONE, /* 0,1 */
	RCS_ERROR, /* 1,3 */
	RCS_EXEC, /* 2,2 */
	UNINITIALIZED_STATUS, /* 3,-1 */
	};

const char *RCS_STAT_MSG_V2_enum_RCS_STATUS_symbol_lookup(long v)
{
	switch(v)
	{
		case RCS_DONE: return("RCS_DONE"); /* 1 */
		case RCS_ERROR: return("RCS_ERROR"); /* 3 */
		case RCS_EXEC: return("RCS_EXEC"); /* 2 */
		case UNINITIALIZED_STATUS: return("UNINITIALIZED_STATUS"); /* -1 */
		default:break;
	}
	return("!!UNDEFINED_SYMBOL!!");
}

static const struct cms_enum_info enum_RCS_STATUS_info_struct={
	"RCS_STATUS",
	(const char **)enum_RCS_STATUS_string_list,
	enum_RCS_STATUS_int_list,
	MAX_ENUM_RCS_STATUS_STRING_LENGTH,
	ENUM_RCS_STATUS_LENGTH,
	(cms_symbol_lookup_function_t)RCS_STAT_MSG_V2_enum_RCS_STATUS_symbol_lookup
	};

/*
Estimated_size	RCS_STAT_MSG_V2	296
Estimated_size	MAXIMUM	296
*/
/*
*	NML/CMS Format function : RCS_STAT_MSG_V2_format
*/
int RCS_STAT_MSG_V2_format(NMLTYPE type, void *buffer, CMS *cms)
{

	type = cms->check_type_info(type,buffer,"RCS_STAT_MSG_V2",
		(cms_symbol_lookup_function_t) RCS_STAT_MSG_V2_symbol_lookup,
		(const char **)RCS_STAT_MSG_V2_name_list,
		RCS_STAT_MSG_V2_id_list,RCS_STAT_MSG_V2_size_list,
		RCS_STAT_MSG_V2_NAME_LIST_LENGTH,
		MAX_RCS_STAT_MSG_V2_NAME_LENGTH);

	return 1;
}


// NML Symbol Lookup Function
const char *RCS_STAT_MSG_V2_symbol_lookup(long)
{
	return(NULL);
}

/*
*	NML/CMS Update function for RCS_STAT_MSG_V2
*	from stat_msg_v2.hh:0
*/
void RCS_STAT_MSG_V2::update(CMS *cms)
{

	cms->beginClass("RCS_STAT_MSG_V2","RCS_STAT_MSG");

	RCS_STAT_MSG::update_stat_msg_base(cms);
	cms->next_update_default("ADMIN_UNINITIALIZED");
	admin_state= (enum RCS_ADMIN_STATE) cms->update_enumeration_with_name("admin_state", (int)admin_state,(void*)&admin_state,&enum_RCS_ADMIN_STATE_info_struct);
	cms->beginClassVar("tt");
	nmlupdate(cms,((struct time_tracker *)&tt));
	cms->endClassVar("tt");
	cms->update_dla_length_with_name("message_length",message_length);
	cms->update_dla_with_name("message",message,message_length,80);

	cms->endClass("RCS_STAT_MSG_V2","RCS_STAT_MSG");

}
