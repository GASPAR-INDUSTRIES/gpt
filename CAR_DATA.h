
#ifndef __MAIN_H
#include "main.h"
#endif

#define __CAR_DATA_H


extern CAN_TxHeaderTypeDef pHeader_CAN1; //declare a specific header for message transmittions
extern CAN_RxHeaderTypeDef pRxHeader_CAN1; //declare header for message reception
extern uint32_t TxMailbox_CAN1;
extern uint8_t TxData_CAN1[8];
extern uint8_t dataRX_CAN1[8];


#define RL_TyreTemp_0to7_address		0x240		//0 = internal, 7 = middle
#define RL_TyreTemp_8to15_address		0x244		//8 = middle, 15 = external

#define RR_TyreTemp_0to7_address		0x24C		//0 = internal, 7 = middle
#define RR_TyreTemp_8to15_address		0x26C		//8 = middle, 15 = external

#define FL_TyreTemp_0to7_address		0x254		//0 = internal, 7 = middle
#define FL_TyreTemp_8to15_address		0x25C		//8 = middle, 15 = external

#define FR_TyreTemp_0to7_address		0x260		//0 = internal, 7 = middle
#define FR_TyreTemp_8to15_address		0x264		//8 = middle, 15 = external




#define CAR_CAN1							1
#define CAR_CAN2							2

#define dataIdUnused						0xFFFFFFFF

#define dataType_Int						0
#define dataType_Float						1

#define noDataLimit							16777216

#define dataCheck_Enabled					1
#define dataCheck_Disabled					0

#define dataNotification_Enabled			1
#define dataNotification_Disabled			0

#define dataMaxPriorityLevel				0
#define dataMinPriorityLevel				15
#define dataNoPriorityLevel					99


////////////////////////// CAN DATA PERIPHERIC BEGIN ////////////////////////////
#define waterTemp_peripheric				(CAR_CAN1)
#define oilTemp_peripheric					(CAR_CAN1)
#define fuelTemp_peripheric					(CAR_CAN1)
#define airTemp_peripheric					(CAR_CAN1)

#define oilPressure_peripheric				(CAR_CAN1)
#define fuelPressure_peripheric				(CAR_CAN1)

#define batteryVoltage_peripheric			(CAR_CAN1)

#define gear_peripheric						(CAR_CAN1)
#define rpm_peripheric						(CAR_CAN1)
#define tps_peripheric						(CAR_CAN1)
#define pedal_peripheric					(CAR_CAN1)
#define brake_peripheric					(CAR_CAN1)
#define brakeRear_peripheric				(CAR_CAN1)
#define steer_peripheric					(CAR_CAN1)
#define speed_peripheric					(CAR_CAN1)
#define	slip_peripheric						(CAR_CAN1)


#define drsStatus_peripheric				(CAR_CAN1)
#define launchStatus_peripheric				(CAR_CAN1)
#define map_peripheric						(CAR_CAN1)
#define tractionControl_peripheric			(CAR_CAN1)
/////////////////////// CAN DATA PERIPHERIC END /////////////////////////////////


////////////////////////// CAN DATA ADDRESS BEGIN ///////////////////////////////
#define waterTemp_address					(0x000)
#define oilTemp_address						(0x000)
#define fuelTemp_address					(0x000)
#define airTemp_address						(0x000)

#define oilPressure_address					(0x000)
#define fuelPressure_address				(0x000)

#define batteryVoltage_address				(0x000)

#define gear_address						(0x000)
#define rpm_address							(0x000)
#define tps_address							(0x000)
#define pedal_address						(0x000)
#define brake_address						(0x000)
#define brakeRear_address					(0x000)
#define steer_address						(0x000)
#define speed_address						(0x000)
#define	slip_address						(0x000)


#define drsStatus_address					(0x000)
#define launchStatus_address				(0x000)
#define map_address							(0x000)
#define tractionControl_address				(0x000)
/////////////////////// CAN DATA ADDRESS END ////////////////////////////////////


