#define ON 1
#define OFF 0
#define unsigned short int WORD
#define EXTERNVAR
#define LOCALVAR

#define BUS_0 0
#define BUS_1 1
#define SS1 1
#define SS3 3
#define SS4 4
#define SS5 5
#define SS6 6

/* Declare all required variables */
int event;
float time0;
float time_OOC;
float timeBDSep_N;
float timeBDSep_Rep;
float timeBDSep_N_Withdraw;
float timeBDSep_Rep_Withdraw;
float timeBDSep_Sensed;
float timeContactor_ON_L1_N;
float timeContactor_ON_L1_Rep;
float timeContactor_ON_ADC_N;
float timeContactor_ON_ADC_Rep;
float timeContactor_L1_ON_N_Withdraw;
float timeContactor_L1_ON_Rep_Withdraw;
float timeContactor_ON_ADC_N_Withdraw;
float timeContactor_ON_ADC_Rep_Withdraw;
float timeL1_ON_N;
float timeL1_ON_Rep;
float timeL1_ON_N_Withdraw;
float timeL1_ON_Rep_Withdraw;
float time_Control_Start;
float time_Control_Stop;
float time_L1_Tail_Off;
float timeL1_SS_ON_N;
float timeL1_SS_ON_Rep;
float timeL1_SS_ON_Withdraw_N;
float timeL1_SS_ON_Withdraw_Rep;
float timeL1_Sep_Sensing;
float timeGV_Attitude_Control;
float timeL2_Booster_ON_N;
float timeL2_Booster_ON_Rep;
float timeL2_Booster_Withdraw_N;
float timeL2_Booster_Withdraw_Rep;
float time_L2_Tail_Off;
float timeSeeker_Power_ON_N;
float timeSeeker_Power_ON_N_Withdraw;
float timeHS_Pyro_Bolt;
float timeHS_Pyro_Pusher;
float timeHS_Pyro_Bolt_OFF;
float timeHS_Pyro_Pusher_OFF;
float timeHS_Seperation_Sensing;
float timeWH_Arming_N;
float timeWH_Arming_Rep;
float timeRA_Transmitter_ON;
float timeWH_detonation_N;
float timeWH_detonation_N_Withdraw;
float timeEnd;
float None;
float timeOOC;
float timeBM1_Ignition_N;
float timeBM1_Ignition_R;
float timeBM1_Ignition_Withdraw_N;
float timeBM1_Ignition_Withdraw_R;
float timeGFUF_ON_N;
float timeGFUF_ON_R;
float timeGFUF_ON_Withdraw_N;
float timeGFUF_ON_Withdraw_R;
float timeBM2_Ignition_R;
float timeBM2_Ignition_Withdraw_N;
float timeBM2_Ignition_Withdraw_R;
float timeAPUCM_Ignition_R;
float timeAPUCM_Ignition_Withdraw_N;
float timeAPUCM_Ignition_Withdraw_R;
float timeBD_Tail_Off_Sensed;
float timeBD_Seperation_ON_N;
float timeBD_Separation_ON_R;
float timeBD_Separation_ON_Withdraw_N;
float timeBD_Separation_ON_Withdraw_R;
float timeBD_Separation_Sensed;
float timeBD_Isolation_OFF;
float timeBD_Isolation_OFF_Withdraw;
float timeS1_Nozzle_Unlock_ON_N;
float timeS1_Nozzle_Unlock_ON_R;
float timeS1_Nozzle_Unlock_ON_Withdraw_N;
float timeS1_Nozzle_Unlock_ON_WIthdraw_R;
float timeS1_Ignition_ON_N;
float timeS1_Ignition_ON_R;
float timeS1_Ignition_ON_Withdraw_N;
float timeS1_Ignition_ON_Withdraw_R;
float timeS1_FNC_Start;
float timeS1_Isolation_ON;
float timeS1_Isolation_ON_Withdraw;
float timeS2_Nozzle_Unlock_ON_N;
float timeS2_Nozzle_Unlock_ON_R;
float timeS2_Nozzle_Unlock_ON_Withdraw_N;
float timeS2_Nozzle_Unlock_ON_Withdraw_R;
float timeS2_Ignition_ON_N;

float Axb;
float MODECODE;
float NAV2Cmd;
float Rgo;
float Sensed;
float Sensing;
float h;
float h0;
float s2;
float timeAPUCM_Ignition_N;
float timeBDSepSensed;
float timeBD_Separation_ON_N;
float timeBM2_Ignition_N;
float timeContactor_ADC_ON_N;
float timeContactor_L1_ON_N;
float timeContactor_L1_ON_Rep;
float timeContactor_ON_L1;
float timeFlight;
float timeIGPhase4;
float timeImpact_200;
float timeL1Sep;
float timeL1_Sep;
float timeL1_Tail_Off;
float timeL2_Delay;
float timeS1_Ignition_N;
float timeS1_Ignition_R;
float timeS1_Separation_Sensed;

/* Function prototypes */
int condition1forEvent1(); // TODO: Define this function - currently only declared
int condition1forEvent67(); // TODO: Define this function - currently only declared
int condition2forEvent21(); // TODO: Define this function - currently only declared
int condition2forEvent22(); // TODO: Define this function - currently only declared
int condition2forEvent33(); // TODO: Define this function - currently only declared
int condition2forEvent61(); // TODO: Define this function - currently only declared
int issueNullCommand10(); // TODO: Define this function - currently only declared
int issueNullCommand11(); // TODO: Define this function - currently only declared
int issueNullCommand8(); // TODO: Define this function - currently only declared
int issueNullCommand9(); // TODO: Define this function - currently only declared
int processDips1Event2(); // TODO: Define this function - currently only declared
int processDips1Event27(); // TODO: Define this function - currently only declared
int processDips1Event40(); // TODO: Define this function - currently only declared
int processDips1Event61(); // TODO: Define this function - currently only declared
int processDips1Event62(); // TODO: Define this function - currently only declared
int processDips1Event7(); // TODO: Define this function - currently only declared
int processDips1Event83(); // TODO: Define this function - currently only declared
int processDips2Event62(); // TODO: Define this function - currently only declared

/* Placeholder functions for condition checks */

/* condition1forEvent1
 * Purpose: Sensing Avg. | Axb|>11.792 (1.2) m/s2 over 5 consecutive samples @ 10
 */
int condition1forEvent1() {
    // Sensing Avg. | Axb|>11.792 (1.2) m/s2 over 5 consecutive samples @ 10
    // return 1;
}
/* processDips1Event2
 * Purpose: 3 consecutive samples @ 10 of DIP 30==1 & DIP 31==0 (OOC1) DIP 32==1 & DIP 33==0 (OOC2) DIP 34==1 & DIP 35==0 (OOC3) DIP 36==1 & DIP 37==0 (OOC4) Of CCSC using following logic
 */
bool processDips1Event2() {
    // 3 consecutive samples @ 10 of DIP 30==1 & DIP 31==0 (OOC1) DIP 32==1 & DIP 33==0 (OOC2) DIP 34==1 & DIP 35==0 (OOC3) DIP 36==1 & DIP 37==0 (OOC4) Of CCSC using following logic
    // return 1;
}
/* processDips1Event7
 * Purpose: 3 consecutive samples @ 10 of CCSC DIP # 24,26,12,13 using 2/4 logic
 */
bool processDips1Event7() {
    // 3 consecutive samples @ 10 of CCSC DIP # 24,26,12,13 using 2/4 logic
    // return 1;
}
/* condition2forEvent21
 * Purpose: Avg Axb<=5/s2 over 5 consecutive samples @ 10
 */
