#ifndef print_Data_Time_H_
#define print_Data_Time_H_

void print_Data_Time()
{
  timeClient.update();

    String time_string = timeClient.getFormattedTime();
    unsigned long secs = timeClient.getEpochTime();
    setTime(secs);
    Serial.println(daysOfTheWeek[weekday(secs) - 1] + " " + String(day()) + "/" + String(month()) + "/" + String(year()));

    Serial.println(String(hour()) + ":" + String(minute()) + ":" + String(second()));

}
#endif