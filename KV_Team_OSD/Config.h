
/*--------------------------------------------------       configurable parameters      ----------------------------------------------------*/

/********************       HARDWARE settings      *********************/
#define PWMRSSIPIN    A3              
#define RSSIPIN       A3              
#define TEMPPIN       A6           
#define VOLTAGEPIN    A0
#define VIDVOLTAGEPIN A2
#define AMPERAGEPIN   A1
#define LEDPIN        7
//#define USE_VSYNC // Remove "sparklies" on boards that support VSYNC 


/********************       GPS type settings      *********************/
//#define I2CGPS          // Undefine this if you are using I2CGPS - to provide correct speed               


/********************       MAP MODE Settings       *********************/
#define MAPMODE 1       // 1 for MAP - home is center, map shows location of aircraft relative to home 
                        // 0 for RADAR - home is aircraft, map shows location of home relative to aircraft 
//#define MAPMODENORTH  // Enable to use North as MAP reference in MODE 1 instead of take off direction (Default = disable) 


/**********************************         Display Settings         ************************/
#define DECIMAL '.'     // Decimal point character, change to what suits you best (.) (,)
//#define SHIFTDOWN      // Select if your monitor cannot display top line fully. It shifts some lines down
//#define CALLSIGNALWAYS // Enable to permanently display callsign

/**********************       Serial speed      ************************/
//#define SERIAL_SPEED 115200


/**********************************   MSP Options and compatibility **********************/
#define BOX_OSD_SWITCH   // Comment to use LLIGHT switch instead. ( OSD switch will be default and only option after MW 2.2 release).
//#define BOXNAMES       // required to support multiwii 2.1 / 2.0 


/********************       For OSD SWITCH      *********************/
// In following defines, use DISPLAY_MIN_OFF to hide when using OSD_SWITCH
// Otherwise select DISPLAY_ALWAYS (it can be enabled / disbled by GUI

#define  OSDOFF01 DISPLAY_MIN_OFF // GPS_numSatPosition
#define  OSDOFF02 DISPLAY_MIN_OFF // GPS_numSatPositionTop      // On top of screen
#define  OSDOFF03 DISPLAY_MIN_OFF // GPS_directionToHomePosition
#define  OSDOFF04 DISPLAY_MIN_OFF // GPS_distanceToHomePosition
#define  OSDOFF05 DISPLAY_MIN_OFF // speedPosition
#define  OSDOFF06 DISPLAY_MIN_OFF // GPS_angleToHomePosition
#define  OSDOFF07 DISPLAY_MIN_OFF // MwGPSAltPosition
#define  OSDOFF08 DISPLAY_MIN_OFF // sensorPosition
#define  OSDOFF09 DISPLAY_MIN_OFF // MwHeadingPosition
#define  OSDOFF10 DISPLAY_MIN_OFF // MwHeadingGraphPosition
#define  OSDOFF11 DISPLAY_MIN_OFF // MwAltitudePosition
#define  OSDOFF12 DISPLAY_MIN_OFF // MwClimbRatePosition
#define  OSDOFF13 DISPLAY_MIN_OFF // CurrentThrottlePosition
#define  OSDOFF14 DISPLAY_ALWAYS // flyTimePosition
#define  OSDOFF15 DISPLAY_ALWAYS // onTimePosition
#define  OSDOFF16 DISPLAY_ALWAYS // motorArmedPosition
#define  OSDOFF17 DISPLAY_MIN_OFF  // MwGPSLatPosition
#define  OSDOFF18 DISPLAY_MIN_OFF  // MwGPSLonPosition
#define  OSDOFF19 DISPLAY_MIN_OFF  // MwGPSLatPositionTop      // On top of screen
#define  OSDOFF20 DISPLAY_MIN_OFF  // MwGPSLonPositionTop      // On top of screen
#define  OSDOFF21 DISPLAY_MIN_OFF // rssiPosition
#define  OSDOFF22 DISPLAY_MIN_OFF // temperaturePosition
#define  OSDOFF23 DISPLAY_ALWAYS // voltagePosition
#define  OSDOFF24 DISPLAY_ALWAYS // vidvoltagePosition
#define  OSDOFF25 DISPLAY_MIN_OFF // amperagePosition
#define  OSDOFF26 DISPLAY_MIN_OFF // pMeterSumPosition
#define  OSDOFF27 DISPLAY_MIN_OFF  // horizonPosition
#define  OSDOFF28 DISPLAY_MIN_OFF // CallSign Position
#define  OSDOFF29 DISPLAY_ALWAYS // Debug Position
//#define  OSDOFF30 DISPLAY_MIN_OFF // Gimbal Position
#define  OSDOFF31 DISPLAY_MIN_OFF // GPS_time Position


/*----------------------------------------------       Developer parameters      ----------------------------------------------------*/
//#define DEBUG         // Remove to enable debug  
#define HORIZON         // Remove to disable HORIZON and temporarily free memory