int condition2forEvent21() {
    // Avg Axb<=5/s2 over 5 consecutive samples @ 10
    // return 1;
}
/* condition2forEvent22
 * Purpose: Avg Axb<=1.0/s2 over 5 consecutive samples @ 10
 */
int condition2forEvent22() {
    // Avg Axb<=1.0/s2 over 5 consecutive samples @ 10
    // return 1;
}
/* processDips1Event27
 * Purpose: 2/4 DIPs of MIU RT#3 DIP# 08,09,29,30
 */
bool processDips1Event27() {
    // 2/4 DIPs of MIU RT#3 DIP# 08,09,29,30
    // return 1;
}
/* condition2forEvent33
 * Purpose: Avg Axb<=1.0/s2 over 5 consecutive samples @ 10
 */
int condition2forEvent33() {
    // Avg Axb<=1.0/s2 over 5 consecutive samples @ 10
    // return 1;
}
/* processDips1Event40
 * Purpose: 2/2 DIPs of 35,36 of IAU
 */
bool processDips1Event40() {
    // 2/2 DIPs of 35,36 of IAU
    // return 1;
}
/* condition2forEvent61
 * Purpose: Sensing Avg Axb sensed>30.0/s2 over 5 consecutive samples @ 10
 */
int condition2forEvent61() {
    // Sensing Avg Axb sensed>30.0/s2 over 5 consecutive samples @ 10
    // return 1;
}
/* processDips1Event61
 * Purpose: Primary Umbilical De-mating: 3 consecutive samples @10 of DIP #10,11 & 12 of MIU using 2/3 logic
 */
bool processDips1Event61() {
    // Primary Umbilical De-mating: 3 consecutive samples @10 of DIP #10,11 & 12 of MIU using 2/3 logic
    // return 1;
}
/* processDips2Event62
 * Purpose: 3 consecutive samples @ 10 of DIP# 6,7 of MIU-1 using 2/2 logic
 */
bool processDips2Event62() {
    // 3 consecutive samples @ 10 of DIP# 6,7 of MIU-1 using 2/2 logic
    // return 1;
}
/* processDips1Event62
 * Purpose: OOC Sensing: (3 consecutive samples @ 10 of 3 OOC’s DIP@ 0,1,2 using 2/3 logic)
 */
bool processDips1Event62() {
    // OOC Sensing: (3 consecutive samples @ 10 of 3 OOC’s DIP@ 0,1,2 using 2/3 logic)
    // return 1;
}
/* condition1forEvent67
 * Purpose: (timeFlight>=(timeOOC +0.200+ timeGFUF_Delay )) timeGFUF_Delay_calculated_by_guidance_for_platform launch(ref. Appendix B) timeGFUF_Delay==0.000 for Ground launch timeGFUF_Delay==0.100 for Pontoon Launch
 */
int condition1forEvent67() {
    // (timeFlight>=(timeOOC +0.200+ timeGFUF_Delay )) timeGFUF_Delay_calculated_by_guidance_for_platform launch(ref. Appendix B) timeGFUF_Delay==0.000 for Ground launch timeGFUF_Delay==0.100 for Pontoon Launch
    // return 1;
}
/* processDips1Event83
 * Purpose: 3 consecutive samples @ 10 of DIP# 19,20,21,22,23 of MIU by 3/5 logic
 */
bool processDips1Event83() {
    // 3 consecutive samples @ 10 of DIP# 19,20,21,22,23 of MIU by 3/5 logic
    // return 1;
}
        /* issueNullCommand8
        * Purpose: Issue null command to actuators for event 8
        */
        void issueNullCommand8() {
            // TODO: Implement null command logic for event 8
        }
        /* issueNullCommand9
        * Purpose: Issue null command to actuators for event 9
        */
        void issueNullCommand9() {
            // TODO: Implement null command logic for event 9
        }
        /* issueNullCommand10
        * Purpose: Issue null command to actuators for event 10
        */
        void issueNullCommand10() {
            // TODO: Implement null command logic for event 10
        }
        /* issueNullCommand11
        * Purpose: Issue null command to actuators for event 11
        */
        void issueNullCommand11() {
            // TODO: Implement null command logic for event 11
        }

void interface() {
    // Axb = external_Axb;
    // MODECODE = external_MODECODE;
    // NAV2Cmd = external_NAV2Cmd;
    // Rgo = external_Rgo;
    // Sensed = external_Sensed;
    // Sensing = external_Sensing;
    // h = external_h;
    // h0 = external_h0;
    // s2 = external_s2;
    // time0 = external_time0;
    // timeAPUCM_Ignition_N = external_timeAPUCM_Ignition_N;
    // timeAPUCM_Ignition_R = external_timeAPUCM_Ignition_R;
    // timeBDSepSensed = external_timeBDSepSensed;
    // timeBDSep_N = external_timeBDSep_N;
    // timeBDSep_Rep = external_timeBDSep_Rep;
    // timeBDSep_Sensed = external_timeBDSep_Sensed;
    // timeBD_Isolation_OFF = external_timeBD_Isolation_OFF;
    // timeBD_Separation_ON_N = external_timeBD_Separation_ON_N;
    // timeBD_Separation_ON_R = external_timeBD_Separation_ON_R;
    // timeBD_Separation_Sensed = external_timeBD_Separation_Sensed;
    // timeBD_Tail_Off_Sensed = external_timeBD_Tail_Off_Sensed;
    // timeBM1_Ignition_N = external_timeBM1_Ignition_N;
    // timeBM1_Ignition_R = external_timeBM1_Ignition_R;
    // timeBM2_Ignition_N = external_timeBM2_Ignition_N;
    // timeBM2_Ignition_R = external_timeBM2_Ignition_R;
    // timeContactor_ADC_ON_N = external_timeContactor_ADC_ON_N;
    // timeContactor_L1_ON_N = external_timeContactor_L1_ON_N;
    // timeContactor_L1_ON_Rep = external_timeContactor_L1_ON_Rep;
    // timeContactor_ON_ADC_N = external_timeContactor_ON_ADC_N;
    // timeContactor_ON_ADC_Rep = external_timeContactor_ON_ADC_Rep;
    // timeContactor_ON_L1 = external_timeContactor_ON_L1;
    // timeContactor_ON_L1_Rep = external_timeContactor_ON_L1_Rep;
    // timeFlight = external_timeFlight;
    // timeGFUF_ON_N = external_timeGFUF_ON_N;
    // timeGFUF_ON_R = external_timeGFUF_ON_R;
    // timeHS_Pyro_Bolt = external_timeHS_Pyro_Bolt;
    // timeHS_Pyro_Pusher = external_timeHS_Pyro_Pusher;
    // timeHS_Pyro_Pusher_OFF = external_timeHS_Pyro_Pusher_OFF;
    // timeHS_Seperation_Sensing = external_timeHS_Seperation_Sensing;
    // timeIGPhase4 = external_timeIGPhase4;
    // timeImpact_200 = external_timeImpact_200;
    // timeL1Sep = external_timeL1Sep;
    // timeL1_ON_N = external_timeL1_ON_N;
    // timeL1_ON_Rep = external_timeL1_ON_Rep;
    // timeL1_SS_ON_N = external_timeL1_SS_ON_N;
    // timeL1_SS_ON_Rep = external_timeL1_SS_ON_Rep;
    // timeL1_Sep = external_timeL1_Sep;
    // timeL1_Tail_Off = external_timeL1_Tail_Off;
    // timeL2_Booster_ON_N = external_timeL2_Booster_ON_N;
    // timeL2_Booster_ON_Rep = external_timeL2_Booster_ON_Rep;
    // timeL2_Delay = external_timeL2_Delay;
    // timeOOC = external_timeOOC;
    // timeS1_Ignition_N = external_timeS1_Ignition_N;
    // timeS1_Ignition_ON_N = external_timeS1_Ignition_ON_N;
    // timeS1_Ignition_R = external_timeS1_Ignition_R;
    // timeS1_Isolation_ON = external_timeS1_Isolation_ON;
    // timeS1_Nozzle_Unlock_ON_N = external_timeS1_Nozzle_Unlock_ON_N;
    // timeS1_Nozzle_Unlock_ON_R = external_timeS1_Nozzle_Unlock_ON_R;
    // timeS1_Separation_Sensed = external_timeS1_Separation_Sensed;
    // timeS2_Nozzle_Unlock_ON_N = external_timeS2_Nozzle_Unlock_ON_N;
    // timeS2_Nozzle_Unlock_ON_R = external_timeS2_Nozzle_Unlock_ON_R;
    // timeSeeker_Power_ON_N = external_timeSeeker_Power_ON_N;
    // timeWH_Arming_N = external_timeWH_Arming_N;
    // timeWH_detonation_N = external_timeWH_detonation_N;
}