////////////////////////// CAN DATA LENGTH (BYTES) BEGIN ////////////////////////
#define waterTemp_dataLength				(2)
#define oilTemp_dataLength					(2)
#define fuelTemp_dataLength					(2)
#define airTemp_dataLength					(2)

#define oilPressure_dataLength				(2)
#define fuelPressure_dataLength				(2)

#define batteryVoltage_dataLength			(2)

#define gear_dataLength						(2)
#define rpm_dataLength						(2)
#define tps_dataLength						(2)
#define pedal_dataLength					(1)
#define brake_dataLength					(1)
#define brakeRear_dataLength				(1)
#define steer_dataLength					(2)
#define speed_dataLength					(1)
#define	slip_dataLength						(2)


#define drsStatus_dataLength				(1)
#define launchStatus_dataLength				(1)
#define map_dataLength						(0)
#define tractionControl_dataLength			(0)
/////////////////////// CAN DATA LENGTH (BYTES) END /////////////////////////////


////////////////////////// CAN DATA ID BEGIN ////////////////////////////////////
#define waterTemp_dataId				(dataIdUnused)
#define oilTemp_dataId					(dataIdUnused)
#define fuelTemp_dataId					(dataIdUnused)
#define airTemp_dataId					(dataIdUnused)

#define oilPressure_dataId				(dataIdUnused)
#define fuelPressure_dataId				(dataIdUnused)

#define batteryVoltage_dataId			(dataIdUnused)

#define gear_dataId						(dataIdUnused)
#define rpm_dataId						(dataIdUnused)
#define tps_dataId						(dataIdUnused)
#define pedal_dataId					(dataIdUnused)
#define brake_dataId					(dataIdUnused)
#define brakeRear_dataId				(dataIdUnused)
#define steer_dataId					(dataIdUnused)
#define speed_dataId					(dataIdUnused)
#define	slip_dataId						(dataIdUnused)


#define drsStatus_dataId				(dataIdUnused)
#define launchStatus_dataId				(dataIdUnused)
#define map_dataId						(dataIdUnused)
#define tractionControl_dataId			(dataIdUnused)
/////////////////////// CAN DATA ID END /////////////////////////////////////////


////////////////////////// CAN DATA GAIN BEGIN //////////////////////////////////
#define waterTemp_gain						(0.1)
#define oilTemp_gain						(0.1)
#define fuelTemp_gain						(0.1)
#define airTemp_gain						(0.1)

#define oilPressure_gain					(0.001)
#define fuelPressure_gain					(0.001)

#define batteryVoltage_gain					(0.001)

#define gear_gain							(1)
#define rpm_gain							(1)
#define tps_gain							(0.1)
#define pedal_gain							(1)
#define brake_gain							(1)
#define brakeRear_gain						(1)//((float)0.0555827)
#define steer_gain							(1)
#define speed_gain							(0.1)
#define	slip_gain							(1)


#define drsStatus_gain						(1)
#define launchStatus_gain					(1)
#define map_gain							(1)
#define tractionControl_gain				(1)
/////////////////////// CAN DATA GAIN END ///////////////////////////////////////


/////////////////////// CAN DATA OFFSET BEGIN ///////////////////////////////////
#define waterTemp_offset					(0)
#define oilTemp_offset						(0)
#define fuelTemp_offset						(0)
#define airTemp_offset						(0)

#define oilPressure_offset					(0)
#define fuelPressure_offset					(0)

#define batteryVoltage_offset				(0)

#define gear_offset							(0)
#define rpm_offset							(0)
#define tps_offset							(0)
#define pedal_offset						(0)
#define brake_offset						(0)
#define brakeRear_offset					(0)//((float)-27.9692)
#define steer_offset						(0)
#define speed_offset						(0)
#define	slip_offset							(0)


#define drsStatus_offset					(0)
#define launchStatus_offset					(0)
#define map_offset							(0)
#define tractionControl_offset				(0)
/////////////////////// CAN DATA OFFSET END /////////////////////////////////////


