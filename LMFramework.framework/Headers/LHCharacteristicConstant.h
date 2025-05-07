//
//  LHCharacteristicConstant.h
//  commonDemo
//
//  Created by dengzhihao on 2017/11/21.
//  Copyright © 2017年 LM21Mac002. All rights reserved.
//
#import <Foundation/Foundation.h>

#ifndef LHCharacteristicConstant_h
#define LHCharacteristicConstant_h

FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeDateTime;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLanguage;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeTimer;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeRemoveAccessory;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeAccessoryJoined;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeNewAccessoryPermission;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeEnergyConsumption;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeFirmwareUpdateStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeFirmwareUpdateChecksum;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeFirmwareUpdateUrl;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeOccupancyThreshold;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCurrentPower;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeFirmwareUpdateSupportType;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeFirmwareUpdateData;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayIdentifyAccessory;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCurrentAtmosphericPressure;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayVolume;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayCountryDomain;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayBindKey;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayBindState;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeDeviceModel;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayFirmwareUpdateStatus;   //绑定到AIOT失败以后的错误码

FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypePermitJoin;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLumiDid;

FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypePowerOffMemory;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSensitivity;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeReverse;  //窗帘电机反转
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCleanPosition; // 清除行程
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCurtainAutomatic; //轻拉自动开/关窗帘
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCurtainPositionSettingState; //窗帘行程设置

FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeMiioProvisioned; //是否绑定米家

FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeAlarmTriggerDevices;//网关报警触发设备
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeStayAlarmTriggerDevices;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeNightAlarmTriggerDevices;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockRandomCode; //私有属性，表示门锁生成的随机码，用于验证OTA链路安全
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSwithIndexCode; //

//Gateway
///电源开关状态
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypePowerStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLightBulbHueValue;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLightBulbSatValue;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLightBulbBrightnessValue;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayLanguage;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeGatewayDate;

//Motion sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeMotionSensorChkStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeMotionSensorTiggerTime;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeMotionSensorBatteryLevelStatus;

//Stateless Programmable Switch
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSwitchStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeMiniSwitchBatteryLevel;

//Humidity Sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCurrentHumidity;

//Temperature Sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCurrentTemperature;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypePressureValue;

//Vibration Sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeVibrationSensorStatus;

//Leak Sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLeakSensorStatus;

//Contact Sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeContactSensorOpenStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeContactSensorPowerStatus;


//Wall Single Switch
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeWallSwitchSingleStatus;

//Air Conditioner
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeAirConditionerState;
//Alarm Status
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeAlarmStatus;
//Alarm Alarming
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeAlarming;
//Cutain
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCutainStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeCutainLevel;
//Lock
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockAddUser;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockAlarm;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockCardWrong;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockCloseUser;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockDeleteUser;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockFingerWrong;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockOpenCause;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockOpenUser;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockPasswordVerifyWrongAlarm;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockRevStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeLockedStatus;
//Smoke Sensor
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSmokeSensorAlarm;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSmokeSensorDensity;
//Gas
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeNatgasAlarm;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeNatgasDensity;
//Magnet
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeMagnetStatus;
//Outlet
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeOutletUseStatus;
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeOutletPowerOffMemory;
//Firmware Version
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeFirmwareVersion;
//Manufacture
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeManufacture;
//Model
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSpu;
//Serial Number
FOUNDATION_EXPORT NSString * const kLH_CharacteristicTypeSerialNumber;
#endif /* LHCharacteristicConstant_h */

FOUNDATION_EXPORT NSString *const kLH_CharacteristicTypeFP2SensorIndex;

FOUNDATION_EXPORT NSString *const kLH_CharacteristicTypeBindType;