void init_timevar() {
    event = 1;
    timeFlight = 0.0;
    time0 = 0.0;
    time_OOC = 0.0;
    timeBDSep_N = 0.0;
    timeBDSep_Rep = 0.0;
    timeBDSep_N_Withdraw = 0.0;
    timeBDSep_Rep_Withdraw = 0.0;
    timeBDSep_Sensed = 0.0;
    timeContactor_ON_L1_N = 0.0;
    timeContactor_ON_L1_Rep = 0.0;
    timeContactor_ON_ADC_N = 0.0;
    timeContactor_ON_ADC_Rep = 0.0;
    timeContactor_L1_ON_N_Withdraw = 0.0;
    timeContactor_L1_ON_Rep_Withdraw = 0.0;
    timeContactor_ON_ADC_N_Withdraw = 0.0;
    timeContactor_ON_ADC_Rep_Withdraw = 0.0;
    timeL1_ON_N = 0.0;
    timeL1_ON_Rep = 0.0;
    timeL1_ON_N_Withdraw = 0.0;
    timeL1_ON_Rep_Withdraw = 0.0;
    time_Control_Start = 0.0;
    time_Control_Stop = 0.0;
    time_L1_Tail_Off = 0.0;
    timeL1_SS_ON_N = 0.0;
    timeL1_SS_ON_Rep = 0.0;
    timeL1_SS_ON_Withdraw_N = 0.0;
    timeL1_SS_ON_Withdraw_Rep = 0.0;
    timeL1_Sep_Sensing = 0.0;
    timeGV_Attitude_Control = 0.0;
    timeL2_Booster_ON_N = 0.0;
    timeL2_Booster_ON_Rep = 0.0;
    timeL2_Booster_Withdraw_N = 0.0;
    timeL2_Booster_Withdraw_Rep = 0.0;
    time_L2_Tail_Off = 0.0;
    timeSeeker_Power_ON_N = 0.0;
    timeSeeker_Power_ON_N_Withdraw = 0.0;
    timeHS_Pyro_Bolt = 0.0;
    timeHS_Pyro_Pusher = 0.0;
    timeHS_Pyro_Bolt_OFF = 0.0;
    timeHS_Pyro_Pusher_OFF = 0.0;
    timeHS_Seperation_Sensing = 0.0;
    timeWH_Arming_N = 0.0;
    timeWH_Arming_Rep = 0.0;
    timeRA_Transmitter_ON = 0.0;
    timeWH_detonation_N = 0.0;
    timeWH_detonation_N_Withdraw = 0.0;
    timeEnd = 0.0;
    None = 0.0;
    timeOOC = 0.0;
    timeBM1_Ignition_N = 0.0;
    timeBM1_Ignition_R = 0.0;
    timeBM1_Ignition_Withdraw_N = 0.0;
    timeBM1_Ignition_Withdraw_R = 0.0;
    timeGFUF_ON_N = 0.0;
    timeGFUF_ON_R = 0.0;
    timeGFUF_ON_Withdraw_N = 0.0;
    timeGFUF_ON_Withdraw_R = 0.0;
    timeBM2_Ignition_R = 0.0;
    timeBM2_Ignition_Withdraw_N = 0.0;
    timeBM2_Ignition_Withdraw_R = 0.0;
    timeAPUCM_Ignition_R = 0.0;
    timeAPUCM_Ignition_Withdraw_N = 0.0;
    timeAPUCM_Ignition_Withdraw_R = 0.0;
    timeBD_Tail_Off_Sensed = 0.0;
    timeBD_Seperation_ON_N = 0.0;
    timeBD_Separation_ON_R = 0.0;
    timeBD_Separation_ON_Withdraw_N = 0.0;
    timeBD_Separation_ON_Withdraw_R = 0.0;
    timeBD_Separation_Sensed = 0.0;
    timeBD_Isolation_OFF = 0.0;
    timeBD_Isolation_OFF_Withdraw = 0.0;
    timeS1_Nozzle_Unlock_ON_N = 0.0;
    timeS1_Nozzle_Unlock_ON_R = 0.0;
    timeS1_Nozzle_Unlock_ON_Withdraw_N = 0.0;
    timeS1_Nozzle_Unlock_ON_WIthdraw_R = 0.0;
    timeS1_Ignition_ON_N = 0.0;
    timeS1_Ignition_ON_R = 0.0;
    timeS1_Ignition_ON_Withdraw_N = 0.0;
    timeS1_Ignition_ON_Withdraw_R = 0.0;
    timeS1_FNC_Start = 0.0;
    timeS1_Isolation_ON = 0.0;
    timeS1_Isolation_ON_Withdraw = 0.0;
    timeS2_Nozzle_Unlock_ON_N = 0.0;
    timeS2_Nozzle_Unlock_ON_R = 0.0;
    timeS2_Nozzle_Unlock_ON_Withdraw_N = 0.0;
    timeS2_Nozzle_Unlock_ON_Withdraw_R = 0.0;
    timeS2_Ignition_ON_N = 0.0;
}