/////////////////////// CAN DATA DATA TYPE BEGIN ////////////////////////////////
#define waterTemp_dataType					dataType_Float
#define oilTemp_dataType					dataType_Float
#define fuelTemp_dataType					dataType_Float
#define airTemp_dataType					dataType_Float

#define oilPressure_dataType				dataType_Float
#define fuelPressure_dataType				dataType_Float

#define batteryVoltage_dataType				dataType_Float

#define gear_dataType						dataType_Int
#define rpm_dataType						dataType_Int
#define tps_dataType						dataType_Int
#define pedal_dataType						dataType_Int
#define brake_dataType						dataType_Int
#define brakeRear_dataType					dataType_Int
#define steer_dataType						dataType_Int
#define speed_dataType						dataType_Float
#define	slip_dataType						dataType_Int


#define drsStatus_dataType					dataType_Int
#define launchStatus_dataType				dataType_Int
#define map_dataType						dataType_Int
#define tractionControl_dataType			dataType_Int
/////////////////////// CAN DATA TYPE END ///////////////////////////////////////


/////////////////////// CAN DATA MAX VALUE BEGIN ////////////////////////////////
#define waterTemp_max						(105)
#define oilTemp_max							(135)
#define fuelTemp_max						(90)
#define airTemp_max							(60)

#define oilPressure_max						(5)
#define fuelPressure_max					(5)

#define batteryVoltage_max					(14)

#define gear_max							(4)
#define rpm_max								(12500)
#define tps_max								(100)
#define pedal_max							(100)
#define brake_max							(noDataLimit)
#define brakeRear_max						(noDataLimit)
#define steer_max							(135)
#define speed_max							(noDataLimit)
#define	slip_max							(noDataLimit)


#define drsStatus_max						(0)
#define launchStatus_max					(noDataLimit)
#define map_max								(noDataLimit)
#define tractionControl_max					(4)
/////////////////////// CAN DATA MAX VALUE END //////////////////////////////////


/////////////////////// CAN DATA MIN VALUE BEGIN ////////////////////////////////
#define waterTemp_min						(65)
#define oilTemp_min							(70)
#define fuelTemp_min						(10)
#define airTemp_min							(5)

#define oilPressure_min						(0.6)
#define fuelPressure_min					(3.0)

#define batteryVoltage_min					(11.6)		//11.8

#define gear_min							(0)
#define rpm_min								(0)
#define tps_min								(12)
#define pedal_min							(0)
#define brake_min							(0)
#define brakeRear_min						(0)
#define steer_min							(-135)
#define speed_min							(0)
#define	slip_min							(0)


#define drsStatus_min						(-1)
#define launchStatus_min					(noDataLimit)
#define map_min								(noDataLimit)
#define tractionControl_min					(0)
/////////////////////// CAN DATA MIN VALUE END //////////////////////////////////


/////////////////////// CAN DATA IDEAL VALUE BEGIN //////////////////////////////
#define waterTemp_ideal						(noDataLimit)
#define oilTemp_ideal						(noDataLimit)
#define fuelTemp_ideal						(noDataLimit)
#define airTemp_ideal						(noDataLimit)

#define oilPressure_ideal					(noDataLimit)
#define fuelPressure_ideal					(noDataLimit)

#define batteryVoltage_ideal				(noDataLimit)

#define gear_ideal							(noDataLimit)
#define rpm_ideal							(12000)
#define tps_ideal							(noDataLimit)
#define pedal_ideal							(noDataLimit)
#define brake_ideal							(noDataLimit)
#define brakeRear_ideal						(noDataLimit)
#define steer_ideal							(0)
#define speed_ideal							(noDataLimit)
#define	slip_ideal							(noDataLimit)


#define drsStatus_ideal						(noDataLimit)
#define launchStatus_ideal					(noDataLimit)
#define map_ideal							(noDataLimit)
#define tractionControl_ideal				(noDataLimit)
/////////////////////// CAN DATA IDEAL VALUE END ////////////////////////////////


