// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onCountdownChange();
void onHoursAlarmChange();
void onMinutesAlarmChange();
void onSecondsAlarmChange();
void onSoundsChange();
void onAlarmStateChange();

int countdown_;
int hours_alarm;
int minutes_alarm;
int seconds_alarm;
int sounds_;
bool alarm_state;
bool led;

void initProperties(){

  ArduinoCloud.addProperty(countdown_, READWRITE, ON_CHANGE, onCountdownChange);
  ArduinoCloud.addProperty(hours_alarm, READWRITE, ON_CHANGE, onHoursAlarmChange);
  ArduinoCloud.addProperty(minutes_alarm, READWRITE, ON_CHANGE, onMinutesAlarmChange);
  ArduinoCloud.addProperty(seconds_alarm, READWRITE, ON_CHANGE, onSecondsAlarmChange);
  ArduinoCloud.addProperty(sounds_, READWRITE, ON_CHANGE, onSoundsChange);
  ArduinoCloud.addProperty(alarm_state, READWRITE, ON_CHANGE, onAlarmStateChange);
  ArduinoCloud.addProperty(led, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);