#ifdef EXTERNVAR
extern float timeAPUCM_Ignition_N;
extern float timeBM2_Ignition_N;
extern float timeL1_SS_ON_N;
extern float timeS1_Ignition_ON_N;
extern float timeL1_Tail_Off;
extern float Axb;
extern float timeBM2_Ignition_R;
extern float timeFlight;
extern float timeContactor_ADC_ON_N;
extern float timeContactor_L1_ON_Rep;
extern float timeS1_Ignition_R;
extern float timeHS_Pyro_Pusher_OFF;
extern float timeBD_Separation_ON_R;
extern float timeHS_Seperation_Sensing;
extern float time0;
extern float Rgo;
extern float timeS1_Isolation_ON;
extern float timeBDSepSensed;
extern float timeS1_Nozzle_Unlock_ON_R;
extern float timeImpact_200;
extern float timeContactor_ON_ADC_N;
extern float timeBDSep_Sensed;
extern float timeSeeker_Power_ON_N;
extern float s2;
extern float timeS2_Nozzle_Unlock_ON_N;
extern float timeHS_Pyro_Pusher;
extern float timeS1_Nozzle_Unlock_ON_N;
extern float timeBDSep_N;
extern float timeHS_Pyro_Bolt;
extern float NAV2Cmd;
extern float timeBDSep_Rep;
extern float Sensing;
extern float timeBD_Separation_Sensed;
extern float timeWH_detonation_N;
extern float timeOOC;
extern float timeBD_Isolation_OFF;
extern float timeBD_Tail_Off_Sensed;
extern float timeS1_Separation_Sensed;
extern float timeContactor_ON_L1;
extern float timeL1_ON_Rep;
extern float timeIGPhase4;
extern float timeL1_Sep;
extern float timeAPUCM_Ignition_R;
extern float timeL2_Delay;
extern float timeL2_Booster_ON_Rep;
extern float Sensed;
extern float timeL1_SS_ON_Rep;
extern float h0;
extern float timeContactor_ON_ADC_Rep;
extern float h;
extern float timeContactor_L1_ON_N;
extern float timeS2_Nozzle_Unlock_ON_R;
extern float timeGFUF_ON_R;
extern float timeL2_Booster_ON_N;
extern float timeBM1_Ignition_N;
extern float timeBD_Separation_ON_N;
extern float timeContactor_ON_L1_Rep;
extern float timeL1Sep;
extern float timeL1_ON_N;
extern float timeWH_Arming_N;
extern float MODECODE;
extern float timeGFUF_ON_N;
extern float timeS1_Ignition_N;
extern float timeBM1_Ignition_R;
#endif