/////////////////////// CAN DATA ABSOLUTE MAX VALUE BEGIN ///////////////////////
#define waterTemp_absoluteMax				(800)
#define oilTemp_absoluteMax					(800)
#define fuelTemp_absoluteMax				(800)
#define airTemp_absoluteMax					(60)

#define oilPressure_absoluteMax				(100)
#define fuelPressure_absoluteMax			(100)

#define batteryVoltage_absoluteMax			(50)

#define gear_absoluteMax					(noDataLimit)
#define rpm_absoluteMax						(noDataLimit)
#define tps_absoluteMax						(noDataLimit)
#define pedal_absoluteMax					(noDataLimit)
#define brake_absoluteMax					(noDataLimit)
#define brakeRear_absoluteMax				(noDataLimit)
#define steer_absoluteMax					(noDataLimit)
#define speed_absoluteMax					(noDataLimit)
#define	slip_absoluteMax					(noDataLimit)


#define drsStatus_absoluteMax				(noDataLimit)
#define launchStatus_absoluteMax			(noDataLimit)
#define map_absoluteMax						(noDataLimit)
#define tractionControl_absoluteMax			(noDataLimit)
/////////////////////// CAN DATA ABSOLUTE MAX VALUE END /////////////////////////


/////////////////////// CAN DATA ABSOLUTE MIN VALUE BEGIN ///////////////////////
#define waterTemp_absoluteMin				(-50)
#define oilTemp_absoluteMin					(-50)
#define fuelTemp_absoluteMin				(-50)
#define airTemp_absoluteMin					(-50)

#define oilPressure_absoluteMin				(-50)
#define fuelPressure_absoluteMin			(-50)

#define batteryVoltage_absoluteMin			(-50)

#define gear_absoluteMin					(noDataLimit)
#define rpm_absoluteMin						(noDataLimit)
#define tps_absoluteMin						(noDataLimit)
#define pedal_absoluteMin					(noDataLimit)
#define brake_absoluteMin					(noDataLimit)
#define brakeRear_absoluteMin				(noDataLimit)
#define steer_absoluteMin					(noDataLimit)
#define speed_absoluteMin					(noDataLimit)
#define	slip_absoluteMin					(noDataLimit)


#define drsStatus_absoluteMin				(noDataLimit)
#define launchStatus_absoluteMin			(noDataLimit)
#define map_absoluteMin						(noDataLimit)
#define tractionControl_absoluteMin			(noDataLimit)
/////////////////////// CAN DATA ABSOLUTE MIN VALUE END /////////////////////////


/////////////////////// CAN DATA CHECK ENABLE BEGIN /////////////////////////////
#define waterTemp_check						(dataCheck_Enabled)
#define oilTemp_check						(dataCheck_Enabled)
#define fuelTemp_check						(dataCheck_Enabled)
#define airTemp_check						(dataCheck_Enabled)

#define oilPressure_check					(dataCheck_Enabled)
#define fuelPressure_check					(dataCheck_Enabled)

#define batteryVoltage_check				(dataCheck_Enabled)

#define gear_check							(dataCheck_Disabled)
#define rpm_check							(dataCheck_Disabled)
#define tps_check							(dataCheck_Disabled)
#define pedal_check							(dataCheck_Disabled)
#define brake_check							(dataCheck_Disabled)
#define brakeRear_check						(dataCheck_Disabled)
#define steer_check							(dataCheck_Enabled)
#define speed_check							(dataCheck_Disabled)
#define	slip_check							(dataCheck_Disabled)


#define drsStatus_check						(dataCheck_Enabled)
#define launchStatus_check					(dataCheck_Disabled)
#define map_check							(dataCheck_Disabled)
#define tractionControl_check				(dataCheck_Disabled)
/////////////////////// CAN DATA CHECK ENABLE END ///////////////////////////////


