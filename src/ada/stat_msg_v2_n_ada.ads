--
--	New Ada Spec File starts here.
--	This file should be named stat_msg_v2_n_ada.ads
--	Automatically generated by NML CodeGen Java Applet.
--	on Sat Mar 25 18:51:52 EST 2006
--

with Nml_Msg; use Nml_Msg;
with Cms;

with Posemath_N_Ada;  use Posemath_N_Ada;

-- Include other package files  that contain message definitions we might need.
with stat_msg_n_ada; use stat_msg_n_ada;
with timetracker_n_ada; use timetracker_n_ada;

--	Some standard Ada Packages we always need.
with Unchecked_Deallocation;
with Unchecked_Conversion;
with Interfaces.C; use Interfaces.C;

package stat_msg_v2_n_ada is

	-- Create Ada versions of the Enumeration types.
	type RCS_STATE is (
		Bad_RCS_STATE_Value,
		S39, -- 39
		S38, -- 38
		S37, -- 37
		S36, -- 36
		S35, -- 35
		S34, -- 34
		S33, -- 33
		UNINITIALIZED_STATE, -- -1
		S32, -- 32
		S31, -- 31
		S30, -- 30
		SE9, -- -19
		SE8, -- -18
		NEW_COMMAND, -- -2
		SE7, -- -17
		SE6, -- -16
		S9, -- 9
		SE5, -- -15
		S8, -- 8
		SE4, -- -14
		S7, -- 7
		SE3, -- -13
		S6, -- 6
		SE2, -- -12
		S5, -- 5
		SE1, -- -11
		S4, -- 4
		SE0, -- -10
		S3, -- 3
		S2, -- 2
		S1, -- 1
		S0, -- 0
		S29, -- 29
		S28, -- 28
		S27, -- 27
		S26, -- 26
		S25, -- 25
		S24, -- 24
		S23, -- 23
		S22, -- 22
		S21, -- 21
		S20, -- 20
		NOP_STATE, -- -3
		S19, -- 19
		S18, -- 18
		S17, -- 17
		S16, -- 16
		S15, -- 15
		S14, -- 14
		S13, -- 13
		S12, -- 12
		S11, -- 11
		S10 --10
		);
	type RCS_STATE_Array is array(Integer range <>) of RCS_STATE;

	function Format(Nml_Type : in long;
			Msg : in NmlMsg_Access;
			Cms_Ptr : in Cms.Cms_Access)
				return int;

	pragma Export(C,Format,"ada_stat_msg_v2_n_ada_format");


	-- Redefine the C++ NML message classes as Ada Records.

	type RCS_STAT_MSG_V2 is new RCS_STAT_MSG with 
		record
			admin_state : RCS_ADMIN_STATE;
			tt : time_tracker;
			message_length : int;
			message : Char_Array(1..80); -- NML_DYNAMIC_LENGTH_ARRAY -- 
		end record;

	type RCS_STAT_MSG_V2_Access is access all RCS_STAT_MSG_V2;
	procedure Update_Internal_RCS_STAT_MSG_V2(Cms_Ptr : in Cms.Cms_Access; Msg : in out RCS_STAT_MSG_V2);
	procedure Free is new Unchecked_Deallocation(RCS_STAT_MSG_V2,RCS_STAT_MSG_V2_Access);
	type RCS_STAT_MSG_V2_Array is array(Integer range <>) of RCS_STAT_MSG_V2;


end stat_msg_v2_n_ada;

-- End of Ada spec file  stat_msg_v2_n_ada.ads