void misSeq() {
    WORD dopValues[10];
    interface();

    switch(event) {

        /*
* Event Description: Sensing Avg. Axb > 11.892 m/s2 over 5 consecutive samples @
* 10 ms
*/
        case 1:
          
            if ((condition1forEvent1()) || (MODECODE==1 & NAV2Cmd==1)) {



                time0 = timeFlight;
                event = 1;
            }
            break;

        /*
* Event Description: Out-Off-Canister is sensed by 4 OOC sensors and declared
* using 2/4 logic by OBC. For normal pyro channel arming ½ logic is used by taking
* the status OOC1,OOC2(Diagonally opposite) For Redundant pyro channel arming ½
* logic is used by taking the status of OOC3,OOC4 H0 is the Lift-off height.
*/
        case 2:
          
            if ((((timeFlight>=(time0 + 0.600)) && (processDips1Event2())) && ((h - h0)>=8)) || ((MODECODE==1) && (timeFlight>=(time0+1.000)))) {



                time_OOC = timeFlight;
                event = 2;
            }
            break;

        /*
* Event Description: Pyro normal command is issued for BD separation and diversion
* through DSM. 500msec delay is given to get sufficient clearance from canister
* top.
*/
        case 3:
          
            if (timeFlight>=(timeOOC + 0.500)) {

                dopValues[0] = A6;  
                dopValues[1] = A7;  
                dopValues[2] = B6;  
                dopValues[3] = B7;  
                misSeqDop(BUS_0, SS3, 4, dopValues, ON);
                timeBDSep_N = timeFlight;
                event = 3;
            }
            break;

        /*
* Event Description: Pyro repeat command is issued for BD separation and diversion
*/
        case 4:
          
            if (timeFlight>=(timeBDSep_N + 0.010)) {

                dopValues[0] = A6;  
                dopValues[1] = A7;  
                dopValues[2] = B6;  
                dopValues[3] = B7;  
                misSeqDop(BUS_0, SS3, 4, dopValues, ON);
                timeBDSep_Rep = timeFlight;
                event = 4;
            }
            break;

        /*
* Event Description: Pyro normal command is withdrawn for BD separation and
* diversion
*/
        case 5:
          
            if (timeFlight>=(timeBDSep_N + 0.150)) {

                dopValues[0] = A6;  
                dopValues[1] = A7;  
                dopValues[2] = B6;  
                dopValues[3] = B7;  
                misSeqDop(BUS_0, SS3, 4, dopValues, OFF);
                timeBDSep_N_Withdraw = timeFlight;
                event = 5;
            }
            break;

        /*
* Event Description: Pyro repeat command is issued for BD separation and diversion
*/
        case 6:
          
            if (timeFlight>=(timeBDSep_Rep + 0.150)) {

                dopValues[0] = A6;  
                dopValues[1] = A7;  
                dopValues[2] = B6;  
                dopValues[3] = B7;  
                misSeqDop(BUS_0, SS3, 4, dopValues, OFF);
                timeBDSep_Rep_Withdraw = timeFlight;
                event = 6;
            }
            break;

        /*
* Event Description: On-Board separation is sensed through a relay/loop back
* signal
*/
        case 7:
          
            if (((timeFlight>=(timeBDSep_N + 0.200)) && (processDips1Event7())) || (timeFlight>=(timeBDSep_N + 0.300))) {



                timeBDSep_Sensed = timeFlight;
                event = 7;
            }
            break;

        /*
* Event Description: Issue null command to both FNC actuators and switch on the
* contactor supply of FNC actuators. First Null commands to be issued then
* contactor to be made ON through normal Channel
*/
        case 8:
          
            if (timeFlight>=(timeBDSep_Sensed + 0.180 )) {
                issueNullCommand8();

                dopValues[0] = B10;  

                timeContactor_ON_L1_N = timeFlight;
                event = 8;
            }
            break;

        /*
* Event Description: Issue null command to both FNC actuators and switch on the
* contactor supply of FNC actuators. First Null commands to be issued then
* contactor to be made ON through repeat Channel
*/
        case 9:
          
            if (timeFlight>=(timeContactor_ON_L1 + 0.010 )) {
                issueNullCommand9();

                dopValues[0] = B10;  

                timeContactor_ON_L1_Rep = timeFlight;
                event = 9;
            }
            break;

        /*
* Event Description: Issue null command to all 4 ADC actuators and switch on the
* contactors supply of ADC actuators. First Null commands to be issued then
* contactor to be made ON through normal Channel
*/
        case 10:
          
            if (timeFlight>=(timeContactor_ON_L1_Rep + 0.010 )) {
                issueNullCommand10();

                dopValues[0] = A12;  

                timeContactor_ON_ADC_N = timeFlight;
                event = 10;
            }
            break;

        /*
* Event Description: Issue null command to all 4 ADC actuators and switch on the
* contactors supply of ADC actuators. First Null commands to be issued then
* contactor to be made ON through repeat Channel
*/
        case 11:
          
            if (timeFlight>=(timeContactor_ON_ADC_N + 0.010 )) {
                issueNullCommand11();

                dopValues[0] = A12;  

                timeContactor_ON_ADC_Rep = timeFlight;
                event = 11;
            }
            break;

        /*
* Event Description: Contactor L1 FNC ON normal command is withdrawn
*/
        case 12:
          
            if (timeFlight>=(timeContactor_L1_ON_N + 0.150)) {

                dopValues[0] = B10;  

                timeContactor_L1_ON_N_Withdraw = timeFlight;
                event = 12;
            }
            break;

        /*
* Event Description: Contactor L1 ON repeat command is withdrawn
*/
        case 13:
          
            if (timeFlight>=(timeContactor_L1_ON_Rep + 0.150)) {

                dopValues[0] = B10;  

                timeContactor_L1_ON_Rep_Withdraw = timeFlight;
                event = 13;
            }
            break;

        /*
* Event Description: Contactor ADC ON normal command is withdrawn
*/
        case 14:
          
            if (timeFlight>=(timeContactor_ADC_ON_N + 0.150)) {

                dopValues[0] = A12;  

                timeContactor_ON_ADC_N_Withdraw = timeFlight;
                event = 14;
            }
            break;

        /*
* Event Description: Contactor ADC ON repeat command is withdrawn
*/
        case 15:
          
            if (timeFlight>=(timeContactor_ON_ADC_Rep + 0.150)) {

                dopValues[0] = A12;  

                timeContactor_ON_ADC_Rep_Withdraw = timeFlight;
                event = 15;
            }
            break;

        /*
* Event Description: Ignite L1 rocket motor through normal channel
*/
        case 16:
          
            if (timeFlight>=(timeBDSepSensed+ 0.500)) {

                dopValues[0] = A18;  
                dopValues[1] = A19;  
                dopValues[2] = B20;  
                dopValues[3] = B21;  
                misSeqDop(BUS_0, SS3, 4, dopValues, ON);
                timeL1_ON_N = timeFlight;
                event = 16;
            }
            break;

        /*
* Event Description: Ignite L1 rocket motor through repeat channel
*/
        case 17:
          
            if (timeFlight>=(timeL1_ON_N + 0.010)) {

                dopValues[0] = A18;  
                dopValues[1] = A19;  
                dopValues[2] = B20;  
                dopValues[3] = B21;  
                misSeqDop(BUS_0, SS3, 4, dopValues, ON);
                timeL1_ON_Rep = timeFlight;
                event = 17;
            }
            break;

        /*
* Event Description: L1 ignition normal command is withdrawn
*/
        case 18:
          
            if (timeFlight>=(timeL1_ON_N + 0.150)) {

                dopValues[0] = A18;  
                dopValues[1] = A19;  
                dopValues[2] = B20;  
                dopValues[3] = B21;  
                misSeqDop(BUS_0, SS3, 4, dopValues, OFF);
                timeL1_ON_N_Withdraw = timeFlight;
                event = 18;
            }
            break;

        /*
* Event Description: L1 ignition repeat command is withdrawn
*/
        case 19:
          
            if (timeFlight>=(timeL1_ON_Rep + 0.150)) {

                dopValues[0] = A18;  
                dopValues[1] = A19;  
                dopValues[2] = B20;  
                dopValues[3] = B21;  
                misSeqDop(BUS_0, SS3, 4, dopValues, OFF);
                timeL1_ON_Rep_Withdraw = timeFlight;
                event = 19;
            }
            break;

        /*
* Event Description: Start control in three channels. Pitch and yaw through FNC
* and roll through ADC
*/
        case 20:
          
            if (timeFlight>=(timeL1_ON_N + 0.200)) {



                time_Control_Start = timeFlight;
                event = 20;
            }
            break;

        /*
* Event Description: Stop L1 timeVC, this is purely a software command. Switch OFF
* ADC roll control.
*/
        case 21:
          
            if ((timeFlight>=(timeL1_ON_N + 40.000 )) && ((condition2forEvent21()) || (timeFlight>=(timeL1_ON_N + 60.000 )))) {



                time_Control_Stop = timeFlight;
                event = 21;
            }
            break;

        /*
* Event Description: Register L1 timeail OFF
*/
        case 22:
          
            if ((timeFlight>=(timeL1_ON_N + 40.000 )) && ((condition2forEvent22()) || (timeFlight>=(timeL1_ON_N + 60.50 )))) {



                time_L1_Tail_Off = timeFlight;
                event = 22;
            }
            break;

        /*
* Event Description:
*/
        case 23:
          
            if (timeFlight>=(timeL1_Tail_Off + 0.200 )) {

                dopValues[0] = A24;  
                dopValues[1] = B26;  
                misSeqDop(BUS_0, SS3, 2, dopValues, ON);
                timeL1_SS_ON_N = timeFlight;
                event = 23;
            }
            break;

        /*
* Event Description:
*/
        case 24:
          
            if (timeFlight>=(timeL1_Tail_Off + 0.210 )) {

                dopValues[0] = A24;  
                dopValues[1] = B26;  
                misSeqDop(BUS_0, SS3, 2, dopValues, ON);
                timeL1_SS_ON_Rep = timeFlight;
                event = 24;
            }
            break;

        /*
* Event Description: Withdraw Normal Channel Stage1 Stage seperation
*/
        case 25:
          
            if (timeFlight>=(timeL1_SS_ON_N + 0.150 )) {

                dopValues[0] = A24;  
                dopValues[1] = B26;  
                misSeqDop(BUS_0, SS3, 2, dopValues, OFF);
                timeL1_SS_ON_Withdraw_N = timeFlight;
                event = 25;
            }
            break;

        /*
* Event Description: Withdraw repeat Channel Stage1 Stage seperation
*/
        case 26:
          
            if (timeFlight>=(timeL1_SS_ON_Rep+ 0.150 )) {

                dopValues[0] = A24;  
                dopValues[1] = B26;  
                misSeqDop(BUS_0, SS3, 2, dopValues, OFF);
                timeL1_SS_ON_Withdraw_Rep = timeFlight;
                event = 26;
            }
            break;

        /*
* Event Description: L1 seperation sensing by sampling 3 consecutive samples @10
* ms and using 2/4 logic or with 500ms backup time logic.
*/
        case 27:
          
            if (((timeFlight>=(timeL1_SS_ON_N + 0.200)) && (processDips1Event27())) || (timeFlight>=(timeL1_SS_ON_N+ 0.500 ))) {



                timeL1_Sep_Sensing = timeFlight;
                event = 27;
            }
            break;

        /*
* Event Description: Start GV attitude control through ADC
*/
        case 28:
          
            if (timeFlight>=(timeL1_Sep. Sensing + 0.050)) {



                timeGV_Attitude_Control = timeFlight;
                event = 28;
            }
            break;

        /*
* Event Description: L2 Motor Pyro Fire through normal channel with dynamic delay.
* timehis delay is function of range and L1 motor performance
*/
        case 29:
          
            if (timeFlight>=(timeL1Sep. Sensing + timeL2_Delay)) {

                dopValues[0] = 4;  
                dopValues[1] = 5;  
                dopValues[2] = 79;  
                dopValues[3] = 80;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                timeL2_Booster_ON_N = timeFlight;
                event = 29;
            }
            break;

        /*
* Event Description: L2 Motor Pyro firing through repeat channel
*/
        case 30:
          
            if (timeFlight>=(timeL2_Booster_ON_N+ 0.010)) {

                dopValues[0] = 4;  
                dopValues[1] = 5;  
                dopValues[2] = 79;  
                dopValues[3] = 80;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                timeL2_Booster_ON_Rep = timeFlight;
                event = 30;
            }
            break;

        /*
* Event Description: Withdraw L2 motor pyro pulse through normal channel
*/
        case 31:
          
            if (timeFlight>=(timeL2_Booster_ON_N+ 0.150)) {

                dopValues[0] = 4;  
                dopValues[1] = 5;  
                dopValues[2] = 79;  
                dopValues[3] = 80;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                timeL2_Booster_Withdraw_N = timeFlight;
                event = 31;
            }
            break;

        /*
* Event Description: Withdraw L2 motor pyro pulse through repeat channel
*/
        case 32:
          
            if (timeFlight>=(timeL2_Booster_ON_Rep+ 0.150)) {

                dopValues[0] = 4;  
                dopValues[1] = 5;  
                dopValues[2] = 79;  
                dopValues[3] = 80;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                timeL2_Booster_Withdraw_Rep = timeFlight;
                event = 32;
            }
            break;

        /*
* Event Description: Register L2 tail OFF
*/
        case 33:
          
            if ((timeFlight>=(timeL2_Booster_ON_N + 30.000 )) && ((condition2forEvent33()) || (timeFlight>=(timeL2_Booster_ON_N + 36.000 )))) {



                time_L2_Tail_Off = timeFlight;
                event = 33;
            }
            break;

        /*
* Event Description: Normal command to switch ON seeker system Seeker Power ON
* time to impact time should not be more than 220 s(Battery limitation)
*/
        case 34:
          
            if (timeFlight>=(timeImpact_200.0)) {

                dopValues[0] = 60;  
                misSeqDop(BUS_1, SS4, 1, dopValues, ON);
                timeSeeker_Power_ON_N = timeFlight;
                event = 34;
            }
            break;

        /*
* Event Description: Normal command to switch ON seeker system is withdrawn
*/
        case 35:
          
            if (timeFlight>=(timeSeeker_Power_ON_N+ 0.150)) {

                dopValues[0] = 60;  
                misSeqDop(BUS_1, SS4, 1, dopValues, OFF);
                timeSeeker_Power_ON_N_Withdraw = timeFlight;
                event = 35;
            }
            break;

        /*
* Event Description: Heat shield separation Initially time_IGPhase4 set to 1000sec
* and it will reset by guidance algorithm during terminal phase R_go is 60.0 m
*/
        case 36:
          
            if ((timeFlight>timeIGPhase4) && (Rgo<=60)) {

                dopValues[0] = 12;  
                dopValues[1] = 13;  
                dopValues[2] = 87;  
                dopValues[3] = 88;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                timeHS_Pyro_Bolt = timeFlight;
                event = 36;
            }
            break;

        /*
* Event Description: Command for HS pyro-pusher
*/
        case 37:
          
            if (timeFlight>=(timeHS_Pyro_Bolt+ 0.050)) {

                dopValues[0] = 10;  
                dopValues[1] = 11;  
                dopValues[2] = 85;  
                dopValues[3] = 86;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                timeHS_Pyro_Pusher = timeFlight;
                event = 37;
            }
            break;

        /*
* Event Description: HS pyro bolt command withdrawn
*/
        case 38:
          
            if (timeFlight>=(timeHS_Pyro_Bolt+ 0.150)) {

                dopValues[0] = 12;  
                dopValues[1] = 13;  
                dopValues[2] = 87;  
                dopValues[3] = 88;  
                misSeqDop(BUS_1, SS4, 4, dopValues, OFF);
                timeHS_Pyro_Bolt_OFF = timeFlight;
                event = 38;
            }
            break;

        /*
* Event Description: HS pyro pusher command withdrawn
*/
        case 39:
          
            if (timeFlight>=(timeHS_Pyro_Pusher+ 0.150)) {

                dopValues[0] = 10;  
                dopValues[1] = 11;  
                dopValues[2] = 85;  
                dopValues[3] = 86;  
                misSeqDop(BUS_1, SS4, 4, dopValues, OFF);
                timeHS_Pyro_Pusher_OFF = timeFlight;
                event = 39;
            }
            break;

        /*
* Event Description: HS separation sensing by sampling 3 consecutive samples @10ms
* and using 2/2 logic
*/
        case 40:
          
            if (((timeFlight>=(timeHS_Pyro_Pusher_OFF + 0.01)) && (processDips1Event40())) || (timeFlight>=(timeHS_Pyro_Bolt+ 0.300 ))) {



                timeHS_Seperation_Sensing = timeFlight;
                event = 40;
            }
            break;

        /*
* Event Description: Warhead arming is done 100msec after HS separation sensing.
* Prior to this OBC to issue OBC 3 command to SAM through RS422.
*/
        case 41:
          
            if (timeFlight>=(timeHS_Seperation_Sensing + 0.100)) {



                timeWH_Arming_N = timeFlight;
                event = 41;
            }
            break;

        /*
* Event Description: Warhead arming repeat command is issued after normal command
*/
        case 42:
          
            if (timeFlight>=(timeWH_Arming_N + 0.200)) {



                timeWH_Arming_Rep = timeFlight;
                event = 42;
            }
            break;

        /*
* Event Description: h: Missile INS altitude RA timeransmitter ON to be initiated
* when missile altitude <= 7000.0 m.
*/
        case 43:
          
            if ((timeFlight>=(timeWH_Arming_N + 0.210)) && (h<=7000.0)) {



                timeRA_Transmitter_ON = timeFlight;
                event = 43;
            }
            break;

        /*
* Event Description: h: Missile INS altitude Warhead detonation Command
*/
        case 44:
          
            if ((timeFlight>=(timeWH_Arming_N + 10.000)) && (h<=2000.0)) {

                dopValues[0] = 21;  
                misSeqDop(BUS_1, SS4, 1, dopValues, ON);
                timeWH_detonation_N = timeFlight;
                event = 44;
            }
            break;

        /*
* Event Description: Warhead detonation N Command Withdraw
*/
        case 45:
          
            if (timeFlight>=(timeWH_detonation_N + 0.150)) {

                dopValues[0] = 21;  
                misSeqDop(BUS_1, SS4, 1, dopValues, OFF);
                timeWH_detonation_N_Withdraw = timeFlight;
                event = 45;
            }
            break;

        /*
* Event Description: STOP MISSION SEQUENCE
*/
        case 46:
          
            if (timeFlight>=(time0 + 1200.000)) {



                timeEnd = timeFlight;
                event = 46;
            }
            break;

        /*
* Event Description:
*/
        case 47:
          
            if () {

                dopValues[0] = A6;  
                misSeqDop(BUS_0, SS3, 1, dopValues, ON);
                None = timeFlight;
                event = 47;
            }
            break;

        /*
* Event Description:
*/
        case 48:
          
            if () {

                dopValues[0] = A6;  
                misSeqDop(BUS_0, SS3, 1, dopValues, OFF);
                None = timeFlight;
                event = 48;
            }
            break;

        /*
* Event Description:
*/
        case 49:
          
            if () {

                dopValues[0] = B6;  

                None = timeFlight;
                event = 49;
            }
            break;

        /*
* Event Description:
*/
        case 50:
          
            if () {

                dopValues[0] = A18;  
                misSeqDop(BUS_0, SS3, 1, dopValues, ON);
                None = timeFlight;
                event = 50;
            }
            break;

        /*
* Event Description:
*/
        case 51:
          
            if () {

                dopValues[0] = B20;  

                None = timeFlight;
                event = 51;
            }
            break;

        /*
* Event Description:
*/
        case 52:
          
            if () {

                dopValues[0] = A18;  
                misSeqDop(BUS_0, SS3, 1, dopValues, OFF);
                None = timeFlight;
                event = 52;
            }
            break;

        /*
* Event Description:
*/
        case 53:
          
            if () {

                dopValues[0] = A24;  
                misSeqDop(BUS_0, SS3, 1, dopValues, ON);
                None = timeFlight;
                event = 53;
            }
            break;

        /*
* Event Description:
*/
        case 54:
          
            if () {

                dopValues[0] = B26;  

                None = timeFlight;
                event = 54;
            }
            break;

        /*
* Event Description:
*/
        case 55:
          
            if () {

                dopValues[0] = A24;  
                misSeqDop(BUS_0, SS3, 1, dopValues, OFF);
                None = timeFlight;
                event = 55;
            }
            break;

        /*
* Event Description:
*/
        case 56:
          
            if () {

                dopValues[0] = 4;  
                dopValues[1] = 5;  
                misSeqDop(BUS_1, SS4, 2, dopValues, ON);
                None = timeFlight;
                event = 56;
            }
            break;

        /*
* Event Description:
*/
        case 57:
          
            if () {

                dopValues[0] = 4;  
                dopValues[1] = 5;  
                misSeqDop(BUS_1, SS4, 2, dopValues, OFF);
                None = timeFlight;
                event = 57;
            }
            break;

        /*
* Event Description:
*/
        case 58:
          
            if () {

                dopValues[0] = 12;  
                dopValues[1] = 13;  
                dopValues[2] = 87;  
                dopValues[3] = 88;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                None = timeFlight;
                event = 58;
            }
            break;

        /*
* Event Description:
*/
        case 59:
          
            if () {

                dopValues[0] = 10;  
                dopValues[1] = 11;  
                dopValues[2] = 85;  
                dopValues[3] = 86;  
                misSeqDop(BUS_1, SS4, 4, dopValues, ON);
                None = timeFlight;
                event = 59;
            }
            break;

        /*
* Event Description:
*/
        case 60:
          
            if () {



                None = timeFlight;
                event = 60;
            }
            break;

        /*
* Event Description: Sensing of lift off by OBC (Negative Logic – i.e. values will
* change from “1” to “0”)
*/
        case 61:
          
            if ((processDips1Event61()) || (condition2forEvent61())) {



                time0 = timeFlight;
                event = 61;
            }
            break;

        /*
* Event Description: Out of canister sensing by OBC: Negative Logic- i.e values
* will change from “1” to “0”
*/
        case 62:
          
            if ((timeFlight>=time0 +0.680) && ((processDips1Event62()) || (processDips2Event62()))) {



                timeOOC = timeFlight;
                event = 62;
            }
            break;

        /*
* Event Description: Ignition command to BM! From OBC through normal. Additionally
* BM1 ignition command issued by LC via secondary unbilical through delayed pyro
* as a backup firing command to cater for failure modes & emergency launch. IN
* addition to this , one more BM1 ignition command is issued through electronic
* timer triggered by OOC signal as a backup firing command to cater for failure
* modes & emergency launch(ref. section 1.3)
*/
        case 63:
          
            if (timeFlight>=timeOOC +0.050) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeBM1_Ignition_N = timeFlight;
                event = 63;
            }
            break;

        /*
* Event Description: Ignition command to BM1 from OBC through redundant.
*/
        case 64:
          
            if (timeFlight>=timeBM1_Ignition_N +0.010) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeBM1_Ignition_R = timeFlight;
                event = 64;
            }
            break;

        /*
* Event Description: Withdrawal of BM1 ignition normal command.
*/
        case 65:
          
            if (timeFlight>=timeBM1_Ignition_N +0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeBM1_Ignition_Withdraw_N = timeFlight;
                event = 65;
            }
            break;

        /*
* Event Description: Withdrawal of BM1 ignition redundant command.
*/
        case 66:
          
            if (timeFlight>=timeBM1_Ignition_R +0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeBM1_Ignition_Withdraw_R = timeFlight;
                event = 66;
            }
            break;

        /*
* Event Description: Firing of Frid Fin(GF) unfolding through normal. Adaptive
* GFUF delay disabled in group/pontoon launches and small fixed delay used to
* unfold GF early in air/water as there is no significant missile attitude
* divergence is expected in these missions.
*/
        case 67:
          
            if (condition1forEvent67()) {

                dopValues[0] = 60;  
                dopValues[1] = 64;  
                dopValues[2] = 65;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeGFUF_ON_N = timeFlight;
                event = 67;
            }
            break;

        /*
* Event Description: Firing of Grid Fin(GF) unfolding through redundant.
*/
        case 68:
          
            if (timeFlight>=(timeGFUF_ON_N + 0.010)) {

                dopValues[0] = 60;  
                dopValues[1] = 64;  
                dopValues[2] = 65;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeGFUF_ON_R = timeFlight;
                event = 68;
            }
            break;

        /*
* Event Description: Withdrawal of normal GF unfolding ON command
*/
        case 69:
          
            if (timeFlight>=(timeGFUF_ON_N + 0.150)) {

                dopValues[0] = 60;  
                dopValues[1] = 64;  
                dopValues[2] = 65;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeGFUF_ON_Withdraw_N = timeFlight;
                event = 69;
            }
            break;

        /*
* Event Description: Withdrawal of redundant GF unfolding ON command
*/
        case 70:
          
            if (timeFlight>=(timeGFUF_ON_R + 0.150)) {

                dopValues[0] = 60;  
                dopValues[1] = 64;  
                dopValues[2] = 65;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeGFUF_ON_Withdraw_R = timeFlight;
                event = 70;
            }
            break;

        /*
* Event Description: Ignition command to BM2 from OBC through redundant.
*/
        case 71:
          
            if (timeFlight>=timeBM2_Ignition_N+ 0.010) {

                dopValues[0] = 60;  
                dopValues[1] = 66;  
                dopValues[2] = 67;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeBM2_Ignition_R = timeFlight;
                event = 71;
            }
            break;

        /*
* Event Description: Withdrawal of BM2 ignition normal command.
*/
        case 73:
          
            if (timeFlight>=timeBM2_Ignition_N+ 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 66;  
                dopValues[2] = 67;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeBM2_Ignition_Withdraw_N = timeFlight;
                event = 73;
            }
            break;

        /*
* Event Description: Withdrawal of BM2 ignition redundant command.
*/
        case 74:
          
            if (timeFlight>=timeBM2_Ignition_R+ 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 66;  
                dopValues[2] = 67;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeBM2_Ignition_Withdraw_R = timeFlight;
                event = 74;
            }
            break;

        /*
* Event Description: Redundant ignition command to APUCM (Normal pyro).
*/
        case 75:
          
            if (timeFlight>=(timeAPUCM_Ignition_N+ 0.010)) {

                dopValues[0] = 61;  
                dopValues[1] = 67;  
                dopValues[2] = 68;  
                misSeqDop(BUS_0, SS1, 3, dopValues, ON);
                timeAPUCM_Ignition_R = timeFlight;
                event = 75;
            }
            break;

        /*
* Event Description: Withdraw of normal ignition command to APUCM.
*/
        case 76:
          
            if (timeFlight>=(timeAPUCM_Ignition_N+ 0.150)) {

                dopValues[0] = 61;  
                dopValues[1] = 67;  
                dopValues[2] = 68;  
                misSeqDop(BUS_0, SS1, 3, dopValues, OFF);
                timeAPUCM_Ignition_Withdraw_N = timeFlight;
                event = 76;
            }
            break;

        /*
* Event Description: Withdraw of redundant ignition command to APUCM.
*/
        case 77:
          
            if (timeFlight>=(timeAPUCM_Ignition_R+ 0.150)) {

                dopValues[0] = 61;  
                dopValues[1] = 67;  
                dopValues[2] = 68;  
                misSeqDop(BUS_0, SS1, 3, dopValues, OFF);
                timeAPUCM_Ignition_Withdraw_R = timeFlight;
                event = 77;
            }
            break;

        /*
* Event Description: Sensing BD timeail – Off timehrough acceleration sensing
* Backup time of 7.0s is given in case of failure to detect BD tail-off.
*/
        case 78:
          
            if (((timeFlight>=timeBM1_Ignition_N+ 3.5) && (Axb Sensed<=1.0/s2)) || (timeFlight>=timeBM1_Ignition_N+ 7.0)) {



                timeBD_Tail_Off_Sensed = timeFlight;
                event = 78;
            }
            break;

        /*
* Event Description: BD separation pyros firing through normal channel. Base dome
* separation command is issued for firing Base Dome pyro bolt.
*/
        case 79:
          
            if ((timeFlight>=timeBD_Tail_Off_Sensed + 0.200) && ((timeAPUCM_Ignition_N>4999.000) || (timeFlight>=( timeAPUCM_Ignition_N + 0.400)))) {

                dopValues[0] = 61;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeBD_Seperation_ON_N = timeFlight;
                event = 79;
            }
            break;

        /*
* Event Description: BD separation pyros firing through redundant channel
*/
        case 80:
          
            if (timeFlight>=timeBD_Separation_ON_N + 0.010) {

                dopValues[0] = 61;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeBD_Separation_ON_R = timeFlight;
                event = 80;
            }
            break;

        /*
* Event Description: Withdraw normal channel BD separation command
*/
        case 81:
          
            if (timeFlight>=(timeBD_Separation_ON_N + 0.150)) {

                dopValues[0] = 61;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeBD_Separation_ON_Withdraw_N = timeFlight;
                event = 81;
            }
            break;

        /*
* Event Description: Withdraw redundant channel BD separation command
*/
        case 82:
          
            if (timeFlight>=(timeBD_Separation_ON_R + 0.150)) {

                dopValues[0] = 61;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeBD_Separation_ON_Withdraw_R = timeFlight;
                event = 82;
            }
            break;

        /*
* Event Description: Sensing BD separation
*/
        case 83:
          
            if (processDips1Event83()) {



                timeBD_Separation_Sensed = timeFlight;
                event = 83;
            }
            break;

        /*
* Event Description: BD Isolation OFF.
*/
        case 84:
          
            if (timeFlight>=(timeBD_Separation_Sensed + 0.010)) {

                dopValues[0] = 61;  

                timeBD_Isolation_OFF = timeFlight;
                event = 84;
            }
            break;

        /*
* Event Description: Withdrawal of BD Isolation OFF Command.
*/
        case 85:
          
            if (timeFlight>=(timeBD_Isolation_OFF + 0.150)) {

                dopValues[0] = 61;  

                timeBD_Isolation_OFF_Withdraw = timeFlight;
                event = 85;
            }
            break;

        /*
* Event Description: S1 Nozzle unlock command through normal.
*/
        case 86:
          
            if (timeFlight==timeBD_Separation_Sensed + 0.400) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeS1_Nozzle_Unlock_ON_N = timeFlight;
                event = 86;
            }
            break;

        /*
* Event Description: S1 Nozzle unlock command through redundant.
*/
        case 87:
          
            if (timeFlight==timeS1_Nozzle_Unlock_ON_N + 0.010) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeS1_Nozzle_Unlock_ON_R = timeFlight;
                event = 87;
            }
            break;

        /*
* Event Description: Withdrawal of S1 Nozzle Unlock ON command through normal.
*/
        case 88:
          
            if (timeFlight==timeS1_Nozzle_Unlock_ON_N + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeS1_Nozzle_Unlock_ON_Withdraw_N = timeFlight;
                event = 88;
            }
            break;

        /*
* Event Description: Withdrawal of S1 Nozzle Unlock ON command through redundant.
*/
        case 89:
          
            if (timeFlight==timeS1_Nozzle_Unlock_ON_R + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeS1_Nozzle_Unlock_ON_WIthdraw_R = timeFlight;
                event = 89;
            }
            break;

        /*
* Event Description: Ignition command to S1 from OBC through normal.
*/
        case 90:
          
            if (timeFlight==timeBD_Separation_Sensed + 1.400) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeS1_Ignition_ON_N = timeFlight;
                event = 90;
            }
            break;

        /*
* Event Description: Ignition command to S1 from OBC through redundant.
*/
        case 91:
          
            if (timeFlight==timeS1_Ignition_ON_N + 0.010) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeS1_Ignition_ON_R = timeFlight;
                event = 91;
            }
            break;

        /*
* Event Description: Withdrawal of S1 ignition normal command.
*/
        case 92:
          
            if (timeFlight==timeS1_Ignition_N + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeS1_Ignition_ON_Withdraw_N = timeFlight;
                event = 92;
            }
            break;

        /*
* Event Description: Withdrawal of S1 ignition redundant command.
*/
        case 93:
          
            if (timeFlight==timeS1_Ignition_R + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeS1_Ignition_ON_Withdraw_R = timeFlight;
                event = 93;
            }
            break;

        /*
* Event Description: Start S1 Phase attitude control using FNC.
*/
        case 94:
          
            if (timeFlight==timeS1_Ignition_ON_N + 0.200) {



                timeS1_FNC_Start = timeFlight;
                event = 94;
            }
            break;

        /*
* Event Description: S1 Isolation ON
*/
        case 95:
          
            if (timeFlight>=timeS1_Separation_Sensed + 0.010) {

                dopValues[0] = 61;  
                dopValues[1] = 66;  
                dopValues[2] = 67;  
                dopValues[3] = 73;  
                misSeqDop(BUS_1, SS5, 4, dopValues, ON);
                timeS1_Isolation_ON = timeFlight;
                event = 95;
            }
            break;

        /*
* Event Description: Withdrawal of S1 Isolation ON Command.
*/
        case 96:
          
            if (timeFlight>=timeS1_Isolation_ON + 0.150) {

                dopValues[0] = 61;  
                dopValues[1] = 66;  
                dopValues[2] = 67;  
                dopValues[3] = 73;  
                misSeqDop(BUS_1, SS5, 4, dopValues, OFF);
                timeS1_Isolation_ON_Withdraw = timeFlight;
                event = 96;
            }
            break;

        /*
* Event Description: S2 Nozzle unlock command through normal.
*/
        case 97:
          
            if (timeFlight==timeS1_Separation_Sensed + 0.450) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeS2_Nozzle_Unlock_ON_N = timeFlight;
                event = 97;
            }
            break;

        /*
* Event Description: S2 Nozzle unlock command through redundant.
*/
        case 98:
          
            if (timeFlight==timeS2_Nozzle_Unlock_ON_N + 0.010) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, ON);
                timeS2_Nozzle_Unlock_ON_R = timeFlight;
                event = 98;
            }
            break;

        /*
* Event Description: Withdrawal of S2 Nozzle Unlock ON command through normal.
*/
        case 99:
          
            if (timeFlight==timeS2_Nozzle_Unlock_ON_N + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, OFF);
                timeS2_Nozzle_Unlock_ON_Withdraw_N = timeFlight;
                event = 99;
            }
            break;

        /*
* Event Description: Withdrawal of S2 Nozzle Unlock ON command through redundant.
*/
        case 100:
          
            if (timeFlight==timeS2_Nozzle_Unlock_ON_R + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_1, SS5, 3, dopValues, OFF);
                timeS2_Nozzle_Unlock_ON_Withdraw_R = timeFlight;
                event = 100;
            }
            break;

        /*
* Event Description: Ignition command to S2 from OBC through normal.
*/
        case 101:
          
            if (timeFlight==timeS2_Nozzle_Unlock_ON_N + 0.150) {

                dopValues[0] = 60;  
                dopValues[1] = 62;  
                dopValues[2] = 63;  
                misSeqDop(BUS_0, SS3, 3, dopValues, ON);
                timeS2_Ignition_ON_N = timeFlight;
                event = 101;
            }
            break;
        default:
            break;
    }
}