/////////////////////// CAN DATA NOTIFICATION ENABLE BEGIN //////////////////////
#define waterTemp_notification				(dataNotification_Enabled)
#define oilTemp_notification				(dataNotification_Enabled)
#define fuelTemp_notification				(dataNotification_Disabled)
#define airTemp_notification				(dataNotification_Enabled)

#define oilPressure_notification			(dataNotification_Enabled)
#define fuelPressure_notification			(dataNotification_Enabled)

#define batteryVoltage_notification			(dataNotification_Enabled)

#define gear_notification					(dataNotification_Disabled)
#define rpm_notification					(dataNotification_Disabled)
#define tps_notification					(dataNotification_Disabled)
#define pedal_notification					(dataNotification_Disabled)
#define brake_notification					(dataNotification_Disabled)
#define brakeRear_notification				(dataNotification_Disabled)
#define steer_notification					(dataNotification_Enabled)
#define speed_notification					(dataNotification_Disabled)
#define	slip_notification					(dataNotification_Disabled)


#define drsStatus_notification				(dataNotification_Disabled)
#define launchStatus_notification			(dataNotification_Disabled)
#define map_notification					(dataNotification_Disabled)
#define tractionControl_notification		(dataNotification_Enabled)
/////////////////////// CAN DATA NOTIFICATION ENABLE END ////////////////////////


/////////////////////// CAN DATA PRIORITY LEVEL BEGIN ///////////////////////////
#define waterTemp_priority					(5)
#define oilTemp_priority					(5)
#define fuelTemp_priority					(6)
#define airTemp_priority					(dataMaxPriorityLevel)

#define oilPressure_priority				(4)
#define fuelPressure_priority				(4)

#define batteryVoltage_priority				(6)

#define gear_priority						(2)
#define rpm_priority						(2)
#define tps_priority						(3)
#define pedal_priority						(7)
#define brake_priority						(7)
#define brakeRear_priority					(7)
#define steer_priority						(7)
#define speed_priority						(7)
#define	slip_priority						(2)


#define drsStatus_priority					(1)
#define launchStatus_priority				(7)
#define map_priority						(3)
#define tractionControl_priority			(4)
/////////////////////// CAN DATA PRIORITY LEVEL END /////////////////////////////




#define tWater_MAX_VALUE		waterTemp_max		//105
#define tOil_MAX_VALUE			oilTemp_max			//135
#define tAir_MAX_VALUE			airTemp_max			//50
#define pOil_MAX_VALUE			oilPressure_max		//6		//10
#define pFuel_MAX_VALUE			4.5
#define vBat_MAX_VALUE			14		//14


#define tWater_MIN_VALUE		65		//100
#define tOil_MIN_VALUE			70		//125
#define tAir_MIN_VALUE			10
#define pOil_MIN_VALUE			0.8		//0.4
#define pFuel_MIN_VALUE			3.5
#define vBat_MIN_VALUE			11.8	//11.8



#define steer_MAX_VALUE			2210///2323//2305//2323	//2434
#define steer_MIN_VALUE			620		//562
#define steer_MID_VALUE			((steer_MAX_VALUE - steer_MIN_VALUE)/2 + steer_MIN_VALUE)








typedef struct
{
	uint32_t peripheric;					//CAN 1 or CAN 2
	uint32_t dataAddress;					//data address
	uint8_t dataLength;						//data length in bytes

	uint32_t dataId;

	uint8_t dataType;						//int (dataType_Int) or float (dataType_Float)

	float floatData;						//float data (if is int   this variable is also used)
	int32_t intData;						//int   data (if is float this variable is also used)

	float oldFloatData;						//old float data stored to verify changes
	int32_t oldIntData;						//old int   data stored to verify changes

	uint32_t lastTimeData;					//time of data acquisition
	uint32_t oldTimeData;					//time of old data acquisition

	float gain;								//data gain
	float offset;							//data offset

	uint8_t checkEnable;					//enable or disable data controls
	uint8_t notificationEnable;				//enable or disable out of range notifications
	uint8_t priority;						//priority level (0 to 15, lower is better)

	float maxValue;							//max   value of the data
	float minValue;							//min   value of the data
	float idealValue;						//ideal value of the data


	float absoluteMaxValue;					//max	value that can be accepted
	float absoluteMinValue;					//min	value that can be accepted

}CAN_DATA_Typedef;

void CAR_CAN_Init(void);
void CAR_DATA_Read(void);





#define RL	0
#define RR	1
#define FL	2
#define FR	3

//NOTE: the vectors [4] containing the data of the 4 wheels are in the following order: RL, RR, FL, FR
typedef struct
{
	uint32_t 					canLastReceiveTime;			//last received data millis

//	CAN_DATA_Typedef 			wheelSpeed[4];				// Speed of each wheel
//	CAN_DATA_Typedef 			wheelSlip[4];				// Slip ratio for each wheel
	CAN_DATA_Typedef 			speed;
//	CAN_DATA_Typedef 			GPSCarSpeed;
//	CAN_DATA_Typedef 			GPSPosition[3];				// x, y, z coordinates

	CAN_DATA_Typedef			airTemp;

	CAN_DATA_Typedef 			gear;
	CAN_DATA_Typedef			brake;						// Brake front pressure
	CAN_DATA_Typedef			brakeRear;					// Brake rear pressure
	CAN_DATA_Typedef 			pedal;						// Pedal percentage
//	CAN_DATA_Typedef 			clutch;						// Clutch percentage
	CAN_DATA_Typedef 			steer;						// Steering angle
	CAN_DATA_Typedef 			rpm;
	CAN_DATA_Typedef 			drsStatus;
	CAN_DATA_Typedef 			brakeBias;					// Front brake bias percentage

	CAN_DATA_Typedef 			tractionControl;			// Traction control intensity
	CAN_DATA_Typedef			slip;
//	CAN_DATA_Typedef 			launchStatus;				// Launch Control status

	CAN_DATA_Typedef 			map;						//engine mappature


//	CAN_DATA_Typedef 			gForceLateral;				// Lateral G-Force component
//	CAN_DATA_Typedef 			gForceLongitudinal;			// Longitudinal G-Force component
//	CAN_DATA_Typedef 			gForceVertical;				// Vertical G-Force component
//	CAN_DATA_Typedef 			yaw;						// Yaw angle in radians
//	CAN_DATA_Typedef 			pitch;						// Pitch angle in radians
//	CAN_DATA_Typedef 			roll;						// Roll angle in radians


//	CAN_DATA_Typedef 			frontDownforce;				// Car front downforce (Newton)
//	CAN_DATA_Typedef 			rearDownforce;				// Car rear  downforce (Newton)
//	CAN_DATA_Typedef 			downforce;					// Car total downforce (Newton)

//	CAN_DATA_Typedef 			frontDownforce_k;			// Car front downforce (Kg)
//	CAN_DATA_Typedef 			rearDownforce_k;			// Car rear  downforce (Kg)
//	CAN_DATA_Typedef 			downforce_k;				// Car total downforce (Kg)


	CAN_DATA_Typedef 			oilPressure;				// Oil pressure (PSI)
	CAN_DATA_Typedef			fuelPressure;				// Fuel pressure (PSI)
	CAN_DATA_Typedef 			tps;
	CAN_DATA_Typedef 			waterTemp;					// Water temmperature (celsius)
	CAN_DATA_Typedef 			oilTemp;					// Oil temperature (celsius)
	CAN_DATA_Typedef			fuelTemp;					// Fuel temperature (celsius)
	CAN_DATA_Typedef 			fuelLoad;					// Fuel on tank (litri)
	CAN_DATA_Typedef 			batteryVoltage;				// Battery voltage

//	CAN_DATA_Typedef 			fanSpeed[2];				// Fan Speed in order LR (RPM)
//	CAN_DATA_Typedef 			fanCurrent[2];				// Fan Current in order LR (Ampere)
//	CAN_DATA_Typedef			fanPercentage[2];

	CAN_DATA_Typedef 			tyresTemp[4];				// Tyres surface temperature (celsius): values calculated using the average of the 16 sectors
//	CAN_DATA_Typedef 			brakesTemp[4];				// Brakes temperature (celsius)
//	CAN_DATA_Typedef 			tyresPressure[4];			// Tyres pressure (PSI)
//	CAN_DATA_Typedef 			suspensionPosition[4];		// Suspension position (mm)
//	CAN_DATA_Typedef 			frontHeight;				// Car front height (mm)
//	CAN_DATA_Typedef 			rearHeight;					// Car rear height (mm)
//	CAN_DATA_Typedef 			carHeight;					// Car height (mm)

	uint8_t						BSPD_warning;				// BSPD warnig calculated by data on can
	CAN_DATA_Typedef			BSPD_status_can;			// BSPD critic calculated by data on can

	CAN_DATA_Typedef			waterPumpStatus;			// Water pump status (read from DIG1 pin on the dashboard)


	uint32_t 					lastAccelerationTime; 		//0-100 Km/h
	uint32_t 					bestAccelerationTime;		//0-100 Km/h

}CAR_DATA_Typedef;


extern CAR_DATA_Typedef CAR_Data;


void CAR_DATA_Init(void);
void CAR_DATA_Read(void);

void CAR_DATA_Calculations(void);

uint8_t CAR_DATA_GuiCeck(void);





typedef struct
{
	uint8_t 				alarmId;
	CAN_DATA_Typedef* 		dataPointer;

	float					oldData;

	uint8_t 				rangeControlEnable;
	uint8_t 				changeControlEnable;

	uint8_t					dataChanged;					//0 = no data change, 1 = data changed
	uint8_t 				dataOutRange;					//0 = data in range, 1 = data over max value, 2 = data under min value
	uint32_t 				dataOutRangeTime;
	uint32_t				dataOutRangeMillis;

	uint8_t					alarmStatus;
	uint8_t					alarmOnDisplay;
	uint8_t 				alarmDisplayed;
	uint32_t				alarmResetTime;					//time needed to have an other alarm (only out of range)
	uint32_t				alarmResetMillis;
	uint8_t					alarmWaiting;					//0 = no alarm to be notified, 1 = there is an alarm to be notified
	uint32_t				alarmTime;
	uint32_t 				alarmMillis;

	char*					message;

	uint32_t				messageColor;
	uint32_t				dataColor;
	uint32_t				backColorUnder;
	uint32_t				backColorOver;
	uint8_t 				backColorSelector;				//0 = data in range, 1 = backColorOver, 2 = backColorUnder

	uint8_t					firstCall;
}CAN_DATA_GuiAlarmTypedef;

uint8_t CAN_DATA_GuiChangePopUp_Add(uint8_t alarmId, CAN_DATA_Typedef* dataToAdd, uint32_t timeout, uint32_t popUpTime, uint32_t resetTime, char* message, uint32_t messageColor, uint32_t dataColor, uint32_t backColor);
uint8_t CAN_DATA_GuiRangePopUp_Add(uint8_t alarmId, CAN_DATA_Typedef* dataToAdd, uint32_t timeout, uint32_t popUpTime, uint32_t resetTime, char* message, uint32_t messageColor, uint32_t dataColor, uint32_t backColorUnder, uint32_t backColorOver);

uint8_t CAN_DATA_GuiPopUp_Disable(uint8_t alarmId);
void CAN_DATA_GuiPopUp_DisableAll(void);
uint8_t CAN_DATA_GuiChangePopUp_Enable(uint8_t alarmId);
uint8_t CAN_DATA_GuiRangePopUp_Enable(uint8_t alarmId);

void CAR_DATA_GuiAlarm_Init(void);

extern uint8_t alarmPageDisplayRefreshEnable;

void CAN_Data_AlarmDetection(void);



